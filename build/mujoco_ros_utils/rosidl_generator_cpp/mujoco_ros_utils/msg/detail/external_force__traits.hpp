// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mujoco_ros_utils:msg/ExternalForce.idl
// generated code does not contain a copyright notice

#ifndef MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__TRAITS_HPP_
#define MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mujoco_ros_utils/msg/detail/external_force__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'force'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace mujoco_ros_utils
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExternalForce & msg,
  std::ostream & out)
{
  out << "{";
  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    to_flow_style_yaml(msg.pos, out);
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    to_flow_style_yaml(msg.force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExternalForce & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos:\n";
    to_block_style_yaml(msg.pos, out, indentation + 2);
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force:\n";
    to_block_style_yaml(msg.force, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExternalForce & msg, bool use_flow_style = false)
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
  const mujoco_ros_utils::msg::ExternalForce & msg,
  std::ostream & out, size_t indentation = 0)
{
  mujoco_ros_utils::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mujoco_ros_utils::msg::to_yaml() instead")]]
inline std::string to_yaml(const mujoco_ros_utils::msg::ExternalForce & msg)
{
  return mujoco_ros_utils::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mujoco_ros_utils::msg::ExternalForce>()
{
  return "mujoco_ros_utils::msg::ExternalForce";
}

template<>
inline const char * name<mujoco_ros_utils::msg::ExternalForce>()
{
  return "mujoco_ros_utils/msg/ExternalForce";
}

template<>
struct has_fixed_size<mujoco_ros_utils::msg::ExternalForce>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<mujoco_ros_utils::msg::ExternalForce>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<mujoco_ros_utils::msg::ExternalForce>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__TRAITS_HPP_
