#!/usr/bin/env python3
"""
drone_teleop: Controla el quadrotor MuJoCo de forma aislada.

CÓMO FUNCIONA EL SIMULADOR
============================

                    ┌────────────────────────────┐
                    │     MuJoCo (Física 3D)      │
                    │                              │
  trpy_cmd ────────►│  Plugin AcroMode:            │
  (thrust, wx,wy,wz)│   - Recibe thrust + ω_des   │
                    │   - Controlador interno de   │
                    │     rate (PD en ω)           │
                    │   - Aplica fuerzas/torques   │
                    │     al modelo rígido          │
                    │                              │
                    │  Plugins de sensores:         │
                    │   - OdometryPublisher ────────►── /quadrotor/odom
                    │   - ImuPublisher ─────────────►── /quadrotor/imu
                    └────────────────────────────┘

VARIABLE DE CONTROL (lo que TÚ envías):
  TRPYCommand.thrust          → Fuerza en eje Z del body [Newtons]
                                 Hover ≈ mass * g = 1.08 * 9.81 ≈ 10.6 N
                                 Rango MuJoCo: [0, 82] N
  TRPYCommand.angular_velocity → Velocidad angular deseada [rad/s]
                                 .x = roll rate
                                 .y = pitch rate
                                 .z = yaw rate

DENTRO DEL PLUGIN (no lo tocas, pero es bueno saber):
  El AcroMode tiene un controlador de rate interno:
    τ = ω × (J·ω) - J · Kom · (ω_actual - ω_deseada)
  Con J = diag(0.00345, 0.00180, 0.00180)
      Kom = diag(20, 35, 45)
"""

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from sensor_msgs.msg import Imu
from quadrotor_msgs.msg import TRPYCommand
import numpy as np
import math
import time
import threading


