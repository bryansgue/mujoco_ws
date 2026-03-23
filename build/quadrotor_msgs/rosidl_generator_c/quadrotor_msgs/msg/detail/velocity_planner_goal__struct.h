// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/VelocityPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VelocityPlannerGoal in the package quadrotor_msgs.
/**
  * goal definition
 */
typedef struct quadrotor_msgs__msg__VelocityPlannerGoal
{
  double vx;
  double vy;
  double vz;
  double vyaw;
  bool use_position_gains;
} quadrotor_msgs__msg__VelocityPlannerGoal;

// Struct for a sequence of quadrotor_msgs__msg__VelocityPlannerGoal.
typedef struct quadrotor_msgs__msg__VelocityPlannerGoal__Sequence
{
  quadrotor_msgs__msg__VelocityPlannerGoal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__VelocityPlannerGoal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__STRUCT_H_
