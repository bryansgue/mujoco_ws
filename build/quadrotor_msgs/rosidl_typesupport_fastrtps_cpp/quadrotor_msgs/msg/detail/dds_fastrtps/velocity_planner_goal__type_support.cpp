// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from quadrotor_msgs:msg/VelocityPlannerGoal.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/velocity_planner_goal__rosidl_typesupport_fastrtps_cpp.hpp"
#include "quadrotor_msgs/msg/detail/velocity_planner_goal__struct.hpp"

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
  const quadrotor_msgs::msg::VelocityPlannerGoal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vx
  cdr << ros_message.vx;
  // Member: vy
  cdr << ros_message.vy;
  // Member: vz
  cdr << ros_message.vz;
  // Member: vyaw
  cdr << ros_message.vyaw;
  // Member: use_position_gains
  cdr << (ros_message.use_position_gains ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadrotor_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  quadrotor_msgs::msg::VelocityPlannerGoal & ros_message)
{
  // Member: vx
  cdr >> ros_message.vx;

  // Member: vy
  cdr >> ros_message.vy;

  // Member: vz
  cdr >> ros_message.vz;

  // Member: vyaw
  cdr >> ros_message.vyaw;

  // Member: use_position_gains
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_position_gains = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadrotor_msgs
get_serialized_size(
  const quadrotor_msgs::msg::VelocityPlannerGoal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vx
  {
    size_t item_size = sizeof(ros_message.vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vy
  {
    size_t item_size = sizeof(ros_message.vy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vz
  {
    size_t item_size = sizeof(ros_message.vz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vyaw
  {
    size_t item_size = sizeof(ros_message.vyaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_position_gains
  {
    size_t item_size = sizeof(ros_message.use_position_gains);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quadrotor_msgs
max_serialized_size_VelocityPlannerGoal(
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


  // Member: vx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vyaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: use_position_gains
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = quadrotor_msgs::msg::VelocityPlannerGoal;
    is_plain =
      (
      offsetof(DataType, use_position_gains) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VelocityPlannerGoal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const quadrotor_msgs::msg::VelocityPlannerGoal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VelocityPlannerGoal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<quadrotor_msgs::msg::VelocityPlannerGoal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VelocityPlannerGoal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const quadrotor_msgs::msg::VelocityPlannerGoal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VelocityPlannerGoal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VelocityPlannerGoal(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VelocityPlannerGoal__callbacks = {
  "quadrotor_msgs::msg",
  "VelocityPlannerGoal",
  _VelocityPlannerGoal__cdr_serialize,
  _VelocityPlannerGoal__cdr_deserialize,
  _VelocityPlannerGoal__get_serialized_size,
  _VelocityPlannerGoal__max_serialized_size
};

static rosidl_message_type_support_t _VelocityPlannerGoal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VelocityPlannerGoal__callbacks,
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
get_message_type_support_handle<quadrotor_msgs::msg::VelocityPlannerGoal>()
{
  return &quadrotor_msgs::msg::typesupport_fastrtps_cpp::_VelocityPlannerGoal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, quadrotor_msgs, msg, VelocityPlannerGoal)() {
  return &quadrotor_msgs::msg::typesupport_fastrtps_cpp::_VelocityPlannerGoal__handle;
}

#ifdef __cplusplus
}
#endif
