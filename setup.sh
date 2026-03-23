#!/bin/bash
# ═══════════════════════════════════════════════════════════
#  Setup script para uav_ws
#  Ejecutar UNA sola vez después de clonar/copiar el workspace
# ═══════════════════════════════════════════════════════════
set -e

WS_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
MUJOCO_DIR="${WS_DIR}/mujoco-3.4.0"

echo "╔═══════════════════════════════════════════╗"
echo "║   🚁  UAV Workspace Setup                ║"
echo "╠═══════════════════════════════════════════╣"
echo "║  Workspace: ${WS_DIR}"
echo "╚═══════════════════════════════════════════╝"

# 1. Verificar ROS2
if [ -z "$ROS_DISTRO" ]; then
    echo "Sourceando ROS2 Humble..."
    source /opt/ros/humble/setup.bash
fi
echo "✅ ROS2: $ROS_DISTRO"

# 2. Verificar MuJoCo
if [ ! -f "${MUJOCO_DIR}/bin/simulate" ]; then
    echo "❌ MuJoCo no encontrado en ${MUJOCO_DIR}"
    echo "   Descarga de: https://github.com/google-deepmind/mujoco/releases/tag/3.4.0"
    echo "   Y extrae en: ${WS_DIR}/"
    exit 1
fi
echo "✅ MuJoCo: ${MUJOCO_DIR}"

# 3. Dependencias del sistema
echo "Instalando dependencias del sistema..."
sudo apt-get install -y libglfw3-dev libeigen3-dev 2>/dev/null || true

# 4. Variable de entorno
export COLCON_UAV_WS_DIR="${WS_DIR}"
echo "✅ COLCON_UAV_WS_DIR=${WS_DIR}"

# 5. Compilar
echo ""
echo "Compilando workspace..."
cd "${WS_DIR}"
colcon build --symlink-install \
    --cmake-args -DMUJOCO_ROOT_DIR="${MUJOCO_DIR}" \
    2>&1 | tail -10

# 6. Source
source "${WS_DIR}/install/setup.bash"

# 7. Verificar
echo ""
echo "╔═══════════════════════════════════════════╗"
echo "║   Verificación:                           ║"
echo "╠═══════════════════════════════════════════╣"
ros2 pkg list 2>/dev/null | grep -E "drone_teleop|mujoco|quadrotor" | while read pkg; do
    echo "║   ✅ $pkg"
done
echo "╠═══════════════════════════════════════════╣"
echo "║                                           ║"
echo "║   CÓMO USAR:                              ║"
echo "║   Terminal 1:                              ║"
echo "║     source install/setup.bash              ║"
echo "║     ros2 launch drone_teleop \\            ║"
echo "║         mujoco_only.launch.py              ║"
echo "║                                           ║"
echo "║   Terminal 2:                              ║"
echo "║     source install/setup.bash              ║"
echo "║     ros2 run drone_teleop teleop           ║"
echo "║                                           ║"
echo "╚═══════════════════════════════════════════╝"

# 8. Agregar a bashrc si no está
if ! grep -q "COLCON_UAV_WS_DIR.*uav_ws" ~/.bashrc 2>/dev/null; then
    echo "" >> ~/.bashrc
    echo "# UAV Workspace" >> ~/.bashrc
    echo "export COLCON_UAV_WS_DIR=${WS_DIR}" >> ~/.bashrc
    echo "✅ Agregado COLCON_UAV_WS_DIR al ~/.bashrc"
fi
