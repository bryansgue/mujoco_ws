// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
// Member 'position_quad'
// Member 'velocity_quad'
// Member 'acceleration_quad'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
// Member 'snap'
// Member 'angular_velocity'
// Member 'angular_velocity_dot'
// Member 'moments'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/TrajectoryPoint in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__TrajectoryPoint
{
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Vector3 velocity;
  geometry_msgs__msg__Vector3 acceleration;
  geometry_msgs__msg__Vector3 jerk;
  geometry_msgs__msg__Vector3 snap;
  geometry_msgs__msg__Quaternion quaternion;
  double force;
  int64_t rpm[4];
  double forces[4];
  geometry_msgs__msg__Vector3 angular_velocity;
  geometry_msgs__msg__Vector3 angular_velocity_dot;
  geometry_msgs__msg__Vector3 moments;
  geometry_msgs__msg__Point position_quad;
  geometry_msgs__msg__Point velocity_quad;
  geometry_msgs__msg__Point acceleration_quad;
} quadrotor_msgs__msg__TrajectoryPoint;

// Struct for a sequence of quadrotor_msgs__msg__TrajectoryPoint.
typedef struct quadrotor_msgs__msg__TrajectoryPoint__Sequence
{
  quadrotor_msgs__msg__TrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__TrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
