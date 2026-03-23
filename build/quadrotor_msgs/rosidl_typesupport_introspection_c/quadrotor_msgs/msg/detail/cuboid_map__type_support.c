// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadrotor_msgs:msg/CuboidMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadrotor_msgs/msg/detail/cuboid_map__rosidl_typesupport_introspection_c.h"
#include "quadrotor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadrotor_msgs/msg/detail/cuboid_map__functions.h"
#include "quadrotor_msgs/msg/detail/cuboid_map__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pos`
#include "geometry_msgs/msg/point.h"
// Member `pos`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `scale`
#include "geometry_msgs/msg/vector3.h"
// Member `scale`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `connectivity`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadrotor_msgs__msg__CuboidMap__init(message_memory);
}

void quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_fini_function(void * message_memory)
{
  quadrotor_msgs__msg__CuboidMap__fini(message_memory);
}

size_t quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__size_function__CuboidMap__pos(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_const_function__CuboidMap__pos(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_function__CuboidMap__pos(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__fetch_function__CuboidMap__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_const_function__CuboidMap__pos(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__assign_function__CuboidMap__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_function__CuboidMap__pos(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__resize_function__CuboidMap__pos(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__size_function__CuboidMap__scale(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_const_function__CuboidMap__scale(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_function__CuboidMap__scale(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__fetch_function__CuboidMap__scale(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_const_function__CuboidMap__scale(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__assign_function__CuboidMap__scale(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_function__CuboidMap__scale(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__resize_function__CuboidMap__scale(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__size_function__CuboidMap__connectivity(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_const_function__CuboidMap__connectivity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_function__CuboidMap__connectivity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__fetch_function__CuboidMap__connectivity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_const_function__CuboidMap__connectivity(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__assign_function__CuboidMap__connectivity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_function__CuboidMap__connectivity(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__resize_function__CuboidMap__connectivity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__CuboidMap, header),  // bytes offset in struct
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
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__CuboidMap, pos),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__size_function__CuboidMap__pos,  // size() function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_const_function__CuboidMap__pos,  // get_const(index) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_function__CuboidMap__pos,  // get(index) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__fetch_function__CuboidMap__pos,  // fetch(index, &value) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__assign_function__CuboidMap__pos,  // assign(index, value) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__resize_function__CuboidMap__pos  // resize(index) function pointer
  },
  {
    "scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__CuboidMap, scale),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__size_function__CuboidMap__scale,  // size() function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_const_function__CuboidMap__scale,  // get_const(index) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_function__CuboidMap__scale,  // get(index) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__fetch_function__CuboidMap__scale,  // fetch(index, &value) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__assign_function__CuboidMap__scale,  // assign(index, value) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__resize_function__CuboidMap__scale  // resize(index) function pointer
  },
  {
    "connectivity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadrotor_msgs__msg__CuboidMap, connectivity),  // bytes offset in struct
    NULL,  // default value
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__size_function__CuboidMap__connectivity,  // size() function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_const_function__CuboidMap__connectivity,  // get_const(index) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__get_function__CuboidMap__connectivity,  // get(index) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__fetch_function__CuboidMap__connectivity,  // fetch(index, &value) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__assign_function__CuboidMap__connectivity,  // assign(index, value) function pointer
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__resize_function__CuboidMap__connectivity  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_message_members = {
  "quadrotor_msgs__msg",  // message namespace
  "CuboidMap",  // message name
  4,  // number of fields
  sizeof(quadrotor_msgs__msg__CuboidMap),
  quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_message_member_array,  // message members
  quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_init_function,  // function to initialize message memory (memory has to be allocated)
  quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_message_type_support_handle = {
  0,
  &quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadrotor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadrotor_msgs, msg, CuboidMap)() {
  quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_message_type_support_handle.typesupport_identifier) {
    quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadrotor_msgs__msg__CuboidMap__rosidl_typesupport_introspection_c__CuboidMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
