// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from quadrotor_msgs:msg/PlannerGoal.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/planner_goal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "quadrotor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quadrotor_msgs/msg/detail/planner_goal__struct.h"
#include "quadrotor_msgs/msg/detail/planner_goal__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "nav_msgs/msg/detail/odometry__functions.h"  // init_cond
#include "quadrotor_msgs/msg/detail/circle_planner_goal__functions.h"  // circle_planner_goal
#include "quadrotor_msgs/msg/detail/line_planner_goal__functions.h"  // line_planner_goal
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__functions.h"  // lissajous_planner_goal
#include "quadrotor_msgs/msg/detail/qp_planner_goal__functions.h"  // qp_planner_goal
#include "quadrotor_msgs/msg/detail/velocity_planner_goal__functions.h"  // velocity_planner_goal
#include "rosidl_runtime_c/string.h"  // des_tracker
#include "rosidl_runtime_c/string_functions.h"  // des_tracker
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
size_t get_serialized_size_nav_msgs__msg__Odometry(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
size_t max_serialized_size_nav_msgs__msg__Odometry(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry)();
size_t get_serialized_size_quadrotor_msgs__msg__CirclePlannerGoal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_quadrotor_msgs__msg__CirclePlannerGoal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, CirclePlannerGoal)();
size_t get_serialized_size_quadrotor_msgs__msg__LinePlannerGoal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_quadrotor_msgs__msg__LinePlannerGoal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, LinePlannerGoal)();
size_t get_serialized_size_quadrotor_msgs__msg__LissaPlannerGoal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_quadrotor_msgs__msg__LissaPlannerGoal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, LissaPlannerGoal)();
size_t get_serialized_size_quadrotor_msgs__msg__QpPlannerGoal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_quadrotor_msgs__msg__QpPlannerGoal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, QpPlannerGoal)();
size_t get_serialized_size_quadrotor_msgs__msg__VelocityPlannerGoal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_quadrotor_msgs__msg__VelocityPlannerGoal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, VelocityPlannerGoal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_quadrotor_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PlannerGoal__ros_msg_type = quadrotor_msgs__msg__PlannerGoal;

static bool _PlannerGoal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlannerGoal__ros_msg_type * ros_message = static_cast<const _PlannerGoal__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: des_tracker
  {
    const rosidl_runtime_c__String * str = &ros_message->des_tracker;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: init_cond
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->init_cond, cdr))
    {
      return false;
    }
  }

  // Field name: line_planner_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, LinePlannerGoal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->line_planner_goal, cdr))
    {
      return false;
    }
  }

  // Field name: circle_planner_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, CirclePlannerGoal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->circle_planner_goal, cdr))
    {
      return false;
    }
  }

  // Field name: lissajous_planner_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, LissaPlannerGoal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lissajous_planner_goal, cdr))
    {
      return false;
    }
  }

  // Field name: velocity_planner_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, VelocityPlannerGoal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity_planner_goal, cdr))
    {
      return false;
    }
  }

  // Field name: qp_planner_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, QpPlannerGoal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->qp_planner_goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PlannerGoal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlannerGoal__ros_msg_type * ros_message = static_cast<_PlannerGoal__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: des_tracker
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->des_tracker.data) {
      rosidl_runtime_c__String__init(&ros_message->des_tracker);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->des_tracker,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'des_tracker'\n");
      return false;
    }
  }

  // Field name: init_cond
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, nav_msgs, msg, Odometry
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->init_cond))
    {
      return false;
    }
  }

  // Field name: line_planner_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, LinePlannerGoal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->line_planner_goal))
    {
      return false;
    }
  }

  // Field name: circle_planner_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, CirclePlannerGoal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->circle_planner_goal))
    {
      return false;
    }
  }

  // Field name: lissajous_planner_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, LissaPlannerGoal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lissajous_planner_goal))
    {
      return false;
    }
  }

  // Field name: velocity_planner_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, VelocityPlannerGoal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity_planner_goal))
    {
      return false;
    }
  }

  // Field name: qp_planner_goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, QpPlannerGoal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->qp_planner_goal))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadrotor_msgs
size_t get_serialized_size_quadrotor_msgs__msg__PlannerGoal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlannerGoal__ros_msg_type * ros_message = static_cast<const _PlannerGoal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name des_tracker
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->des_tracker.size + 1);
  // field.name init_cond

  current_alignment += get_serialized_size_nav_msgs__msg__Odometry(
    &(ros_message->init_cond), current_alignment);
  // field.name line_planner_goal

  current_alignment += get_serialized_size_quadrotor_msgs__msg__LinePlannerGoal(
    &(ros_message->line_planner_goal), current_alignment);
  // field.name circle_planner_goal

  current_alignment += get_serialized_size_quadrotor_msgs__msg__CirclePlannerGoal(
    &(ros_message->circle_planner_goal), current_alignment);
  // field.name lissajous_planner_goal

  current_alignment += get_serialized_size_quadrotor_msgs__msg__LissaPlannerGoal(
    &(ros_message->lissajous_planner_goal), current_alignment);
  // field.name velocity_planner_goal

  current_alignment += get_serialized_size_quadrotor_msgs__msg__VelocityPlannerGoal(
    &(ros_message->velocity_planner_goal), current_alignment);
  // field.name qp_planner_goal

  current_alignment += get_serialized_size_quadrotor_msgs__msg__QpPlannerGoal(
    &(ros_message->qp_planner_goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PlannerGoal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_quadrotor_msgs__msg__PlannerGoal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadrotor_msgs
size_t max_serialized_size_quadrotor_msgs__msg__PlannerGoal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: des_tracker
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: init_cond
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_nav_msgs__msg__Odometry(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: line_planner_goal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_quadrotor_msgs__msg__LinePlannerGoal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: circle_planner_goal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_quadrotor_msgs__msg__CirclePlannerGoal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lissajous_planner_goal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_quadrotor_msgs__msg__LissaPlannerGoal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: velocity_planner_goal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_quadrotor_msgs__msg__VelocityPlannerGoal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: qp_planner_goal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_quadrotor_msgs__msg__QpPlannerGoal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = quadrotor_msgs__msg__PlannerGoal;
    is_plain =
      (
      offsetof(DataType, qp_planner_goal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PlannerGoal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_quadrotor_msgs__msg__PlannerGoal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlannerGoal = {
  "quadrotor_msgs::msg",
  "PlannerGoal",
  _PlannerGoal__cdr_serialize,
  _PlannerGoal__cdr_deserialize,
  _PlannerGoal__get_serialized_size,
  _PlannerGoal__max_serialized_size
};

static rosidl_message_type_support_t _PlannerGoal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlannerGoal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, PlannerGoal)() {
  return &_PlannerGoal__type_support;
}

#if defined(__cplusplus)
}
#endif
