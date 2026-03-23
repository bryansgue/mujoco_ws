// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/PWMCommand.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__PWM_COMMAND__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__PWM_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/pwm_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_PWMCommand_pwm
{
public:
  explicit Init_PWMCommand_pwm(::quadrotor_msgs::msg::PWMCommand & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::PWMCommand pwm(::quadrotor_msgs::msg::PWMCommand::_pwm_type arg)
  {
    msg_.pwm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::PWMCommand msg_;
};

class Init_PWMCommand_header
{
public:
  Init_PWMCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PWMCommand_pwm header(::quadrotor_msgs::msg::PWMCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PWMCommand_pwm(msg_);
  }

private:
  ::quadrotor_msgs::msg::PWMCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::PWMCommand>()
{
  return quadrotor_msgs::msg::builder::Init_PWMCommand_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__PWM_COMMAND__BUILDER_HPP_
