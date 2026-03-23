// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:msg/PlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__TRAITS_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/msg/detail/planner_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'init_cond'
#include "nav_msgs/msg/detail/odometry__traits.hpp"
// Member 'line_planner_goal'
#include "quadrotor_msgs/msg/detail/line_planner_goal__traits.hpp"
// Member 'circle_planner_goal'
#include "quadrotor_msgs/msg/detail/circle_planner_goal__traits.hpp"
// Member 'lissajous_planner_goal'
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__traits.hpp"
// Member 'velocity_planner_goal'
#include "quadrotor_msgs/msg/detail/velocity_planner_goal__traits.hpp"
// Member 'qp_planner_goal'
#include "quadrotor_msgs/msg/detail/qp_planner_goal__traits.hpp"

namespace quadrotor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlannerGoal & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: des_tracker
  {
    out << "des_tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.des_tracker, out);
    out << ", ";
  }

  // member: init_cond
  {
    out << "init_cond: ";
    to_flow_style_yaml(msg.init_cond, out);
    out << ", ";
  }

  // member: line_planner_goal
  {
    out << "line_planner_goal: ";
    to_flow_style_yaml(msg.line_planner_goal, out);
    out << ", ";
  }

  // member: circle_planner_goal
  {
    out << "circle_planner_goal: ";
    to_flow_style_yaml(msg.circle_planner_goal, out);
    out << ", ";
  }

  // member: lissajous_planner_goal
  {
    out << "lissajous_planner_goal: ";
    to_flow_style_yaml(msg.lissajous_planner_goal, out);
    out << ", ";
  }

  // member: velocity_planner_goal
  {
    out << "velocity_planner_goal: ";
    to_flow_style_yaml(msg.velocity_planner_goal, out);
    out << ", ";
  }

  // member: qp_planner_goal
  {
    out << "qp_planner_goal: ";
    to_flow_style_yaml(msg.qp_planner_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlannerGoal & msg,
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

  // member: des_tracker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "des_tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.des_tracker, out);
    out << "\n";
  }

  // member: init_cond
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_cond:\n";
    to_block_style_yaml(msg.init_cond, out, indentation + 2);
  }

  // member: line_planner_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "line_planner_goal:\n";
    to_block_style_yaml(msg.line_planner_goal, out, indentation + 2);
  }

  // member: circle_planner_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circle_planner_goal:\n";
    to_block_style_yaml(msg.circle_planner_goal, out, indentation + 2);
  }

  // member: lissajous_planner_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lissajous_planner_goal:\n";
    to_block_style_yaml(msg.lissajous_planner_goal, out, indentation + 2);
  }

  // member: velocity_planner_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_planner_goal:\n";
    to_block_style_yaml(msg.velocity_planner_goal, out, indentation + 2);
  }

  // member: qp_planner_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qp_planner_goal:\n";
    to_block_style_yaml(msg.qp_planner_goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlannerGoal & msg, bool use_flow_style = false)
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
  const quadrotor_msgs::msg::PlannerGoal & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::msg::PlannerGoal & msg)
{
  return quadrotor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::msg::PlannerGoal>()
{
  return "quadrotor_msgs::msg::PlannerGoal";
}

template<>
inline const char * name<quadrotor_msgs::msg::PlannerGoal>()
{
  return "quadrotor_msgs/msg/PlannerGoal";
}

template<>
struct has_fixed_size<quadrotor_msgs::msg::PlannerGoal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<quadrotor_msgs::msg::PlannerGoal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<quadrotor_msgs::msg::PlannerGoal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__TRAITS_HPP_
