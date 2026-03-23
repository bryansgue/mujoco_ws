// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from quadrotor_msgs:msg/LissaPlannerGoal.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "quadrotor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__struct.h"
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__functions.h"
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


// forward declare type support functions


using _LissaPlannerGoal__ros_msg_type = quadrotor_msgs__msg__LissaPlannerGoal;

static bool _LissaPlannerGoal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LissaPlannerGoal__ros_msg_type * ros_message = static_cast<const _LissaPlannerGoal__ros_msg_type *>(untyped_ros_message);
  // Field name: x_amp
  {
    cdr << ros_message->x_amp;
  }

  // Field name: y_amp
  {
    cdr << ros_message->y_amp;
  }

  // Field name: z_amp
  {
    cdr << ros_message->z_amp;
  }

  // Field name: yaw_amp
  {
    cdr << ros_message->yaw_amp;
  }

  // Field name: x_num_periods
  {
    cdr << ros_message->x_num_periods;
  }

  // Field name: y_num_periods
  {
    cdr << ros_message->y_num_periods;
  }

  // Field name: z_num_periods
  {
    cdr << ros_message->z_num_periods;
  }

  // Field name: yaw_num_periods
  {
    cdr << ros_message->yaw_num_periods;
  }

  // Field name: period
  {
    cdr << ros_message->period;
  }

  // Field name: num_cycles
  {
    cdr << ros_message->num_cycles;
  }

  // Field name: ramp_time
  {
    cdr << ros_message->ramp_time;
  }

  return true;
}

static bool _LissaPlannerGoal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LissaPlannerGoal__ros_msg_type * ros_message = static_cast<_LissaPlannerGoal__ros_msg_type *>(untyped_ros_message);
  // Field name: x_amp
  {
    cdr >> ros_message->x_amp;
  }

  // Field name: y_amp
  {
    cdr >> ros_message->y_amp;
  }

  // Field name: z_amp
  {
    cdr >> ros_message->z_amp;
  }

  // Field name: yaw_amp
  {
    cdr >> ros_message->yaw_amp;
  }

  // Field name: x_num_periods
  {
    cdr >> ros_message->x_num_periods;
  }

  // Field name: y_num_periods
  {
    cdr >> ros_message->y_num_periods;
  }

  // Field name: z_num_periods
  {
    cdr >> ros_message->z_num_periods;
  }

  // Field name: yaw_num_periods
  {
    cdr >> ros_message->yaw_num_periods;
  }

  // Field name: period
  {
    cdr >> ros_message->period;
  }

  // Field name: num_cycles
  {
    cdr >> ros_message->num_cycles;
  }

  // Field name: ramp_time
  {
    cdr >> ros_message->ramp_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadrotor_msgs
size_t get_serialized_size_quadrotor_msgs__msg__LissaPlannerGoal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LissaPlannerGoal__ros_msg_type * ros_message = static_cast<const _LissaPlannerGoal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_amp
  {
    size_t item_size = sizeof(ros_message->x_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_amp
  {
    size_t item_size = sizeof(ros_message->y_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_amp
  {
    size_t item_size = sizeof(ros_message->z_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_amp
  {
    size_t item_size = sizeof(ros_message->yaw_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_num_periods
  {
    size_t item_size = sizeof(ros_message->x_num_periods);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_num_periods
  {
    size_t item_size = sizeof(ros_message->y_num_periods);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_num_periods
  {
    size_t item_size = sizeof(ros_message->z_num_periods);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_num_periods
  {
    size_t item_size = sizeof(ros_message->yaw_num_periods);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name period
  {
    size_t item_size = sizeof(ros_message->period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_cycles
  {
    size_t item_size = sizeof(ros_message->num_cycles);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ramp_time
  {
    size_t item_size = sizeof(ros_message->ramp_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LissaPlannerGoal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_quadrotor_msgs__msg__LissaPlannerGoal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quadrotor_msgs
size_t max_serialized_size_quadrotor_msgs__msg__LissaPlannerGoal(
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

  // member: x_amp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_amp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z_amp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw_amp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x_num_periods
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_num_periods
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z_num_periods
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: yaw_num_periods
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: period
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: num_cycles
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ramp_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = quadrotor_msgs__msg__LissaPlannerGoal;
    is_plain =
      (
      offsetof(DataType, ramp_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LissaPlannerGoal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_quadrotor_msgs__msg__LissaPlannerGoal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LissaPlannerGoal = {
  "quadrotor_msgs::msg",
  "LissaPlannerGoal",
  _LissaPlannerGoal__cdr_serialize,
  _LissaPlannerGoal__cdr_deserialize,
  _LissaPlannerGoal__get_serialized_size,
  _LissaPlannerGoal__max_serialized_size
};

static rosidl_message_type_support_t _LissaPlannerGoal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LissaPlannerGoal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quadrotor_msgs, msg, LissaPlannerGoal)() {
  return &_LissaPlannerGoal__type_support;
}

#if defined(__cplusplus)
}
#endif
