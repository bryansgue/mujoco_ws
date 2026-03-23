// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mujoco_ros_utils:msg/ExternalForce.idl
// generated code does not contain a copyright notice

#ifndef MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_H_
#define MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'pos'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'force'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ExternalForce in the package mujoco_ros_utils.
/**
  * Duration to apply force
 */
typedef struct mujoco_ros_utils__msg__ExternalForce
{
  builtin_interfaces__msg__Duration duration;
  /// Force application point in the body frame
  geometry_msgs__msg__Point pos;
  /// Applied force in the world frame
  geometry_msgs__msg__Vector3 force;
} mujoco_ros_utils__msg__ExternalForce;

// Struct for a sequence of mujoco_ros_utils__msg__ExternalForce.
typedef struct mujoco_ros_utils__msg__ExternalForce__Sequence
{
  mujoco_ros_utils__msg__ExternalForce * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mujoco_ros_utils__msg__ExternalForce__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_H_
