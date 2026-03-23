// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mujoco_ros_utils:msg/ExternalForce.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mujoco_ros_utils/msg/detail/external_force__rosidl_typesupport_introspection_c.h"
#include "mujoco_ros_utils/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mujoco_ros_utils/msg/detail/external_force__functions.h"
#include "mujoco_ros_utils/msg/detail/external_force__struct.h"


// Include directives for member types
// Member `duration`
#include "builtin_interfaces/msg/duration.h"
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `pos`
#include "geometry_msgs/msg/point.h"
// Member `pos`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `force`
#include "geometry_msgs/msg/vector3.h"
// Member `force`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mujoco_ros_utils__msg__ExternalForce__init(message_memory);
}

void mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_fini_function(void * message_memory)
{
  mujoco_ros_utils__msg__ExternalForce__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_message_member_array[3] = {
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mujoco_ros_utils__msg__ExternalForce, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mujoco_ros_utils__msg__ExternalForce, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mujoco_ros_utils__msg__ExternalForce, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_message_members = {
  "mujoco_ros_utils__msg",  // message namespace
  "ExternalForce",  // message name
  3,  // number of fields
  sizeof(mujoco_ros_utils__msg__ExternalForce),
  mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_message_member_array,  // message members
  mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_init_function,  // function to initialize message memory (memory has to be allocated)
  mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_message_type_support_handle = {
  0,
  &mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mujoco_ros_utils
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mujoco_ros_utils, msg, ExternalForce)() {
  mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_message_type_support_handle.typesupport_identifier) {
    mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mujoco_ros_utils__msg__ExternalForce__rosidl_typesupport_introspection_c__ExternalForce_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
