// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/CuboidMap.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__CUBOID_MAP__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__CUBOID_MAP__STRUCT_H_

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
// Member 'pos'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'scale'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'connectivity'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CuboidMap in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__CuboidMap
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point__Sequence pos;
  geometry_msgs__msg__Vector3__Sequence scale;
  rosidl_runtime_c__boolean__Sequence connectivity;
} quadrotor_msgs__msg__CuboidMap;

// Struct for a sequence of quadrotor_msgs__msg__CuboidMap.
typedef struct quadrotor_msgs__msg__CuboidMap__Sequence
{
  quadrotor_msgs__msg__CuboidMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__CuboidMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__CUBOID_MAP__STRUCT_H_
