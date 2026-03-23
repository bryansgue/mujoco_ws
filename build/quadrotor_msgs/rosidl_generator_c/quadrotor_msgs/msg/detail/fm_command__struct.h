// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/FMCommand.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__FM_COMMAND__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__FM_COMMAND__STRUCT_H_

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
// Member 'moments'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'aux'
#include "quadrotor_msgs/msg/detail/aux_command__struct.h"

/// Struct defined in msg/FMCommand in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__FMCommand
{
  std_msgs__msg__Header header;
  bool mpc_flag;
  double thrust;
  double roll;
  double pitch;
  double yaw;
  geometry_msgs__msg__Vector3 moments;
  geometry_msgs__msg__Vector3 angular_velocity;
  geometry_msgs__msg__Quaternion quaternion;
  double kr[3];
  double kom[3];
  quadrotor_msgs__msg__AuxCommand aux;
} quadrotor_msgs__msg__FMCommand;

// Struct for a sequence of quadrotor_msgs__msg__FMCommand.
typedef struct quadrotor_msgs__msg__FMCommand__Sequence
{
  quadrotor_msgs__msg__FMCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__FMCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__FM_COMMAND__STRUCT_H_
