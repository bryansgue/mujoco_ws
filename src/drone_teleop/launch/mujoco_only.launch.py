"""
Launch SOLO el simulador MuJoCo — sin NMPC, sin trackers, sin mav_manager.
Solo el drone en el mundo, listo para recibir comandos en /quadrotor/trpy_cmd.
"""
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os
import xacro


def mujoco_setup(context, *args, **kwargs):
    pkg_share = get_package_share_directory("acp_mujoco_simulator")
    colcon_ws_dir = os.environ.get("COLCON_UAV_WS_DIR", "")
    if not colcon_ws_dir:
        raise RuntimeError("COLCON_UAV_WS_DIR no esta seteado!")

    mujoco_bin = os.path.join(colcon_ws_dir, "mujoco-3.4.0", "bin", "simulate")
    if not os.path.isfile(mujoco_bin):
        raise RuntimeError(f"MuJoCo no encontrado en: {mujoco_bin}")

    quad_name = LaunchConfiguration("quad_name").perform(context)
    init_x = LaunchConfiguration("init_x").perform(context)
    init_y = LaunchConfiguration("init_y").perform(context)
    init_z = LaunchConfiguration("init_z").perform(context)
    init_yaw = LaunchConfiguration("init_yaw").perform(context)

    xacro_file = os.path.join(pkg_share, "model", "scene_acro.xml.xacro")
    doc = xacro.process_file(xacro_file, mappings={
        "quad_name": quad_name,
        "init_x": init_x,
        "init_y": init_y,
        "init_z": init_z,
        "init_yaw": init_yaw,
    })

    temp_xml = "/tmp/drone_teleop_scene.xml"
    with open(temp_xml, "w") as f:
        f.write(doc.toxml())

    return [ExecuteProcess(
        cmd=[mujoco_bin, temp_xml],
        cwd=os.path.dirname(mujoco_bin),
        output="screen",
    )]


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument("quad_name", default_value="quadrotor"),
        DeclareLaunchArgument("init_x", default_value="0.0"),
        DeclareLaunchArgument("init_y", default_value="0.0"),
        DeclareLaunchArgument("init_z", default_value="0.02"),
        DeclareLaunchArgument("init_yaw", default_value="0.0"),
        OpaqueFunction(function=mujoco_setup),
    ])
