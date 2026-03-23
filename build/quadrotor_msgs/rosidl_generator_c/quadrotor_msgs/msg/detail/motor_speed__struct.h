// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/MotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_H_

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
// Member 'aux'
#include "quadrotor_msgs/msg/detail/aux_command__struct.h"

/// Struct defined in msg/MotorSpeed in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__MotorSpeed
{
  std_msgs__msg__Header header;
  double rpm[4];
  double forces[4];
  quadrotor_msgs__msg__AuxCommand aux;
} quadrotor_msgs__msg__MotorSpeed;

// Struct for a sequence of quadrotor_msgs__msg__MotorSpeed.
typedef struct quadrotor_msgs__msg__MotorSpeed__Sequence
{
  quadrotor_msgs__msg__MotorSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__MotorSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_H_
