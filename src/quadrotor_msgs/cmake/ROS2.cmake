# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

set(dependencies
    std_msgs
    geometry_msgs
    rosidl_default_generators
    nav_msgs
)

set(service_list
    "srv_ros2/Transition.srv")

set(message_list
  "msg_ros2/control_cmds/AuxCommand.msg"
  "msg_ros2/control_cmds/FMCommand.msg"
  "msg_ros2/control_cmds/RPMCommand.msg"
  "msg_ros2/control_cmds/TrajectoryPoint.msg"
  "msg_ros2/control_cmds/PositionCommand.msg"
  "msg_ros2/control_cmds/PWMCommand.msg"
  "msg_ros2/control_cmds/MotorSpeed.msg"
  "msg_ros2/control_cmds/SO3Command.msg"
  "msg_ros2/control_cmds/TRPYCommand.msg"
  "msg_ros2/control_cmds/BetaFlightStates.msg"
  "msg_ros2/control_cmds/BetaFlightOnboardControl.msg"
  "msg_ros2/planner_goals/QpPlannerGoal.msg"
  "msg_ros2/planner_goals/LinePlannerGoal.msg"
  "msg_ros2/planner_goals/CirclePlannerGoal.msg"
  "msg_ros2/planner_goals/LissaPlannerGoal.msg"
  "msg_ros2/planner_goals/VelocityPlannerGoal.msg"
  "msg_ros2/planner_goals/PlannerGoal.msg"
  "msg_ros2/StampedInt.msg"
  "msg_ros2/Corrections.msg"
  "msg_ros2/OutputData.msg"
  "msg_ros2/Serial.msg"
  "msg_ros2/StatusData.msg"
  "msg_ros2/LocalSS.msg"
  "msg_ros2/FlatOutputs.msg"
  "msg_ros2/CuboidMap.msg")

rosidl_generate_interfaces(${PROJECT_NAME}
                          ${message_list}                          
                          ${service_list}
                          ${action_list}
                          DEPENDENCIES ${dependencies} )

ament_export_dependencies(${dependencies})

ament_package()
