#!/bin/bash
# Wrapper para ros2 launch que cierra MuJoCo ante Ctrl+C o Ctrl+Z.
# Uso: mujoco_launch.sh [args para mujoco_only.launch.py]
# Ej:  mujoco_launch.sh scene:=motors

cleanup() {
    echo ""
    echo "[mujoco_launch] Cerrando MuJoCo y nodos ROS2..."
    # Matar el proceso ros2 launch y todo su grupo de procesos
    if [ -n "$LAUNCH_PID" ]; then
        kill -- -"$LAUNCH_PID" 2>/dev/null
    fi
    # Por si acaso, matar cualquier instancia de simulate que quede
    pkill -f "simulate.*drone_teleop_scene" 2>/dev/null
    exit 0
}

trap cleanup SIGINT SIGTERM SIGTSTP

# Lanzar ros2 launch en un subshell con su propio grupo de procesos
setsid ros2 launch drone_teleop mujoco_only.launch.py "$@" &
LAUNCH_PID=$!

# Esperar a que termine
wait "$LAUNCH_PID"
