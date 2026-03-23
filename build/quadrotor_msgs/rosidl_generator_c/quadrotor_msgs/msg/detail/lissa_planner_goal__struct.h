// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/LissaPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LissaPlannerGoal in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__LissaPlannerGoal
{
  double x_amp;
  double y_amp;
  double z_amp;
  double yaw_amp;
  double x_num_periods;
  double y_num_periods;
  double z_num_periods;
  double yaw_num_periods;
  double period;
  double num_cycles;
  double ramp_time;
} quadrotor_msgs__msg__LissaPlannerGoal;

// Struct for a sequence of quadrotor_msgs__msg__LissaPlannerGoal.
typedef struct quadrotor_msgs__msg__LissaPlannerGoal__Sequence
{
  quadrotor_msgs__msg__LissaPlannerGoal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__LissaPlannerGoal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__STRUCT_H_
