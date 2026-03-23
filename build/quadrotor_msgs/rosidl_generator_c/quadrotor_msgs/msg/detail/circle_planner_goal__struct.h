// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/CirclePlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__CIRCLE_PLANNER_GOAL__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__CIRCLE_PLANNER_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/CirclePlannerGoal in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__CirclePlannerGoal
{
  double ax;
  double ay;
  double t;
  builtin_interfaces__msg__Duration duration;
} quadrotor_msgs__msg__CirclePlannerGoal;

// Struct for a sequence of quadrotor_msgs__msg__CirclePlannerGoal.
typedef struct quadrotor_msgs__msg__CirclePlannerGoal__Sequence
{
  quadrotor_msgs__msg__CirclePlannerGoal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__CirclePlannerGoal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__CIRCLE_PLANNER_GOAL__STRUCT_H_
