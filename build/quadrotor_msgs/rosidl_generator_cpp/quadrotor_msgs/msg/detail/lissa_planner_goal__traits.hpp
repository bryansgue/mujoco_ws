// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:msg/LissaPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__TRAITS_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/msg/detail/lissa_planner_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace quadrotor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LissaPlannerGoal & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_amp
  {
    out << "x_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.x_amp, out);
    out << ", ";
  }

  // member: y_amp
  {
    out << "y_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.y_amp, out);
    out << ", ";
  }

  // member: z_amp
  {
    out << "z_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.z_amp, out);
    out << ", ";
  }

  // member: yaw_amp
  {
    out << "yaw_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_amp, out);
    out << ", ";
  }

  // member: x_num_periods
  {
    out << "x_num_periods: ";
    rosidl_generator_traits::value_to_yaml(msg.x_num_periods, out);
    out << ", ";
  }

  // member: y_num_periods
  {
    out << "y_num_periods: ";
    rosidl_generator_traits::value_to_yaml(msg.y_num_periods, out);
    out << ", ";
  }

  // member: z_num_periods
  {
    out << "z_num_periods: ";
    rosidl_generator_traits::value_to_yaml(msg.z_num_periods, out);
    out << ", ";
  }

  // member: yaw_num_periods
  {
    out << "yaw_num_periods: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_num_periods, out);
    out << ", ";
  }

  // member: period
  {
    out << "period: ";
    rosidl_generator_traits::value_to_yaml(msg.period, out);
    out << ", ";
  }

  // member: num_cycles
  {
    out << "num_cycles: ";
    rosidl_generator_traits::value_to_yaml(msg.num_cycles, out);
    out << ", ";
  }

  // member: ramp_time
  {
    out << "ramp_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ramp_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LissaPlannerGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_amp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.x_amp, out);
    out << "\n";
  }

  // member: y_amp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.y_amp, out);
    out << "\n";
  }

  // member: z_amp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.z_amp, out);
    out << "\n";
  }

  // member: yaw_amp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_amp: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_amp, out);
    out << "\n";
  }

  // member: x_num_periods
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_num_periods: ";
    rosidl_generator_traits::value_to_yaml(msg.x_num_periods, out);
    out << "\n";
  }

  // member: y_num_periods
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_num_periods: ";
    rosidl_generator_traits::value_to_yaml(msg.y_num_periods, out);
    out << "\n";
  }

  // member: z_num_periods
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_num_periods: ";
    rosidl_generator_traits::value_to_yaml(msg.z_num_periods, out);
    out << "\n";
  }

  // member: yaw_num_periods
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_num_periods: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_num_periods, out);
    out << "\n";
  }

  // member: period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period: ";
    rosidl_generator_traits::value_to_yaml(msg.period, out);
    out << "\n";
  }

  // member: num_cycles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_cycles: ";
    rosidl_generator_traits::value_to_yaml(msg.num_cycles, out);
    out << "\n";
  }

  // member: ramp_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ramp_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ramp_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LissaPlannerGoal & msg, bool use_flow_style = false)
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
  const quadrotor_msgs::msg::LissaPlannerGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::msg::LissaPlannerGoal & msg)
{
  return quadrotor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::msg::LissaPlannerGoal>()
{
  return "quadrotor_msgs::msg::LissaPlannerGoal";
}

template<>
inline const char * name<quadrotor_msgs::msg::LissaPlannerGoal>()
{
  return "quadrotor_msgs/msg/LissaPlannerGoal";
}

template<>
struct has_fixed_size<quadrotor_msgs::msg::LissaPlannerGoal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<quadrotor_msgs::msg::LissaPlannerGoal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<quadrotor_msgs::msg::LissaPlannerGoal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__TRAITS_HPP_
