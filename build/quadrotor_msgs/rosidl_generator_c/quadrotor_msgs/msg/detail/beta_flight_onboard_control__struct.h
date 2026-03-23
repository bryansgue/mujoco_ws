// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/BetaFlightOnboardControl.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__STRUCT_H_

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
// Member 'angular_velocity_desired'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'quaternion_desired'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/BetaFlightOnboardControl in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__BetaFlightOnboardControl
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 angular_velocity_desired;
  geometry_msgs__msg__Quaternion quaternion_desired;
  double thrust_desired;
  uint8_t active_offboard;
  uint8_t active_attitude;
  uint8_t active_acro;
} quadrotor_msgs__msg__BetaFlightOnboardControl;

// Struct for a sequence of quadrotor_msgs__msg__BetaFlightOnboardControl.
typedef struct quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence
{
  quadrotor_msgs__msg__BetaFlightOnboardControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__STRUCT_H_
