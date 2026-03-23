// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/LinePlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__LINE_PLANNER_GOAL__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__LINE_PLANNER_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/line_planner_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_LinePlannerGoal_duration
{
public:
  explicit Init_LinePlannerGoal_duration(::quadrotor_msgs::msg::LinePlannerGoal & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::LinePlannerGoal duration(::quadrotor_msgs::msg::LinePlannerGoal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::LinePlannerGoal msg_;
};

class Init_LinePlannerGoal_t_start
{
public:
  explicit Init_LinePlannerGoal_t_start(::quadrotor_msgs::msg::LinePlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LinePlannerGoal_duration t_start(::quadrotor_msgs::msg::LinePlannerGoal::_t_start_type arg)
  {
    msg_.t_start = std::move(arg);
    return Init_LinePlannerGoal_duration(msg_);
  }

private:
  ::quadrotor_msgs::msg::LinePlannerGoal msg_;
};

class Init_LinePlannerGoal_relative
{
public:
  explicit Init_LinePlannerGoal_relative(::quadrotor_msgs::msg::LinePlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LinePlannerGoal_t_start relative(::quadrotor_msgs::msg::LinePlannerGoal::_relative_type arg)
  {
    msg_.relative = std::move(arg);
    return Init_LinePlannerGoal_t_start(msg_);
  }

private:
  ::quadrotor_msgs::msg::LinePlannerGoal msg_;
};

class Init_LinePlannerGoal_a_des
{
public:
  explicit Init_LinePlannerGoal_a_des(::quadrotor_msgs::msg::LinePlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LinePlannerGoal_relative a_des(::quadrotor_msgs::msg::LinePlannerGoal::_a_des_type arg)
  {
    msg_.a_des = std::move(arg);
    return Init_LinePlannerGoal_relative(msg_);
  }

private:
  ::quadrotor_msgs::msg::LinePlannerGoal msg_;
};

class Init_LinePlannerGoal_v_des
{
public:
  explicit Init_LinePlannerGoal_v_des(::quadrotor_msgs::msg::LinePlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LinePlannerGoal_a_des v_des(::quadrotor_msgs::msg::LinePlannerGoal::_v_des_type arg)
  {
    msg_.v_des = std::move(arg);
    return Init_LinePlannerGoal_a_des(msg_);
  }

private:
  ::quadrotor_msgs::msg::LinePlannerGoal msg_;
};

class Init_LinePlannerGoal_yaw
{
public:
  explicit Init_LinePlannerGoal_yaw(::quadrotor_msgs::msg::LinePlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LinePlannerGoal_v_des yaw(::quadrotor_msgs::msg::LinePlannerGoal::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_LinePlannerGoal_v_des(msg_);
  }

private:
  ::quadrotor_msgs::msg::LinePlannerGoal msg_;
};

class Init_LinePlannerGoal_z
{
public:
  explicit Init_LinePlannerGoal_z(::quadrotor_msgs::msg::LinePlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LinePlannerGoal_yaw z(::quadrotor_msgs::msg::LinePlannerGoal::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_LinePlannerGoal_yaw(msg_);
  }

private:
  ::quadrotor_msgs::msg::LinePlannerGoal msg_;
};

class Init_LinePlannerGoal_y
{
public:
  explicit Init_LinePlannerGoal_y(::quadrotor_msgs::msg::LinePlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LinePlannerGoal_z y(::quadrotor_msgs::msg::LinePlannerGoal::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_LinePlannerGoal_z(msg_);
  }

private:
  ::quadrotor_msgs::msg::LinePlannerGoal msg_;
};

class Init_LinePlannerGoal_x
{
public:
  Init_LinePlannerGoal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinePlannerGoal_y x(::quadrotor_msgs::msg::LinePlannerGoal::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LinePlannerGoal_y(msg_);
  }

private:
  ::quadrotor_msgs::msg::LinePlannerGoal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::LinePlannerGoal>()
{
  return quadrotor_msgs::msg::builder::Init_LinePlannerGoal_x();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__LINE_PLANNER_GOAL__BUILDER_HPP_