class DroneTeleop(Node):
    def __init__(self):
        super().__init__('drone_teleop')

        # ── Parámetros físicos ──
        self.mass = 1.08        # kg  (del modelo MuJoCo)
        self.g = 9.81           # m/s²
        self.hover_thrust = self.mass * self.g  # ≈ 10.6 N

        # ── Estado ──
        self.pos = np.zeros(3)
        self.vel = np.zeros(3)
        self.quat = np.array([1., 0., 0., 0.])  # w,x,y,z
        self.omega = np.zeros(3)
        self.connected = False

        # ── Control ──
        self.mode = 'idle'  # idle | hover | goto | land
        self.target = np.zeros(3)
        self.target_yaw = 0.0

        # ── ROS2 ──
        self.cmd_pub = self.create_publisher(
            TRPYCommand, '/quadrotor/trpy_cmd', 10)
        self.create_subscription(
            Odometry, '/quadrotor/odom', self._odom_cb, 10)
        self.create_subscription(
            Imu, '/quadrotor/imu', self._imu_cb, 10)
        self.create_timer(0.01, self._control_loop)  # 100 Hz

    # ═══════════════════════════════════════════════════════════
    #  Callbacks
    # ═══════════════════════════════════════════════════════════
    def _odom_cb(self, msg):
        p = msg.pose.pose.position
        q = msg.pose.pose.orientation
        v = msg.twist.twist.linear
        self.pos[:] = [p.x, p.y, p.z]
        self.vel[:] = [v.x, v.y, v.z]
        self.quat[:] = [q.w, q.x, q.y, q.z]
        self.connected = True

    def _imu_cb(self, msg):
        w = msg.angular_velocity
        self.omega[:] = [w.x, w.y, w.z]

    # ═══════════════════════════════════════════════════════════
    #  Enviar comando crudo al simulador
    # ═══════════════════════════════════════════════════════════
    def send_cmd(self, thrust, wx=0., wy=0., wz=0.):
        """
        Envía directamente al simulador:
          thrust [N]: fuerza en body-Z.  Hover ≈ 10.6 N
          wx,wy,wz [rad/s]: velocidad angular deseada
        """
        msg = TRPYCommand()
        msg.thrust = float(thrust)
        msg.angular_velocity.x = float(wx)
        msg.angular_velocity.y = float(wy)
        msg.angular_velocity.z = float(wz)
        self.cmd_pub.publish(msg)

    # ═══════════════════════════════════════════════════════════
    #  Helpers de rotación
    # ═══════════════════════════════════════════════════════════
    def yaw(self):
        w, x, y, z = self.quat
        return math.atan2(2*(w*z + x*y), 1 - 2*(y*y + z*z))

    def R(self):
        """Rotation matrix body→world."""
        w, x, y, z = self.quat
        return np.array([
            [1-2*(y*y+z*z), 2*(x*y-w*z),   2*(x*z+w*y)],
            [2*(x*y+w*z),   1-2*(x*x+z*z), 2*(y*z-w*x)],
            [2*(x*z-w*y),   2*(y*z+w*x),   1-2*(x*x+y*y)]])

    # ═══════════════════════════════════════════════════════════
    #  Control Loop (PD simple)
    # ═══════════════════════════════════════════════════════════
    def _control_loop(self):
        if not self.connected or self.mode == 'idle':
            return

        # Ganancias PD
        Kp_xy, Kd_xy = 4.0, 2.5
        Kp_z,  Kd_z  = 8.0, 4.0
        Kp_att        = 6.0
        Kp_yaw        = 2.0

        # Error posición → aceleración deseada (world frame)
        e = self.target - self.pos
        a_des = np.array([
            Kp_xy * e[0] - Kd_xy * self.vel[0],
            Kp_xy * e[1] - Kd_xy * self.vel[1],
            Kp_z  * e[2] - Kd_z  * self.vel[2] + self.g
        ])

        # Thrust = masa * accel proyectada en z-body
        Rot = self.R()
        z_body = Rot[:, 2]
        thrust = self.mass * np.dot(a_des, z_body)
        thrust = np.clip(thrust, 0., 60.)

        # Desired roll/pitch from acceleration
        psi = self.yaw()
        az = max(a_des[2], 0.1)
        pitch_des = np.clip((a_des[0]*math.cos(psi) + a_des[1]*math.sin(psi))/az, -0.5, 0.5)
        roll_des  = np.clip((a_des[0]*math.sin(psi) - a_des[1]*math.cos(psi))/az, -0.5, 0.5)

        # Current angles
        pitch_cur = math.asin(np.clip(Rot[0,2], -1, 1))
        roll_cur  = math.atan2(-Rot[1,2], Rot[2,2])

        # Yaw error wrapped
        yaw_err = (self.target_yaw - psi + math.pi) % (2*math.pi) - math.pi

        # Angular velocity commands
        wx = Kp_att * (roll_des - roll_cur)
        wy = Kp_att * (pitch_des - pitch_cur)
        wz = Kp_yaw * yaw_err

        self.send_cmd(thrust, wx, wy, wz)

    # ═══════════════════════════════════════════════════════════
    #  Acciones de alto nivel
    # ═══════════════════════════════════════════════════════════
    def takeoff(self, h=1.0):
        self.target[:] = [self.pos[0], self.pos[1], h]
        self.target_yaw = self.yaw()
        self.mode = 'hover'
        self.get_logger().info(f'TAKEOFF → z={h:.1f}')

    def land(self):
        self.target[:2] = self.pos[:2]
        self.target[2] = 0.05
        self.mode = 'hover'
        self.get_logger().info('LAND')

    def goto(self, x, y, z, yaw_deg=None):
        self.target[:] = [x, y, z]
        if yaw_deg is not None:
            self.target_yaw = math.radians(yaw_deg)
        self.mode = 'goto'
        self.get_logger().info(f'GOTO → [{x:.1f}, {y:.1f}, {z:.1f}]')

    def hover(self):
        self.target[:] = self.pos.copy()
        self.target_yaw = self.yaw()
        self.mode = 'hover'

    def stop(self):
        self.mode = 'idle'
        self.send_cmd(0.)


