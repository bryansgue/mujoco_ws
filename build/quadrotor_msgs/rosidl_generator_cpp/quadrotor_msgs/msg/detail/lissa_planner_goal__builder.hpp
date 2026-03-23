// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/LissaPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/lissa_planner_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_LissaPlannerGoal_ramp_time
{
public:
  explicit Init_LissaPlannerGoal_ramp_time(::quadrotor_msgs::msg::LissaPlannerGoal & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::LissaPlannerGoal ramp_time(::quadrotor_msgs::msg::LissaPlannerGoal::_ramp_time_type arg)
  {
    msg_.ramp_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::LissaPlannerGoal msg_;
};

class Init_LissaPlannerGoal_num_cycles
{
public:
  explicit Init_LissaPlannerGoal_num_cycles(::quadrotor_msgs::msg::LissaPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LissaPlannerGoal_ramp_time num_cycles(::quadrotor_msgs::msg::LissaPlannerGoal::_num_cycles_type arg)
  {
    msg_.num_cycles = std::move(arg);
    return Init_LissaPlannerGoal_ramp_time(msg_);
  }

private:
  ::quadrotor_msgs::msg::LissaPlannerGoal msg_;
};

class Init_LissaPlannerGoal_period
{
public:
  explicit Init_LissaPlannerGoal_period(::quadrotor_msgs::msg::LissaPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LissaPlannerGoal_num_cycles period(::quadrotor_msgs::msg::LissaPlannerGoal::_period_type arg)
  {
    msg_.period = std::move(arg);
    return Init_LissaPlannerGoal_num_cycles(msg_);
  }

private:
  ::quadrotor_msgs::msg::LissaPlannerGoal msg_;
};

class Init_LissaPlannerGoal_yaw_num_periods
{
public:
  explicit Init_LissaPlannerGoal_yaw_num_periods(::quadrotor_msgs::msg::LissaPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LissaPlannerGoal_period yaw_num_periods(::quadrotor_msgs::msg::LissaPlannerGoal::_yaw_num_periods_type arg)
  {
    msg_.yaw_num_periods = std::move(arg);
    return Init_LissaPlannerGoal_period(msg_);
  }

private:
  ::quadrotor_msgs::msg::LissaPlannerGoal msg_;
};

class Init_LissaPlannerGoal_z_num_periods
{
public:
  explicit Init_LissaPlannerGoal_z_num_periods(::quadrotor_msgs::msg::LissaPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LissaPlannerGoal_yaw_num_periods z_num_periods(::quadrotor_msgs::msg::LissaPlannerGoal::_z_num_periods_type arg)
  {
    msg_.z_num_periods = std::move(arg);
    return Init_LissaPlannerGoal_yaw_num_periods(msg_);
  }

private:
  ::quadrotor_msgs::msg::LissaPlannerGoal msg_;
};

class Init_LissaPlannerGoal_y_num_periods
{
public:
  explicit Init_LissaPlannerGoal_y_num_periods(::quadrotor_msgs::msg::LissaPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LissaPlannerGoal_z_num_periods y_num_periods(::quadrotor_msgs::msg::LissaPlannerGoal::_y_num_periods_type arg)
  {
    msg_.y_num_periods = std::move(arg);
    return Init_LissaPlannerGoal_z_num_periods(msg_);
  }

private:
  ::quadrotor_msgs::msg::LissaPlannerGoal msg_;
};

class Init_LissaPlannerGoal_x_num_periods
{
public:
  explicit Init_LissaPlannerGoal_x_num_periods(::quadrotor_msgs::msg::LissaPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LissaPlannerGoal_y_num_periods x_num_periods(::quadrotor_msgs::msg::LissaPlannerGoal::_x_num_periods_type arg)
  {
    msg_.x_num_periods = std::move(arg);
    return Init_LissaPlannerGoal_y_num_periods(msg_);
  }

private:
  ::quadrotor_msgs::msg::LissaPlannerGoal msg_;
};

class Init_LissaPlannerGoal_yaw_amp
{
public:
  explicit Init_LissaPlannerGoal_yaw_amp(::quadrotor_msgs::msg::LissaPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LissaPlannerGoal_x_num_periods yaw_amp(::quadrotor_msgs::msg::LissaPlannerGoal::_yaw_amp_type arg)
  {
    msg_.yaw_amp = std::move(arg);
    return Init_LissaPlannerGoal_x_num_periods(msg_);
  }

private:
  ::quadrotor_msgs::msg::LissaPlannerGoal msg_;
};

class Init_LissaPlannerGoal_z_amp
{
public:
  explicit Init_LissaPlannerGoal_z_amp(::quadrotor_msgs::msg::LissaPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LissaPlannerGoal_yaw_amp z_amp(::quadrotor_msgs::msg::LissaPlannerGoal::_z_amp_type arg)
  {
    msg_.z_amp = std::move(arg);
    return Init_LissaPlannerGoal_yaw_amp(msg_);
  }

private:
  ::quadrotor_msgs::msg::LissaPlannerGoal msg_;
};

class Init_LissaPlannerGoal_y_amp
{
public:
  explicit Init_LissaPlannerGoal_y_amp(::quadrotor_msgs::msg::LissaPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_LissaPlannerGoal_z_amp y_amp(::quadrotor_msgs::msg::LissaPlannerGoal::_y_amp_type arg)
  {
    msg_.y_amp = std::move(arg);
    return Init_LissaPlannerGoal_z_amp(msg_);
  }

private:
  ::quadrotor_msgs::msg::LissaPlannerGoal msg_;
};

class Init_LissaPlannerGoal_x_amp
{
public:
  Init_LissaPlannerGoal_x_amp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LissaPlannerGoal_y_amp x_amp(::quadrotor_msgs::msg::LissaPlannerGoal::_x_amp_type arg)
  {
    msg_.x_amp = std::move(arg);
    return Init_LissaPlannerGoal_y_amp(msg_);
  }

private:
  ::quadrotor_msgs::msg::LissaPlannerGoal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::LissaPlannerGoal>()
{
  return quadrotor_msgs::msg::builder::Init_LissaPlannerGoal_x_amp();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__BUILDER_HPP_
