// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/RPMCommand.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__RPM_COMMAND__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__RPM_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/rpm_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_RPMCommand_aux
{
public:
  explicit Init_RPMCommand_aux(::quadrotor_msgs::msg::RPMCommand & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::RPMCommand aux(::quadrotor_msgs::msg::RPMCommand::_aux_type arg)
  {
    msg_.aux = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::RPMCommand msg_;
};

class Init_RPMCommand_motors
{
public:
  explicit Init_RPMCommand_motors(::quadrotor_msgs::msg::RPMCommand & msg)
  : msg_(msg)
  {}
  Init_RPMCommand_aux motors(::quadrotor_msgs::msg::RPMCommand::_motors_type arg)
  {
    msg_.motors = std::move(arg);
    return Init_RPMCommand_aux(msg_);
  }

private:
  ::quadrotor_msgs::msg::RPMCommand msg_;
};

class Init_RPMCommand_rpms
{
public:
  explicit Init_RPMCommand_rpms(::quadrotor_msgs::msg::RPMCommand & msg)
  : msg_(msg)
  {}
  Init_RPMCommand_motors rpms(::quadrotor_msgs::msg::RPMCommand::_rpms_type arg)
  {
    msg_.rpms = std::move(arg);
    return Init_RPMCommand_motors(msg_);
  }

private:
  ::quadrotor_msgs::msg::RPMCommand msg_;
};

class Init_RPMCommand_header
{
public:
  Init_RPMCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RPMCommand_rpms header(::quadrotor_msgs::msg::RPMCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RPMCommand_rpms(msg_);
  }

private:
  ::quadrotor_msgs::msg::RPMCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::RPMCommand>()
{
  return quadrotor_msgs::msg::builder::Init_RPMCommand_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__RPM_COMMAND__BUILDER_HPP_
