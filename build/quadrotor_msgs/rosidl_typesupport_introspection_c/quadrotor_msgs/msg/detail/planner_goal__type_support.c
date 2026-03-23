// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadrotor_msgs:msg/PlannerGoal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadrotor_msgs/msg/detail/planner_goal__rosidl_typesupport_introspection_c.h"
#include "quadrotor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadrotor_msgs/msg/detail/planner_goal__functions.h"
#include "quadrotor_msgs/msg/detail/planner_goal__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `des_tracker`
#include "rosidl_runtime_c/string_functions.h"
// Member `init_cond`
#include "nav_msgs/msg/odometry.h"
// Member `init_cond`
#include "nav_msgs/msg/detail/odometry__rosidl_typesupport_introspection_c.h"
// Member `line_planner_goal`
#include "quadrotor_msgs/msg/line_planner_goal.h"
// Member `line_planner_goal`
#include "quadrotor_msgs/msg/detail/line_planner_goal__rosidl_typesupport_introspection_c.h"
// Member `circle_planner_goal`
#include "quadrotor_msgs/msg/circle_planner_goal.h"
// Member `circle_planner_goal`
#include "quadrotor_msgs/msg/detail/circle_planner_goal__rosidl_typesupport_introspection_c.h"
// Member `lissajous_planner_goal`
#include "quadrotor_msgs/msg/lissa_planner_goal.h"
// Member `lissajous_planner_goal`
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__rosidl_typesupport_introspection_c.h"
// Member `velocity_planner_goal`
#include "quadrotor_msgs/msg/velocity_planner_goal.h"
// Member `velocity_planner_goal`
#include "quadrotor_msgs/msg/detail/velocity_planner_goal__rosidl_typesupport_introspection_c.h"
// Member `qp_planner_goal`
#include "quadrotor_msgs/msg/qp_planner_goal.h"
// Member `qp_planner_goal`
#include "quadrotor_msgs/msg/detail/qp_planner_goal__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadrotor_msgs__msg__PlannerGoal__init(message_memory);
}

void quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_fini_function(void * message_memory)
{
  quadrotor_msgs__msg__PlannerGoal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PlannerGoal, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "des_tracker",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PlannerGoal, des_tracker),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "init_cond",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PlannerGoal, init_cond),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "line_planner_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PlannerGoal, line_planner_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "circle_planner_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PlannerGoal, circle_planner_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lissajous_planner_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PlannerGoal, lissajous_planner_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_planner_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PlannerGoal, velocity_planner_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qp_planner_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PlannerGoal, qp_planner_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_members = {
  "quadrotor_msgs__msg",  // message namespace
  "PlannerGoal",  // message name
  8,  // number of fields
  sizeof(quadrotor_msgs__msg__PlannerGoal),
  quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_member_array,  // message members
  quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_init_function,  // function to initialize message memory (memory has to be allocated)
  quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_type_support_handle = {
  0,
  &quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadrotor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, PlannerGoal)() {
  quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Odometry)();
  quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, LinePlannerGoal)();
  quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, CirclePlannerGoal)();
  quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, LissaPlannerGoal)();
  quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, VelocityPlannerGoal)();
  quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, QpPlannerGoal)();
  if (!quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_type_support_handle.typesupport_identifier) {
    quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadrotor_msgs__msg__PlannerGoal__rosidl_typesupport_introspection_c__PlannerGoal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
