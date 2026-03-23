// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/PWMCommand.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__PWM_COMMAND__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__PWM_COMMAND__STRUCT_H_

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

/// Struct defined in msg/PWMCommand in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__PWMCommand
{
  std_msgs__msg__Header header;
  /// pwm values should be between 0 (1ms pulse width) and 1 (2ms pulse width)
  double pwm[2];
} quadrotor_msgs__msg__PWMCommand;

// Struct for a sequence of quadrotor_msgs__msg__PWMCommand.
typedef struct quadrotor_msgs__msg__PWMCommand__Sequence
{
  quadrotor_msgs__msg__PWMCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__PWMCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__PWM_COMMAND__STRUCT_H_
