// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/LocalSS.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__LOCAL_SS__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__LOCAL_SS__STRUCT_H_

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
// Member 'data'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in msg/LocalSS in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__LocalSS
{
  std_msgs__msg__Header header;
  std_msgs__msg__Float32MultiArray data;
} quadrotor_msgs__msg__LocalSS;

// Struct for a sequence of quadrotor_msgs__msg__LocalSS.
typedef struct quadrotor_msgs__msg__LocalSS__Sequence
{
  quadrotor_msgs__msg__LocalSS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__LocalSS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__LOCAL_SS__STRUCT_H_
