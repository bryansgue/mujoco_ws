// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:msg/QpPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__TRAITS_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/msg/detail/qp_planner_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'future_point'
#include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace quadrotor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const QpPlannerGoal & msg,
  std::ostream & out)
{
  out << "{";
  // member: bern_enable
  {
    out << "bern_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.bern_enable, out);
    out << ", ";
  }

  // member: perching
  {
    out << "perching: ";
    rosidl_generator_traits::value_to_yaml(msg.perching, out);
    out << ", ";
  }

  // member: max_a
  {
    out << "max_a: ";
    rosidl_generator_traits::value_to_yaml(msg.max_a, out);
    out << ", ";
  }

  // member: max_v
  {
    out << "max_v: ";
    rosidl_generator_traits::value_to_yaml(msg.max_v, out);
    out << ", ";
  }

  // member: future_point
  {
    out << "future_point: ";
    to_flow_style_yaml(msg.future_point, out);
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
  const QpPlannerGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bern_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bern_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.bern_enable, out);
    out << "\n";
  }

  // member: perching
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "perching: ";
    rosidl_generator_traits::value_to_yaml(msg.perching, out);
    out << "\n";
  }

  // member: max_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_a: ";
    rosidl_generator_traits::value_to_yaml(msg.max_a, out);
    out << "\n";
  }

  // member: max_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_v: ";
    rosidl_generator_traits::value_to_yaml(msg.max_v, out);
    out << "\n";
  }

  // member: future_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "future_point:\n";
    to_block_style_yaml(msg.future_point, out, indentation + 2);
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

inline std::string to_yaml(const QpPlannerGoal & msg, bool use_flow_style = false)
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
  const quadrotor_msgs::msg::QpPlannerGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::msg::QpPlannerGoal & msg)
{
  return quadrotor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::msg::QpPlannerGoal>()
{
  return "quadrotor_msgs::msg::QpPlannerGoal";
}

template<>
inline const char * name<quadrotor_msgs::msg::QpPlannerGoal>()
{
  return "quadrotor_msgs/msg/QpPlannerGoal";
}

template<>
struct has_fixed_size<quadrotor_msgs::msg::QpPlannerGoal>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<quadrotor_msgs::msg::QpPlannerGoal>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<quadrotor_msgs::msg::QpPlannerGoal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__TRAITS_HPP_
