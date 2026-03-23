// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/PositionCommand.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__POSITION_COMMAND__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__POSITION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PAYLOAD_PLANNER'.
enum
{
  quadrotor_msgs__msg__PositionCommand__PAYLOAD_PLANNER = 1l
};

/// Constant 'QUAD_PLANNER'.
enum
{
  quadrotor_msgs__msg__PositionCommand__QUAD_PLANNER = 2l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'points'
#include "quadrotor_msgs/msg/detail/trajectory_point__struct.h"

/// Struct defined in msg/PositionCommand in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__PositionCommand
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Vector3 velocity;
  geometry_msgs__msg__Vector3 acceleration;
  geometry_msgs__msg__Vector3 jerk;
  double yaw;
  double yaw_dot;
  quadrotor_msgs__msg__TrajectoryPoint__Sequence points;
  int32_t planner_type;
} quadrotor_msgs__msg__PositionCommand;

// Struct for a sequence of quadrotor_msgs__msg__PositionCommand.
typedef struct quadrotor_msgs__msg__PositionCommand__Sequence
{
  quadrotor_msgs__msg__PositionCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__PositionCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__POSITION_COMMAND__STRUCT_H_
