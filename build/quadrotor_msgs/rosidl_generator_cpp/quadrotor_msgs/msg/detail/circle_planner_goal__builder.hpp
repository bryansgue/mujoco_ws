// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/CirclePlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__CIRCLE_PLANNER_GOAL__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__CIRCLE_PLANNER_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/circle_planner_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_CirclePlannerGoal_duration
{
public:
  explicit Init_CirclePlannerGoal_duration(::quadrotor_msgs::msg::CirclePlannerGoal & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::CirclePlannerGoal duration(::quadrotor_msgs::msg::CirclePlannerGoal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::CirclePlannerGoal msg_;
};

class Init_CirclePlannerGoal_t
{
public:
  explicit Init_CirclePlannerGoal_t(::quadrotor_msgs::msg::CirclePlannerGoal & msg)
  : msg_(msg)
  {}
  Init_CirclePlannerGoal_duration t(::quadrotor_msgs::msg::CirclePlannerGoal::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_CirclePlannerGoal_duration(msg_);
  }

private:
  ::quadrotor_msgs::msg::CirclePlannerGoal msg_;
};

class Init_CirclePlannerGoal_ay
{
public:
  explicit Init_CirclePlannerGoal_ay(::quadrotor_msgs::msg::CirclePlannerGoal & msg)
  : msg_(msg)
  {}
  Init_CirclePlannerGoal_t ay(::quadrotor_msgs::msg::CirclePlannerGoal::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_CirclePlannerGoal_t(msg_);
  }

private:
  ::quadrotor_msgs::msg::CirclePlannerGoal msg_;
};

class Init_CirclePlannerGoal_ax
{
public:
  Init_CirclePlannerGoal_ax()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CirclePlannerGoal_ay ax(::quadrotor_msgs::msg::CirclePlannerGoal::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_CirclePlannerGoal_ay(msg_);
  }

private:
  ::quadrotor_msgs::msg::CirclePlannerGoal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::CirclePlannerGoal>()
{
  return quadrotor_msgs::msg::builder::Init_CirclePlannerGoal_ax();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__CIRCLE_PLANNER_GOAL__BUILDER_HPP_
