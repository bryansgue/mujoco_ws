// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/MotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__MOTOR_SPEED__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__MOTOR_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/motor_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorSpeed_aux
{
public:
  explicit Init_MotorSpeed_aux(::quadrotor_msgs::msg::MotorSpeed & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::MotorSpeed aux(::quadrotor_msgs::msg::MotorSpeed::_aux_type arg)
  {
    msg_.aux = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::MotorSpeed msg_;
};

class Init_MotorSpeed_forces
{
public:
  explicit Init_MotorSpeed_forces(::quadrotor_msgs::msg::MotorSpeed & msg)
  : msg_(msg)
  {}
  Init_MotorSpeed_aux forces(::quadrotor_msgs::msg::MotorSpeed::_forces_type arg)
  {
    msg_.forces = std::move(arg);
    return Init_MotorSpeed_aux(msg_);
  }

private:
  ::quadrotor_msgs::msg::MotorSpeed msg_;
};

class Init_MotorSpeed_rpm
{
public:
  explicit Init_MotorSpeed_rpm(::quadrotor_msgs::msg::MotorSpeed & msg)
  : msg_(msg)
  {}
  Init_MotorSpeed_forces rpm(::quadrotor_msgs::msg::MotorSpeed::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return Init_MotorSpeed_forces(msg_);
  }

private:
  ::quadrotor_msgs::msg::MotorSpeed msg_;
};

class Init_MotorSpeed_header
{
public:
  Init_MotorSpeed_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorSpeed_rpm header(::quadrotor_msgs::msg::MotorSpeed::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorSpeed_rpm(msg_);
  }

private:
  ::quadrotor_msgs::msg::MotorSpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::MotorSpeed>()
{
  return quadrotor_msgs::msg::builder::Init_MotorSpeed_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__MOTOR_SPEED__BUILDER_HPP_
