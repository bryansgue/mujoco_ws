// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadrotor_msgs:msg/RPMCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadrotor_msgs/msg/detail/rpm_command__rosidl_typesupport_introspection_c.h"
#include "quadrotor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadrotor_msgs/msg/detail/rpm_command__functions.h"
#include "quadrotor_msgs/msg/detail/rpm_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `aux`
#include "quadrotor_msgs/msg/aux_command.h"
// Member `aux`
#include "quadrotor_msgs/msg/detail/aux_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadrotor_msgs__msg__RPMCommand__init(message_memory);
}

void quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_fini_function(void * message_memory)
{
  quadrotor_msgs__msg__RPMCommand__fini(message_memory);
}

size_t quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__size_function__RPMCommand__rpms(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_const_function__RPMCommand__rpms(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_function__RPMCommand__rpms(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__fetch_function__RPMCommand__rpms(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_const_function__RPMCommand__rpms(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__assign_function__RPMCommand__rpms(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_function__RPMCommand__rpms(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

size_t quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__size_function__RPMCommand__motors(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_const_function__RPMCommand__motors(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_function__RPMCommand__motors(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__fetch_function__RPMCommand__motors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_const_function__RPMCommand__motors(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__assign_function__RPMCommand__motors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_function__RPMCommand__motors(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__RPMCommand, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rpms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__RPMCommand, rpms),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__size_function__RPMCommand__rpms,  // size() function pointer
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_const_function__RPMCommand__rpms,  // get_const(index) function pointer
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_function__RPMCommand__rpms,  // get(index) function pointer
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__fetch_function__RPMCommand__rpms,  // fetch(index, &value) function pointer
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__assign_function__RPMCommand__rpms,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__RPMCommand, motors),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__size_function__RPMCommand__motors,  // size() function pointer
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_const_function__RPMCommand__motors,  // get_const(index) function pointer
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__get_function__RPMCommand__motors,  // get(index) function pointer
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__fetch_function__RPMCommand__motors,  // fetch(index, &value) function pointer
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__assign_function__RPMCommand__motors,  // assign(index, value) function pointer
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
    offsetof(quadrotor_msgs__msg__RPMCommand, aux),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_message_members = {
  "quadrotor_msgs__msg",  // message namespace
  "RPMCommand",  // message name
  4,  // number of fields
  sizeof(quadrotor_msgs__msg__RPMCommand),
  quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_message_member_array,  // message members
  quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_message_type_support_handle = {
  0,
  &quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadrotor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, RPMCommand)() {
  quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, AuxCommand)();
  if (!quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_message_type_support_handle.typesupport_identifier) {
    quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadrotor_msgs__msg__RPMCommand__rosidl_typesupport_introspection_c__RPMCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
