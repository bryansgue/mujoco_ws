#!/bin/bash
# ═══════════════════════════════════════════════════════════
#  Setup script para mujoco_ws
#  Ejecutar UNA sola vez después de clonar/copiar el workspace.
#
#  Prerequisitos (no instalados por este script):
#    - ROS2 Humble (/opt/ros/humble)
#    - colcon, python3-xacro, python3-rosdep
#    - libglfw3, libgl1 (para MuJoCo viewer)
# ═══════════════════════════════════════════════════════════
set -e

WS_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
MUJOCO_DIR="${WS_DIR}/mujoco-3.4.0"
MUJOCO_VERSION="3.4.0"
MUJOCO_TARBALL="mujoco-${MUJOCO_VERSION}-linux-x86_64.tar.gz"
MUJOCO_URL="https://github.com/google-deepmind/mujoco/releases/download/${MUJOCO_VERSION}/${MUJOCO_TARBALL}"

echo "╔═══════════════════════════════════════════╗"
echo "║   🚁  UAV Workspace Setup                 ║"
echo "╠═══════════════════════════════════════════╣"
echo "║  Workspace: ${WS_DIR}"
echo "╚═══════════════════════════════════════════╝"

# 1. ROS2 check (no install, solo verifica)
if [ -z "$ROS_DISTRO" ]; then
    if [ -f /opt/ros/humble/setup.bash ]; then
        echo "Sourceando ROS2 Humble..."
        source /opt/ros/humble/setup.bash
    else
        echo "❌ ROS2 Humble no encontrado en /opt/ros/humble"
        echo "   Instalar antes de correr este script:"
        echo "   https://docs.ros.org/en/humble/Installation.html"
        exit 1
    fi
fi
echo "✅ ROS2: $ROS_DISTRO"

# 2. MuJoCo: descargar si falta
if [ ! -f "${MUJOCO_DIR}/bin/simulate" ]; then
    echo "MuJoCo no encontrado. Descargando ${MUJOCO_VERSION}..."
    cd "${WS_DIR}"
    if command -v wget >/dev/null 2>&1; then
        wget -q --show-progress "${MUJOCO_URL}" -O "${MUJOCO_TARBALL}"
    elif command -v curl >/dev/null 2>&1; then
        curl -fL --progress-bar "${MUJOCO_URL}" -o "${MUJOCO_TARBALL}"
    else
        echo "❌ wget/curl no disponible. Instalar uno de los dos."
        exit 1
    fi
    tar -xzf "${MUJOCO_TARBALL}"
    rm "${MUJOCO_TARBALL}"
fi
echo "✅ MuJoCo: ${MUJOCO_DIR}"

# 3. Deps de paquetes ROS (opcional, si rosdep configurado)
if command -v rosdep >/dev/null 2>&1; then
    echo "Resolviendo dependencias ROS con rosdep..."
    cd "${WS_DIR}"
    rosdep install --from-paths src --ignore-src -r -y 2>&1 | tail -5 || true
fi

# 4. Compilar
export COLCON_UAV_WS_DIR="${WS_DIR}"
echo ""
echo "Compilando workspace..."
cd "${WS_DIR}"
colcon build --symlink-install \
    --cmake-args -DMUJOCO_ROOT_DIR="${MUJOCO_DIR}" \
    2>&1 | tail -10

# 5. Source local
source "${WS_DIR}/install/setup.bash"

# 6. Verificar paquetes
echo ""
echo "Paquetes detectados:"
ros2 pkg list 2>/dev/null | grep -E "drone_teleop|mujoco|quadrotor" | sed 's/^/  ✅ /'

# 7. Inyectar bloque en ~/.bashrc (idempotente, marcadores)
BASHRC_MARK_START="# >>> mujoco_ws aliases >>>"
BASHRC_MARK_END="# <<< mujoco_ws aliases <<<"

if ! grep -qF "${BASHRC_MARK_START}" ~/.bashrc 2>/dev/null; then
    cat >> ~/.bashrc <<EOF

${BASHRC_MARK_START}
# Auto-generado por mujoco_ws/setup.sh — editar entre marcadores
export COLCON_UAV_WS_DIR=${WS_DIR}
source ${WS_DIR}/install/setup.bash
export PATH="\$PATH:${WS_DIR}/install/drone_teleop/bin"

# Reset del drone en MuJoCo
dronreset() { ros2 service call "/\${1:-quadrotor}/sim/reset" std_srvs/srv/Trigger '{}' | tail -2; }

# Launches del simulador (arg posicional = quad_name, default: quadrotor)
sim_gate_collideron()  { ros2 launch drone_teleop mujoco_only.launch.py     scene:=gates gates_collide:=on  quad_name:="\${1:-quadrotor}"; }
sim_gate_collideroff() { ros2 launch drone_teleop mujoco_headless.launch.py scene:=gates gates_collide:=off realtime:=true quad_name:="\${1:-quadrotor}"; }
${BASHRC_MARK_END}
EOF
    echo "✅ Bloque de aliases añadido a ~/.bashrc"
else
    echo "ℹ️  Bloque mujoco_ws ya presente en ~/.bashrc (no modificado)"
fi

echo ""
echo "╔═══════════════════════════════════════════╗"
echo "║   Setup completo                          ║"
echo "╠═══════════════════════════════════════════╣"
echo "║  Recargar shell:                          ║"
echo "║    source ~/.bashrc                       ║"
echo "║                                           ║"
echo "║  Probar:                                  ║"
echo "║    sim_gate_collideroff                   ║"
echo "║    sim_gate_collideron                    ║"
echo "║    ros2 run drone_teleop teleop           ║"
echo "╚═══════════════════════════════════════════╝"
