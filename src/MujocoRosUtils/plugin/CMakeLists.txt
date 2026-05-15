add_library(
  MujocoRosUtils SHARED
  ClockPublisher.cpp PosePublisher.cpp ImagePublisher.cpp ActuatorCommand.cpp
  ExternalForce.cpp SensorPublisher.cpp WrenchToActuators.cpp OdometryPublisher.cpp ImuPublisher.cpp
  CollisionPublisher.cpp AcroMode.cpp LowLevelMode.cpp So3Mode.cpp)
target_include_directories(
  MujocoRosUtils PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
                        $<INSTALL_INTERFACE:include>)
target_include_directories(MujocoRosUtils PRIVATE ${MUJOCO_INCLUDE_DIR})
target_include_directories(MujocoRosUtils PUBLIC ${ament_INCLUDE_DIRS})
ament_target_dependencies(
  MujocoRosUtils
  PUBLIC
  rclcpp
  std_msgs
  geometry_msgs
  visualization_msgs
  tf2_ros
  sensor_msgs
  nav_msgs
  builtin_interfaces
  Eigen3
  quadrotor_msgs
  )
add_dependencies(MujocoRosUtils ${PROJECT_NAME})
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME}
                              "rosidl_typesupport_cpp")
target_link_libraries(MujocoRosUtils PUBLIC ${cpp_typesupport_target}
                                            ${ament_LIBRARIES})
target_link_libraries(MujocoRosUtils PUBLIC ${LIB_MUJOCO} glfw)

add_library(MujocoRosUtilsPlugin SHARED Plugin.cpp)
target_include_directories(MujocoRosUtilsPlugin PRIVATE ${MUJOCO_INCLUDE_DIR})
target_link_libraries(MujocoRosUtilsPlugin PUBLIC MujocoRosUtils)
set_target_properties(
  MujocoRosUtils MujocoRosUtilsPlugin
  PROPERTIES
  SKIP_BUILD_RPATH FALSE
  BUILD_WITH_INSTALL_RPATH TRUE
  # $ORIGIN tells the linker to look in the same directory as the .so file itself
  INSTALL_RPATH "$ORIGIN:${MUJOCO_BIN_DIR}:${MUJOCO_LIB_DIR}"
)

install(
  TARGETS MujocoRosUtils MujocoRosUtilsPlugin
  EXPORT "${TARGETS_EXPORT_NAME}"
  LIBRARY DESTINATION ${MUJOCO_BIN_DIR}/mujoco_plugin
  ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
  RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}")

add_executable(headless_runner headless_runner.cpp)
target_include_directories(headless_runner PRIVATE ${MUJOCO_INCLUDE_DIR})
target_link_libraries(headless_runner PRIVATE ${LIB_MUJOCO})
set_target_properties(
  headless_runner
  PROPERTIES
  SKIP_BUILD_RPATH FALSE
  BUILD_WITH_INSTALL_RPATH TRUE
  INSTALL_RPATH "${MUJOCO_LIB_DIR}:${MUJOCO_BIN_DIR}"
)
install(TARGETS headless_runner RUNTIME DESTINATION lib/${PROJECT_NAME})
