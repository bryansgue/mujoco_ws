// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/BetaFlightStates.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'linear_acceleration_filtered'
// Member 'angular_acceleration_filtered'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/BetaFlightStates in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__BetaFlightStates
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 linear_acceleration;
  geometry_msgs__msg__Vector3 angular_velocity;
  geometry_msgs__msg__Quaternion quaternion;
  geometry_msgs__msg__Vector3 linear_acceleration_filtered;
  geometry_msgs__msg__Vector3 angular_acceleration_filtered;
  double motor[4];
} quadrotor_msgs__msg__BetaFlightStates;

// Struct for a sequence of quadrotor_msgs__msg__BetaFlightStates.
typedef struct quadrotor_msgs__msg__BetaFlightStates__Sequence
{
  quadrotor_msgs__msg__BetaFlightStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__BetaFlightStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__STRUCT_H_
