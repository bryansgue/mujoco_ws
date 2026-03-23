// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadrotor_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadrotor_msgs/msg/detail/trajectory_point__rosidl_typesupport_introspection_c.h"
#include "quadrotor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadrotor_msgs/msg/detail/trajectory_point__functions.h"
#include "quadrotor_msgs/msg/detail/trajectory_point__struct.h"


// Include directives for member types
// Member `position`
// Member `position_quad`
// Member `velocity_quad`
// Member `acceleration_quad`
#include "geometry_msgs/msg/point.h"
// Member `position`
// Member `position_quad`
// Member `velocity_quad`
// Member `acceleration_quad`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `velocity`
// Member `acceleration`
// Member `jerk`
// Member `snap`
// Member `angular_velocity`
// Member `angular_velocity_dot`
// Member `moments`
#include "geometry_msgs/msg/vector3.h"
// Member `velocity`
// Member `acceleration`
// Member `jerk`
// Member `snap`
// Member `angular_velocity`
// Member `angular_velocity_dot`
// Member `moments`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `quaternion`
#include "geometry_msgs/msg/quaternion.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadrotor_msgs__msg__TrajectoryPoint__init(message_memory);
}

void quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_fini_function(void * message_memory)
{
  quadrotor_msgs__msg__TrajectoryPoint__fini(message_memory);
}

size_t quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__size_function__TrajectoryPoint__rpm(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPoint__rpm(
  const void * untyped_member, size_t index)
{
  const int64_t * member =
    (const int64_t *)(untyped_member);
  return &member[index];
}

void * quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_function__TrajectoryPoint__rpm(
  void * untyped_member, size_t index)
{
  int64_t * member =
    (int64_t *)(untyped_member);
  return &member[index];
}

void quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPoint__rpm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPoint__rpm(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__assign_function__TrajectoryPoint__rpm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_function__TrajectoryPoint__rpm(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

size_t quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__size_function__TrajectoryPoint__forces(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPoint__forces(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_function__TrajectoryPoint__forces(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPoint__forces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPoint__forces(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__assign_function__TrajectoryPoint__forces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_function__TrajectoryPoint__forces(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[15] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, position),  // bytes offset in struct
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
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, velocity),  // bytes offset in struct
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
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, acceleration),  // bytes offset in struct
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
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, jerk),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "snap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, snap),  // bytes offset in struct
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
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, quaternion),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, rpm),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__size_function__TrajectoryPoint__rpm,  // size() function pointer
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPoint__rpm,  // get_const(index) function pointer
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_function__TrajectoryPoint__rpm,  // get(index) function pointer
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPoint__rpm,  // fetch(index, &value) function pointer
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__assign_function__TrajectoryPoint__rpm,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "forces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, forces),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__size_function__TrajectoryPoint__forces,  // size() function pointer
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_const_function__TrajectoryPoint__forces,  // get_const(index) function pointer
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__get_function__TrajectoryPoint__forces,  // get(index) function pointer
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__fetch_function__TrajectoryPoint__forces,  // fetch(index, &value) function pointer
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__assign_function__TrajectoryPoint__forces,  // assign(index, value) function pointer
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
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity_dot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, angular_velocity_dot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, moments),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_quad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, position_quad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_quad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, velocity_quad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration_quad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__TrajectoryPoint, acceleration_quad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_members = {
  "quadrotor_msgs__msg",  // message namespace
  "TrajectoryPoint",  // message name
  15,  // number of fields
  sizeof(quadrotor_msgs__msg__TrajectoryPoint),
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array,  // message members
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_type_support_handle = {
  0,
  &quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadrotor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, TrajectoryPoint)() {
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_type_support_handle.typesupport_identifier) {
    quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadrotor_msgs__msg__TrajectoryPoint__rosidl_typesupport_introspection_c__TrajectoryPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
