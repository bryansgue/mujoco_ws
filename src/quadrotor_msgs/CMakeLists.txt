cmake_minimum_required(VERSION 3.8)
project(quadrotor_msgs)
cmake_policy(SET CMP0069 NEW)
if(POLICY CMP0148)
  cmake_policy(SET CMP0148 OLD)
endif()

# We need c++14 for ROS2, thus just require it for everybody
# NOTE: To future self, hope this isn't an issue...
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find our ROS version!
# NOTE: Default to using the ROS1 package if both are in our enviroment
# NOTE: https://github.com/romainreignier/share_ros1_ros2_lib_demo
find_package(catkin QUIET COMPONENTS roscpp)
find_package(ament_cmake QUIET)
if (catkin_FOUND)
    message(STATUS "ROS *1* version found, building ROS1.cmake")
    include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/ROS1.cmake)
elseif (ament_cmake_FOUND)
    message(STATUS "ROS *2* version found, building ROS2.cmake")
    include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/ROS2.cmake)
else ()
    message(STATUS "No ROS versions found, building ROS1.cmake")
    include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/ROS1.cmake)
endif ()
