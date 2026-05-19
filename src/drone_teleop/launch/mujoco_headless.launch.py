"""Headless variant of mujoco_only.launch.py — no GUI, for training / HW prep.

Same scenes, args, plugins, topics. Replaces `simulate` binary with Python
runner that calls mj_step in a loop.
"""
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, OpaqueFunction, RegisterEventHandler, Shutdown
from launch.event_handlers import OnProcessExit
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os
import xacro

SCENES = {
    "payload":        "scene_acro.xml.xacro",
    "nopayload":      "scene_acro_nopayload.xml.xacro",
    "motors":         "scene_acro_motors.xml.xacro",
    "motors_nowall":  "scene_acro_motors_nowall.xml.xacro",
    "gates":          "scene_acro_motors_gates.xml.xacro",
}


def mujoco_setup(context, *args, **kwargs):
    pkg_share = get_package_share_directory("acp_mujoco_simulator")
    # Auto-detect ws root: <ws>/install/<pkg>/share/<pkg> -> <ws>. Env var overrides.
    colcon_ws_dir = os.environ.get("COLCON_UAV_WS_DIR") or \
        os.path.abspath(os.path.join(pkg_share, "..", "..", "..", ".."))

    quad_name = LaunchConfiguration("quad_name").perform(context)
    init_x    = LaunchConfiguration("init_x").perform(context)
    init_y    = LaunchConfiguration("init_y").perform(context)
    init_z    = LaunchConfiguration("init_z").perform(context)
    init_yaw  = LaunchConfiguration("init_yaw").perform(context)
    scene     = LaunchConfiguration("scene").perform(context)
    realtime  = LaunchConfiguration("realtime").perform(context).lower() in ("true", "1", "yes", "on")
    wind            = LaunchConfiguration("wind").perform(context).lower() in ("true", "1", "yes")
    turbulence      = LaunchConfiguration("turbulence").perform(context)
    mean_wind_speed = LaunchConfiguration("mean_wind_speed").perform(context)
    wind_seed       = LaunchConfiguration("wind_seed").perform(context)
    gates_collide   = LaunchConfiguration("gates_collide").perform(context).lower() in ("true", "1", "yes", "on")

    scene_file = SCENES.get(scene)
    if scene_file is None:
        raise RuntimeError(f"Escena '{scene}' no reconocida. Opciones: {list(SCENES.keys())}")

    xacro_file = os.path.join(pkg_share, "model", scene_file)
    doc = xacro.process_file(xacro_file, mappings={
        "quad_name":      quad_name,
        "init_x":         init_x,
        "init_y":         init_y,
        "init_z":         init_z,
        "init_yaw":       init_yaw,
        "gates_collide":  "1" if gates_collide else "0",
    })

    temp_xml = "/tmp/drone_teleop_scene.xml"
    with open(temp_xml, "w") as f:
        f.write(doc.toxml())

    plugin_dir = os.path.join(colcon_ws_dir, "mujoco-3.4.0", "bin", "mujoco_plugin")
    runner_bin = os.path.join(colcon_ws_dir, "install", "mujoco_ros_utils",
                              "lib", "mujoco_ros_utils", "headless_runner")
    if not os.path.isfile(runner_bin):
        raise RuntimeError(f"headless_runner no encontrado: {runner_bin}")

    runner_cmd = [runner_bin, temp_xml, "--plugin-dir", plugin_dir]
    if realtime:
        runner_cmd.append("--realtime")

    mujoco_lib_dir = os.path.join(colcon_ws_dir, "mujoco-3.4.0", "lib")
    env = dict(os.environ)
    env["LD_LIBRARY_PATH"] = mujoco_lib_dir + ":" + env.get("LD_LIBRARY_PATH", "")

    runner_proc = ExecuteProcess(
        cmd=runner_cmd,
        output="screen",
        sigterm_timeout="3",
        sigkill_timeout="2",
        additional_env={"LD_LIBRARY_PATH": env["LD_LIBRARY_PATH"]},
    )

    shutdown_on_exit = RegisterEventHandler(
        OnProcessExit(
            target_action=runner_proc,
            on_exit=[Shutdown(reason="Headless runner cerrado")],
        )
    )

    actions = [runner_proc, shutdown_on_exit]

    if wind:
        wind_node = Node(
            package="drone_teleop",
            executable="wind_publisher",
            name="wind_publisher",
            output="screen",
            parameters=[{
                "quad_name": quad_name,
                "turbulence_level": turbulence,
                "mean_wind_speed": float(mean_wind_speed),
                "seed": int(wind_seed),
            }],
        )
        actions.append(wind_node)

    return actions


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument("quad_name",  default_value="quadrotor"),
        DeclareLaunchArgument("init_x",     default_value="0.0"),
        DeclareLaunchArgument("init_y",     default_value="0.0"),
        DeclareLaunchArgument("init_z",     default_value="0.02"),
        DeclareLaunchArgument("init_yaw",   default_value="0.0"),
        DeclareLaunchArgument("scene",      default_value="gates"),
        DeclareLaunchArgument("realtime",   default_value="false",
                              description="true=match wall clock; false=fast-forward (training)"),
        DeclareLaunchArgument("wind",            default_value="false"),
        DeclareLaunchArgument("turbulence",      default_value="moderate"),
        DeclareLaunchArgument("mean_wind_speed", default_value="1.5"),
        DeclareLaunchArgument("wind_seed",       default_value="-1"),
        DeclareLaunchArgument("gates_collide",   default_value="false"),
        OpaqueFunction(function=mujoco_setup),
    ])
