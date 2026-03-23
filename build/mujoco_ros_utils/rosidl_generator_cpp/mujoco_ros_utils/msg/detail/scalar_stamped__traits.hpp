// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mujoco_ros_utils:msg/ScalarStamped.idl
// generated code does not contain a copyright notice

#ifndef MUJOCO_ROS_UTILS__MSG__DETAIL__SCALAR_STAMPED__TRAITS_HPP_
#define MUJOCO_ROS_UTILS__MSG__DETAIL__SCALAR_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mujoco_ros_utils/msg/detail/scalar_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'value'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace mujoco_ros_utils
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScalarStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    to_flow_style_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScalarStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value:\n";
    to_block_style_yaml(msg.value, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScalarStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mujoco_ros_utils

namespace rosidl_generator_traits
{

[[deprecated("use mujoco_ros_utils::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mujoco_ros_utils::msg::ScalarStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  mujoco_ros_utils::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mujoco_ros_utils::msg::to_yaml() instead")]]
inline std::string to_yaml(const mujoco_ros_utils::msg::ScalarStamped & msg)
{
  return mujoco_ros_utils::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mujoco_ros_utils::msg::ScalarStamped>()
{
  return "mujoco_ros_utils::msg::ScalarStamped";
}

template<>
inline const char * name<mujoco_ros_utils::msg::ScalarStamped>()
{
  return "mujoco_ros_utils/msg/ScalarStamped";
}

template<>
struct has_fixed_size<mujoco_ros_utils::msg::ScalarStamped>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mujoco_ros_utils::msg::ScalarStamped>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mujoco_ros_utils::msg::ScalarStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MUJOCO_ROS_UTILS__MSG__DETAIL__SCALAR_STAMPED__TRAITS_HPP_
