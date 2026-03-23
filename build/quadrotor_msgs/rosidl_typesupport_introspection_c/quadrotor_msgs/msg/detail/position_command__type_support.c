// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadrotor_msgs:msg/PositionCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadrotor_msgs/msg/detail/position_command__rosidl_typesupport_introspection_c.h"
#include "quadrotor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadrotor_msgs/msg/detail/position_command__functions.h"
#include "quadrotor_msgs/msg/detail/position_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `velocity`
// Member `acceleration`
// Member `jerk`
#include "geometry_msgs/msg/vector3.h"
// Member `velocity`
// Member `acceleration`
// Member `jerk`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "quadrotor_msgs/msg/trajectory_point.h"
// Member `points`
#include "quadrotor_msgs/msg/detail/trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadrotor_msgs__msg__PositionCommand__init(message_memory);
}

void quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_fini_function(void * message_memory)
{
  quadrotor_msgs__msg__PositionCommand__fini(message_memory);
}

size_t quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__size_function__PositionCommand__points(
  const void * untyped_member)
{
  const quadrotor_msgs__msg__TrajectoryPoint__Sequence * member =
    (const quadrotor_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__get_const_function__PositionCommand__points(
  const void * untyped_member, size_t index)
{
  const quadrotor_msgs__msg__TrajectoryPoint__Sequence * member =
    (const quadrotor_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__get_function__PositionCommand__points(
  void * untyped_member, size_t index)
{
  quadrotor_msgs__msg__TrajectoryPoint__Sequence * member =
    (quadrotor_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__fetch_function__PositionCommand__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const quadrotor_msgs__msg__TrajectoryPoint * item =
    ((const quadrotor_msgs__msg__TrajectoryPoint *)
    quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__get_const_function__PositionCommand__points(untyped_member, index));
  quadrotor_msgs__msg__TrajectoryPoint * value =
    (quadrotor_msgs__msg__TrajectoryPoint *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__assign_function__PositionCommand__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  quadrotor_msgs__msg__TrajectoryPoint * item =
    ((quadrotor_msgs__msg__TrajectoryPoint *)
    quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__get_function__PositionCommand__points(untyped_member, index));
  const quadrotor_msgs__msg__TrajectoryPoint * value =
    (const quadrotor_msgs__msg__TrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__resize_function__PositionCommand__points(
  void * untyped_member, size_t size)
{
  quadrotor_msgs__msg__TrajectoryPoint__Sequence * member =
    (quadrotor_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  quadrotor_msgs__msg__TrajectoryPoint__Sequence__fini(member);
  return quadrotor_msgs__msg__TrajectoryPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PositionCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PositionCommand, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PositionCommand, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PositionCommand, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PositionCommand, jerk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PositionCommand, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_dot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PositionCommand, yaw_dot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PositionCommand, points),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__size_function__PositionCommand__points,  // size() function pointer
    quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__get_const_function__PositionCommand__points,  // get_const(index) function pointer
    quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__get_function__PositionCommand__points,  // get(index) function pointer
    quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__fetch_function__PositionCommand__points,  // fetch(index, &value) function pointer
    quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__assign_function__PositionCommand__points,  // assign(index, value) function pointer
    quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__resize_function__PositionCommand__points  // resize(index) function pointer
  },
  {
    "planner_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__PositionCommand, planner_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_members = {
  "quadrotor_msgs__msg",  // message namespace
  "PositionCommand",  // message name
  9,  // number of fields
  sizeof(quadrotor_msgs__msg__PositionCommand),
  quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_member_array,  // message members
  quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_type_support_handle = {
  0,
  &quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadrotor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, PositionCommand)() {
  quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, TrajectoryPoint)();
  if (!quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_type_support_handle.typesupport_identifier) {
    quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadrotor_msgs__msg__PositionCommand__rosidl_typesupport_introspection_c__PositionCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
