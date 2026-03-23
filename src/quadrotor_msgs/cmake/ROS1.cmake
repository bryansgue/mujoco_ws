find_package(catkin REQUIRED COMPONENTS message_generation geometry_msgs std_msgs rosconsole)
find_package(Eigen3 REQUIRED)

include_directories(${catkin_INCLUDE_DIRS} ${EIGEN3_INCLUDE_DIR})

add_message_files(DIRECTORY msg_ros1
  FILES
  AuxCommand.msg
  Corrections.msg
  OutputData.msg
  PositionCommand.msg
  PWMCommand.msg
  MotorSpeed.msg
  Serial.msg
  SO3Command.msg
  StatusData.msg
  TrajectoryPoint.msg
  TRPYCommand.msg
  FMCommand.msg
  RPMCommand.msg
  localSS.msg
  FlatOutputs.msg
  cuboid_map.msg
  )

generate_messages(
  DEPENDENCIES geometry_msgs std_msgs)

catkin_package(
  INCLUDE_DIRS
  LIBRARIES
  CATKIN_DEPENDS message_runtime geometry_msgs std_msgs
  DEPENDS EIGEN3)

