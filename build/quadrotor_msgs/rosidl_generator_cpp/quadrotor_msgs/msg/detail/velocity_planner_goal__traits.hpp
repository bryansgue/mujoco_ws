// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:msg/VelocityPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__TRAITS_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/msg/detail/velocity_planner_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace quadrotor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocityPlannerGoal & msg,
  std::ostream & out)
{
  out << "{";
  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: vz
  {
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << ", ";
  }

  // member: vyaw
  {
    out << "vyaw: ";
    rosidl_generator_traits::value_to_yaml(msg.vyaw, out);
    out << ", ";
  }

  // member: use_position_gains
  {
    out << "use_position_gains: ";
    rosidl_generator_traits::value_to_yaml(msg.use_position_gains, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelocityPlannerGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << "\n";
  }

  // member: vyaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vyaw: ";
    rosidl_generator_traits::value_to_yaml(msg.vyaw, out);
    out << "\n";
  }

  // member: use_position_gains
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_position_gains: ";
    rosidl_generator_traits::value_to_yaml(msg.use_position_gains, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelocityPlannerGoal & msg, bool use_flow_style = false)
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
  const quadrotor_msgs::msg::VelocityPlannerGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::msg::VelocityPlannerGoal & msg)
{
  return quadrotor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::msg::VelocityPlannerGoal>()
{
  return "quadrotor_msgs::msg::VelocityPlannerGoal";
}

template<>
inline const char * name<quadrotor_msgs::msg::VelocityPlannerGoal>()
{
  return "quadrotor_msgs/msg/VelocityPlannerGoal";
}

template<>
struct has_fixed_size<quadrotor_msgs::msg::VelocityPlannerGoal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<quadrotor_msgs::msg::VelocityPlannerGoal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<quadrotor_msgs::msg::VelocityPlannerGoal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__TRAITS_HPP_
