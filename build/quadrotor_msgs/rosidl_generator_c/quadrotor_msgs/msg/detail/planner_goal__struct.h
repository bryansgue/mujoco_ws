// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:msg/PlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__STRUCT_H_
#define QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__STRUCT_H_

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
// Member 'des_tracker'
#include "rosidl_runtime_c/string.h"
// Member 'init_cond'
#include "nav_msgs/msg/detail/odometry__struct.h"
// Member 'line_planner_goal'
#include "quadrotor_msgs/msg/detail/line_planner_goal__struct.h"
// Member 'circle_planner_goal'
#include "quadrotor_msgs/msg/detail/circle_planner_goal__struct.h"
// Member 'lissajous_planner_goal'
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__struct.h"
// Member 'velocity_planner_goal'
#include "quadrotor_msgs/msg/detail/velocity_planner_goal__struct.h"
// Member 'qp_planner_goal'
#include "quadrotor_msgs/msg/detail/qp_planner_goal__struct.h"

/// Struct defined in msg/PlannerGoal in the package quadrotor_msgs.
typedef struct quadrotor_msgs__msg__PlannerGoal
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String des_tracker;
  nav_msgs__msg__Odometry init_cond;
  quadrotor_msgs__msg__LinePlannerGoal line_planner_goal;
  quadrotor_msgs__msg__CirclePlannerGoal circle_planner_goal;
  quadrotor_msgs__msg__LissaPlannerGoal lissajous_planner_goal;
  quadrotor_msgs__msg__VelocityPlannerGoal velocity_planner_goal;
  quadrotor_msgs__msg__QpPlannerGoal qp_planner_goal;
} quadrotor_msgs__msg__PlannerGoal;

// Struct for a sequence of quadrotor_msgs__msg__PlannerGoal.
typedef struct quadrotor_msgs__msg__PlannerGoal__Sequence
{
  quadrotor_msgs__msg__PlannerGoal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__msg__PlannerGoal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__STRUCT_H_