# ═══════════════════════════════════════════════════════════════
#  CLI interactivo
# ═══════════════════════════════════════════════════════════════
HELP = """
╔═══════════════════════════════════════════════════════════════════╗
║            🚁  DRONE TELEOP — MuJoCo Simulator  🚁              ║
╠═══════════════════════════════════════════════════════════════════╣
║                                                                   ║
║  COMANDOS DE VUELO:                                               ║
║    takeoff [H]        Despegar a H metros (default 1.0)           ║
║    land               Aterrizar                                   ║
║    goto X Y Z [YAW°]  Ir a posición (yaw en grados)              ║
║    hover              Mantener posición actual                    ║
║    stop               EMERGENCIA: apagar motores                 ║
║                                                                   ║
║  COMANDOS DIRECTOS (sin controlador PD):                         ║
║    thrust T           Solo thrust en N (hover≈10.6)               ║
║    cmd T WX WY WZ     Thrust + angular velocity                  ║
║                                                                   ║
║  INFO:                                                            ║
║    state              Mostrar posición/velocidad/modo             ║
║    help               Mostrar este menú                           ║
║    quit               Salir                                       ║
║                                                                   ║
╠═══════════════════════════════════════════════════════════════════╣
║  INTERFAZ DE CONTROL:                                             ║
║    Topic: /quadrotor/trpy_cmd (quadrotor_msgs/TRPYCommand)       ║
║    .thrust          → Fuerza eje Z body [N] (0-82, hover≈10.6)   ║
║    .angular_velocity.x → Roll rate  [rad/s]                      ║
║    .angular_velocity.y → Pitch rate [rad/s]                      ║
║    .angular_velocity.z → Yaw rate   [rad/s]                      ║
╚═══════════════════════════════════════════════════════════════════╝
"""


def cli(node):
    print(HELP)
    while rclpy.ok():
        try:
            line = input('\n 🚁 > ').strip()
        except (EOFError, KeyboardInterrupt):
            node.stop()
            break
        if not line:
            continue

        parts = line.split()
        c = parts[0].lower()

        try:
            if c == 'help':
                print(HELP)
            elif c == 'takeoff':
                node.takeoff(float(parts[1]) if len(parts) > 1 else 1.0)
            elif c == 'land':
                node.land()
            elif c == 'goto':
                x, y, z = float(parts[1]), float(parts[2]), float(parts[3])
                yaw = float(parts[4]) if len(parts) > 4 else None
                node.goto(x, y, z, yaw)
            elif c == 'hover':
                node.hover()
            elif c == 'stop':
                node.stop()
            elif c == 'thrust':
                t = float(parts[1]) if len(parts) > 1 else node.hover_thrust
                node.mode = 'idle'
                node.send_cmd(t)
                print(f'  → Thrust: {t:.2f} N')
            elif c == 'cmd':
                t, wx, wy, wz = float(parts[1]), float(parts[2]), float(parts[3]), float(parts[4])
                node.mode = 'idle'
                node.send_cmd(t, wx, wy, wz)
                print(f'  → T={t:.1f}N  ω=[{wx:.2f}, {wy:.2f}, {wz:.2f}] rad/s')
            elif c == 'state':
                y = math.degrees(node.yaw())
                print(f'  Pos:  [{node.pos[0]:7.3f}, {node.pos[1]:7.3f}, {node.pos[2]:7.3f}] m')
                print(f'  Vel:  [{node.vel[0]:7.3f}, {node.vel[1]:7.3f}, {node.vel[2]:7.3f}] m/s')
                print(f'  Yaw:  {y:7.2f}°')
                print(f'  Mode: {node.mode}')
            elif c == 'quit':
                node.stop()
                break
            else:
                print(f'  ¿? "{c}" — escribe "help"')
        except Exception as e:
            print(f'  Error: {e}')


def main():
    rclpy.init()
    node = DroneTeleop()

    # Spin ROS2 en background
    t = threading.Thread(target=rclpy.spin, args=(node,), daemon=True)
    t.start()

    # Esperar odom
    print('\n⏳ Esperando conexión con MuJoCo...')
    for _ in range(100):
        if node.connected:
            break
        time.sleep(0.1)

    if not node.connected:
        print('❌ No se recibió /quadrotor/odom. ¿Está corriendo el simulador?')
        print('   Lanza primero: ros2 launch drone_teleop mujoco_only.launch.py')
        rclpy.shutdown()
        return

    print(f'✅ Conectado! Pos: [{node.pos[0]:.2f}, {node.pos[1]:.2f}, {node.pos[2]:.2f}]')
    cli(node)

    node.destroy_node()
    rclpy.shutdown()
