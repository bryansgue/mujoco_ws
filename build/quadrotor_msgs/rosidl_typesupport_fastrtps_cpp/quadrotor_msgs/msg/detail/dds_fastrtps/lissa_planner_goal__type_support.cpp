// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from quadrotor_msgs:msg/LissaPlannerGoal.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__rosidl_typesupport_fastrtps_cpp.hpp"
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace quadrotor_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadrotor_msgs
cdr_serialize(
  const quadrotor_msgs::msg::LissaPlannerGoal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x_amp
  cdr << ros_message.x_amp;
  // Member: y_amp
  cdr << ros_message.y_amp;
  // Member: z_amp
  cdr << ros_message.z_amp;
  // Member: yaw_amp
  cdr << ros_message.yaw_amp;
  // Member: x_num_periods
  cdr << ros_message.x_num_periods;
  // Member: y_num_periods
  cdr << ros_message.y_num_periods;
  // Member: z_num_periods
  cdr << ros_message.z_num_periods;
  // Member: yaw_num_periods
  cdr << ros_message.yaw_num_periods;
  // Member: period
  cdr << ros_message.period;
  // Member: num_cycles
  cdr << ros_message.num_cycles;
  // Member: ramp_time
  cdr << ros_message.ramp_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadrotor_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  quadrotor_msgs::msg::LissaPlannerGoal & ros_message)
{
  // Member: x_amp
  cdr >> ros_message.x_amp;

  // Member: y_amp
  cdr >> ros_message.y_amp;

  // Member: z_amp
  cdr >> ros_message.z_amp;

  // Member: yaw_amp
  cdr >> ros_message.yaw_amp;

  // Member: x_num_periods
  cdr >> ros_message.x_num_periods;

  // Member: y_num_periods
  cdr >> ros_message.y_num_periods;

  // Member: z_num_periods
  cdr >> ros_message.z_num_periods;

  // Member: yaw_num_periods
  cdr >> ros_message.yaw_num_periods;

  // Member: period
  cdr >> ros_message.period;

  // Member: num_cycles
  cdr >> ros_message.num_cycles;

  // Member: ramp_time
  cdr >> ros_message.ramp_time;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadrotor_msgs
get_serialized_size(
  const quadrotor_msgs::msg::LissaPlannerGoal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x_amp
  {
    size_t item_size = sizeof(ros_message.x_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_amp
  {
    size_t item_size = sizeof(ros_message.y_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_amp
  {
    size_t item_size = sizeof(ros_message.z_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_amp
  {
    size_t item_size = sizeof(ros_message.yaw_amp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_num_periods
  {
    size_t item_size = sizeof(ros_message.x_num_periods);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_num_periods
  {
    size_t item_size = sizeof(ros_message.y_num_periods);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_num_periods
  {
    size_t item_size = sizeof(ros_message.z_num_periods);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_num_periods
  {
    size_t item_size = sizeof(ros_message.yaw_num_periods);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: period
  {
    size_t item_size = sizeof(ros_message.period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_cycles
  {
    size_t item_size = sizeof(ros_message.num_cycles);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ramp_time
  {
    size_t item_size = sizeof(ros_message.ramp_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadrotor_msgs
max_serialized_size_LissaPlannerGoal(
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


  // Member: x_amp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_amp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z_amp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yaw_amp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: x_num_periods
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_num_periods
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z_num_periods
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: yaw_num_periods
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: period
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: num_cycles
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ramp_time
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
    using DataType = quadrotor_msgs::msg::LissaPlannerGoal;
    is_plain =
      (
      offsetof(DataType, ramp_time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LissaPlannerGoal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const quadrotor_msgs::msg::LissaPlannerGoal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LissaPlannerGoal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<quadrotor_msgs::msg::LissaPlannerGoal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LissaPlannerGoal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const quadrotor_msgs::msg::LissaPlannerGoal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LissaPlannerGoal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LissaPlannerGoal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LissaPlannerGoal__callbacks = {
  "quadrotor_msgs::msg",
  "LissaPlannerGoal",
  _LissaPlannerGoal__cdr_serialize,
  _LissaPlannerGoal__cdr_deserialize,
  _LissaPlannerGoal__get_serialized_size,
  _LissaPlannerGoal__max_serialized_size
};

static rosidl_message_type_support_t _LissaPlannerGoal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LissaPlannerGoal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace quadrotor_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_quadrotor_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<quadrotor_msgs::msg::LissaPlannerGoal>()
{
  return &quadrotor_msgs::msg::typesupport_fastrtps_cpp::_LissaPlannerGoal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, quadrotor_msgs, msg, LissaPlannerGoal)() {
  return &quadrotor_msgs::msg::typesupport_fastrtps_cpp::_LissaPlannerGoal__handle;
}

#ifdef __cplusplus
}
#endif
