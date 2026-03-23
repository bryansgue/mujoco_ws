// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quadrotor_msgs:srv/Transition.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__STRUCT_H_
#define QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tracker'
#include "rosidl_runtime_c/string.h"
// Member 'planner_goal'
#include "quadrotor_msgs/msg/detail/planner_goal__struct.h"

/// Struct defined in srv/Transition in the package quadrotor_msgs.
typedef struct quadrotor_msgs__srv__Transition_Request
{
  rosidl_runtime_c__String tracker;
  quadrotor_msgs__msg__PlannerGoal planner_goal;
} quadrotor_msgs__srv__Transition_Request;

// Struct for a sequence of quadrotor_msgs__srv__Transition_Request.
typedef struct quadrotor_msgs__srv__Transition_Request__Sequence
{
  quadrotor_msgs__srv__Transition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__srv__Transition_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Transition in the package quadrotor_msgs.
typedef struct quadrotor_msgs__srv__Transition_Response
{
  /// indicate successful transition
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} quadrotor_msgs__srv__Transition_Response;

// Struct for a sequence of quadrotor_msgs__srv__Transition_Response.
typedef struct quadrotor_msgs__srv__Transition_Response__Sequence
{
  quadrotor_msgs__srv__Transition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quadrotor_msgs__srv__Transition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__STRUCT_H_
