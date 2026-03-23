// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/FlatOutputs.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__FLAT_OUTPUTS__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__FLAT_OUTPUTS__STRUCT_H_

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

/// Struct defined in msg/FlatOutputs in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__FlatOutputs
{
  std_msgs__msg__Header header;
  double x;
  double y;
  double z;
  double yaw;
} quadrotor_msgs__msg__FlatOutputs;

// Struct for a sequence of quadrotor_msgs__msg__FlatOutputs.
typedef struct quadrotor_msgs__msg__FlatOutputs__Sequence
{
  quadrotor_msgs__msg__FlatOutputs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__FlatOutputs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__FLAT_OUTPUTS__STRUCT_H_
