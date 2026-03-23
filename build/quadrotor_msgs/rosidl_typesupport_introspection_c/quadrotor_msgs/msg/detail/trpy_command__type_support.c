// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadrotor_msgs:msg/TRPYCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadrotor_msgs/msg/detail/trpy_command__rosidl_typesupport_introspection_c.h"
#include "quadrotor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadrotor_msgs/msg/detail/trpy_command__functions.h"
#include "quadrotor_msgs/msg/detail/trpy_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `angular_velocity`
// Member `torque`
#include "geometry_msgs/msg/vector3.h"
// Member `angular_velocity`
// Member `torque`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `quaternion`
#include "geometry_msgs/msg/quaternion.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `aux`
#include "quadrotor_msgs/msg/aux_command.h"
// Member `aux`
#include "quadrotor_msgs/msg/detail/aux_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadrotor_msgs__msg__TRPYCommand__init(message_memory);
}

void quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_fini_function(void * message_memory)
{
  quadrotor_msgs__msg__TRPYCommand__fini(message_memory);
}

size_t quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__size_function__TRPYCommand__pred_input(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_const_function__TRPYCommand__pred_input(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_function__TRPYCommand__pred_input(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__fetch_function__TRPYCommand__pred_input(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_const_function__TRPYCommand__pred_input(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__assign_function__TRPYCommand__pred_input(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_function__TRPYCommand__pred_input(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__size_function__TRPYCommand__kr(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_const_function__TRPYCommand__kr(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_function__TRPYCommand__kr(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__fetch_function__TRPYCommand__kr(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_const_function__TRPYCommand__kr(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__assign_function__TRPYCommand__kr(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_function__TRPYCommand__kr(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__size_function__TRPYCommand__kom(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_const_function__TRPYCommand__kom(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_function__TRPYCommand__kom(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__fetch_function__TRPYCommand__kom(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_const_function__TRPYCommand__kom(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__assign_function__TRPYCommand__kom(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_function__TRPYCommand__kom(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_member_array[12] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TRPYCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pred_input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TRPYCommand, pred_input),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__size_function__TRPYCommand__pred_input,  // size() function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_const_function__TRPYCommand__pred_input,  // get_const(index) function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_function__TRPYCommand__pred_input,  // get(index) function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__fetch_function__TRPYCommand__pred_input,  // fetch(index, &value) function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__assign_function__TRPYCommand__pred_input,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thrust",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TRPYCommand, thrust),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TRPYCommand, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TRPYCommand, pitch),  // bytes offset in struct
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
    offsetof(quadrotor_msgs__msg__TRPYCommand, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TRPYCommand, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TRPYCommand, torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quaternion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TRPYCommand, quaternion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TRPYCommand, kr),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__size_function__TRPYCommand__kr,  // size() function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_const_function__TRPYCommand__kr,  // get_const(index) function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_function__TRPYCommand__kr,  // get(index) function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__fetch_function__TRPYCommand__kr,  // fetch(index, &value) function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__assign_function__TRPYCommand__kr,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TRPYCommand, kom),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__size_function__TRPYCommand__kom,  // size() function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_const_function__TRPYCommand__kom,  // get_const(index) function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__get_function__TRPYCommand__kom,  // get(index) function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__fetch_function__TRPYCommand__kom,  // fetch(index, &value) function pointer
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__assign_function__TRPYCommand__kom,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TRPYCommand, aux),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_members = {
  "quadrotor_msgs__msg",  // message namespace
  "TRPYCommand",  // message name
  12,  // number of fields
  sizeof(quadrotor_msgs__msg__TRPYCommand),
  quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_member_array,  // message members
  quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_type_support_handle = {
  0,
  &quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadrotor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, TRPYCommand)() {
  quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, AuxCommand)();
  if (!quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_type_support_handle.typesupport_identifier) {
    quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadrotor_msgs__msg__TRPYCommand__rosidl_typesupport_introspection_c__TRPYCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
