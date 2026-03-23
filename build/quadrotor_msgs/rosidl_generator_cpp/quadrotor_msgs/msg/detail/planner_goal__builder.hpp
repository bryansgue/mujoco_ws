// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/PlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/planner_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_PlannerGoal_qp_planner_goal
{
public:
  explicit Init_PlannerGoal_qp_planner_goal(::quadrotor_msgs::msg::PlannerGoal & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::PlannerGoal qp_planner_goal(::quadrotor_msgs::msg::PlannerGoal::_qp_planner_goal_type arg)
  {
    msg_.qp_planner_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::PlannerGoal msg_;
};

class Init_PlannerGoal_velocity_planner_goal
{
public:
  explicit Init_PlannerGoal_velocity_planner_goal(::quadrotor_msgs::msg::PlannerGoal & msg)
  : msg_(msg)
  {}
  Init_PlannerGoal_qp_planner_goal velocity_planner_goal(::quadrotor_msgs::msg::PlannerGoal::_velocity_planner_goal_type arg)
  {
    msg_.velocity_planner_goal = std::move(arg);
    return Init_PlannerGoal_qp_planner_goal(msg_);
  }

private:
  ::quadrotor_msgs::msg::PlannerGoal msg_;
};

class Init_PlannerGoal_lissajous_planner_goal
{
public:
  explicit Init_PlannerGoal_lissajous_planner_goal(::quadrotor_msgs::msg::PlannerGoal & msg)
  : msg_(msg)
  {}
  Init_PlannerGoal_velocity_planner_goal lissajous_planner_goal(::quadrotor_msgs::msg::PlannerGoal::_lissajous_planner_goal_type arg)
  {
    msg_.lissajous_planner_goal = std::move(arg);
    return Init_PlannerGoal_velocity_planner_goal(msg_);
  }

private:
  ::quadrotor_msgs::msg::PlannerGoal msg_;
};

class Init_PlannerGoal_circle_planner_goal
{
public:
  explicit Init_PlannerGoal_circle_planner_goal(::quadrotor_msgs::msg::PlannerGoal & msg)
  : msg_(msg)
  {}
  Init_PlannerGoal_lissajous_planner_goal circle_planner_goal(::quadrotor_msgs::msg::PlannerGoal::_circle_planner_goal_type arg)
  {
    msg_.circle_planner_goal = std::move(arg);
    return Init_PlannerGoal_lissajous_planner_goal(msg_);
  }

private:
  ::quadrotor_msgs::msg::PlannerGoal msg_;
};

class Init_PlannerGoal_line_planner_goal
{
public:
  explicit Init_PlannerGoal_line_planner_goal(::quadrotor_msgs::msg::PlannerGoal & msg)
  : msg_(msg)
  {}
  Init_PlannerGoal_circle_planner_goal line_planner_goal(::quadrotor_msgs::msg::PlannerGoal::_line_planner_goal_type arg)
  {
    msg_.line_planner_goal = std::move(arg);
    return Init_PlannerGoal_circle_planner_goal(msg_);
  }

private:
  ::quadrotor_msgs::msg::PlannerGoal msg_;
};

class Init_PlannerGoal_init_cond
{
public:
  explicit Init_PlannerGoal_init_cond(::quadrotor_msgs::msg::PlannerGoal & msg)
  : msg_(msg)
  {}
  Init_PlannerGoal_line_planner_goal init_cond(::quadrotor_msgs::msg::PlannerGoal::_init_cond_type arg)
  {
    msg_.init_cond = std::move(arg);
    return Init_PlannerGoal_line_planner_goal(msg_);
  }

private:
  ::quadrotor_msgs::msg::PlannerGoal msg_;
};

class Init_PlannerGoal_des_tracker
{
public:
  explicit Init_PlannerGoal_des_tracker(::quadrotor_msgs::msg::PlannerGoal & msg)
  : msg_(msg)
  {}
  Init_PlannerGoal_init_cond des_tracker(::quadrotor_msgs::msg::PlannerGoal::_des_tracker_type arg)
  {
    msg_.des_tracker = std::move(arg);
    return Init_PlannerGoal_init_cond(msg_);
  }

private:
  ::quadrotor_msgs::msg::PlannerGoal msg_;
};

class Init_PlannerGoal_header
{
public:
  Init_PlannerGoal_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlannerGoal_des_tracker header(::quadrotor_msgs::msg::PlannerGoal::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlannerGoal_des_tracker(msg_);
  }

private:
  ::quadrotor_msgs::msg::PlannerGoal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::PlannerGoal>()
{
  return quadrotor_msgs::msg::builder::Init_PlannerGoal_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__BUILDER_HPP_
