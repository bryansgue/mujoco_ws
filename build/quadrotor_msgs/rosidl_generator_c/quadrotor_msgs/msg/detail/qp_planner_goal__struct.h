// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/QpPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'future_point'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/QpPlannerGoal in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__QpPlannerGoal
{
  bool bern_enable;
  bool perching;
  double max_a;
  double max_v;
  nav_msgs__msg__Path future_point;
  builtin_interfaces__msg__Duration duration;
} quadrotor_msgs__msg__QpPlannerGoal;

// Struct for a sequence of quadrotor_msgs__msg__QpPlannerGoal.
typedef struct quadrotor_msgs__msg__QpPlannerGoal__Sequence
{
  quadrotor_msgs__msg__QpPlannerGoal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__QpPlannerGoal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__STRUCT_H_
