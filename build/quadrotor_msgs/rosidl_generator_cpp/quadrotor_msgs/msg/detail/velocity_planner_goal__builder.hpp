// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/VelocityPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/velocity_planner_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityPlannerGoal_use_position_gains
{
public:
  explicit Init_VelocityPlannerGoal_use_position_gains(::quadrotor_msgs::msg::VelocityPlannerGoal & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::VelocityPlannerGoal use_position_gains(::quadrotor_msgs::msg::VelocityPlannerGoal::_use_position_gains_type arg)
  {
    msg_.use_position_gains = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::VelocityPlannerGoal msg_;
};

class Init_VelocityPlannerGoal_vyaw
{
public:
  explicit Init_VelocityPlannerGoal_vyaw(::quadrotor_msgs::msg::VelocityPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_VelocityPlannerGoal_use_position_gains vyaw(::quadrotor_msgs::msg::VelocityPlannerGoal::_vyaw_type arg)
  {
    msg_.vyaw = std::move(arg);
    return Init_VelocityPlannerGoal_use_position_gains(msg_);
  }

private:
  ::quadrotor_msgs::msg::VelocityPlannerGoal msg_;
};

class Init_VelocityPlannerGoal_vz
{
public:
  explicit Init_VelocityPlannerGoal_vz(::quadrotor_msgs::msg::VelocityPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_VelocityPlannerGoal_vyaw vz(::quadrotor_msgs::msg::VelocityPlannerGoal::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_VelocityPlannerGoal_vyaw(msg_);
  }

private:
  ::quadrotor_msgs::msg::VelocityPlannerGoal msg_;
};

class Init_VelocityPlannerGoal_vy
{
public:
  explicit Init_VelocityPlannerGoal_vy(::quadrotor_msgs::msg::VelocityPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_VelocityPlannerGoal_vz vy(::quadrotor_msgs::msg::VelocityPlannerGoal::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_VelocityPlannerGoal_vz(msg_);
  }

private:
  ::quadrotor_msgs::msg::VelocityPlannerGoal msg_;
};

class Init_VelocityPlannerGoal_vx
{
public:
  Init_VelocityPlannerGoal_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityPlannerGoal_vy vx(::quadrotor_msgs::msg::VelocityPlannerGoal::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_VelocityPlannerGoal_vy(msg_);
  }

private:
  ::quadrotor_msgs::msg::VelocityPlannerGoal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::VelocityPlannerGoal>()
{
  return quadrotor_msgs::msg::builder::Init_VelocityPlannerGoal_vx();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__BUILDER_HPP_
