// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadrotor_msgs:msg/BetaFlightOnboardControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadrotor_msgs/msg/detail/beta_flight_onboard_control__rosidl_typesupport_introspection_c.h"
#include "quadrotor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadrotor_msgs/msg/detail/beta_flight_onboard_control__functions.h"
#include "quadrotor_msgs/msg/detail/beta_flight_onboard_control__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `angular_velocity_desired`
#include "geometry_msgs/msg/vector3.h"
// Member `angular_velocity_desired`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `quaternion_desired`
#include "geometry_msgs/msg/quaternion.h"
// Member `quaternion_desired`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadrotor_msgs__msg__BetaFlightOnboardControl__init(message_memory);
}

void quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_fini_function(void * message_memory)
{
  quadrotor_msgs__msg__BetaFlightOnboardControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__BetaFlightOnboardControl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity_desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__BetaFlightOnboardControl, angular_velocity_desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quaternion_desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__BetaFlightOnboardControl, quaternion_desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thrust_desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__BetaFlightOnboardControl, thrust_desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_offboard",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__BetaFlightOnboardControl, active_offboard),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_attitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__BetaFlightOnboardControl, active_attitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_acro",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__BetaFlightOnboardControl, active_acro),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_message_members = {
  "quadrotor_msgs__msg",  // message namespace
  "BetaFlightOnboardControl",  // message name
  7,  // number of fields
  sizeof(quadrotor_msgs__msg__BetaFlightOnboardControl),
  quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_message_member_array,  // message members
  quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_init_function,  // function to initialize message memory (memory has to be allocated)
  quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_message_type_support_handle = {
  0,
  &quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadrotor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, BetaFlightOnboardControl)() {
  quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_message_type_support_handle.typesupport_identifier) {
    quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadrotor_msgs__msg__BetaFlightOnboardControl__rosidl_typesupport_introspection_c__BetaFlightOnboardControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
