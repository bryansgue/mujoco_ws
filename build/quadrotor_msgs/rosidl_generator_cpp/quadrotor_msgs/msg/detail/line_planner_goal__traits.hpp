// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:msg/LinePlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__LINE_PLANNER_GOAL__TRAITS_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__LINE_PLANNER_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/msg/detail/line_planner_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 't_start'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace quadrotor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LinePlannerGoal & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: v_des
  {
    out << "v_des: ";
    rosidl_generator_traits::value_to_yaml(msg.v_des, out);
    out << ", ";
  }

  // member: a_des
  {
    out << "a_des: ";
    rosidl_generator_traits::value_to_yaml(msg.a_des, out);
    out << ", ";
  }

  // member: relative
  {
    out << "relative: ";
    rosidl_generator_traits::value_to_yaml(msg.relative, out);
    out << ", ";
  }

  // member: t_start
  {
    out << "t_start: ";
    to_flow_style_yaml(msg.t_start, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinePlannerGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: v_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_des: ";
    rosidl_generator_traits::value_to_yaml(msg.v_des, out);
    out << "\n";
  }

  // member: a_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_des: ";
    rosidl_generator_traits::value_to_yaml(msg.a_des, out);
    out << "\n";
  }

  // member: relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative: ";
    rosidl_generator_traits::value_to_yaml(msg.relative, out);
    out << "\n";
  }

  // member: t_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_start:\n";
    to_block_style_yaml(msg.t_start, out, indentation + 2);
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinePlannerGoal & msg, bool use_flow_style = false)
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

}  // namespace quadrotor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use quadrotor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const quadrotor_msgs::msg::LinePlannerGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::msg::LinePlannerGoal & msg)
{
  return quadrotor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::msg::LinePlannerGoal>()
{
  return "quadrotor_msgs::msg::LinePlannerGoal";
}

template<>
inline const char * name<quadrotor_msgs::msg::LinePlannerGoal>()
{
  return "quadrotor_msgs/msg/LinePlannerGoal";
}

template<>
struct has_fixed_size<quadrotor_msgs::msg::LinePlannerGoal>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<quadrotor_msgs::msg::LinePlannerGoal>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<quadrotor_msgs::msg::LinePlannerGoal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__MSG__DETAIL__LINE_PLANNER_GOAL__TRAITS_HPP_
