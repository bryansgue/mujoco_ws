// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/FMCommand.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__FM_COMMAND__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__FM_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/fm_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_FMCommand_aux
{
public:
  explicit Init_FMCommand_aux(::quadrotor_msgs::msg::FMCommand & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::FMCommand aux(::quadrotor_msgs::msg::FMCommand::_aux_type arg)
  {
    msg_.aux = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

class Init_FMCommand_kom
{
public:
  explicit Init_FMCommand_kom(::quadrotor_msgs::msg::FMCommand & msg)
  : msg_(msg)
  {}
  Init_FMCommand_aux kom(::quadrotor_msgs::msg::FMCommand::_kom_type arg)
  {
    msg_.kom = std::move(arg);
    return Init_FMCommand_aux(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

class Init_FMCommand_kr
{
public:
  explicit Init_FMCommand_kr(::quadrotor_msgs::msg::FMCommand & msg)
  : msg_(msg)
  {}
  Init_FMCommand_kom kr(::quadrotor_msgs::msg::FMCommand::_kr_type arg)
  {
    msg_.kr = std::move(arg);
    return Init_FMCommand_kom(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

class Init_FMCommand_quaternion
{
public:
  explicit Init_FMCommand_quaternion(::quadrotor_msgs::msg::FMCommand & msg)
  : msg_(msg)
  {}
  Init_FMCommand_kr quaternion(::quadrotor_msgs::msg::FMCommand::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_FMCommand_kr(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

class Init_FMCommand_angular_velocity
{
public:
  explicit Init_FMCommand_angular_velocity(::quadrotor_msgs::msg::FMCommand & msg)
  : msg_(msg)
  {}
  Init_FMCommand_quaternion angular_velocity(::quadrotor_msgs::msg::FMCommand::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_FMCommand_quaternion(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

class Init_FMCommand_moments
{
public:
  explicit Init_FMCommand_moments(::quadrotor_msgs::msg::FMCommand & msg)
  : msg_(msg)
  {}
  Init_FMCommand_angular_velocity moments(::quadrotor_msgs::msg::FMCommand::_moments_type arg)
  {
    msg_.moments = std::move(arg);
    return Init_FMCommand_angular_velocity(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

class Init_FMCommand_yaw
{
public:
  explicit Init_FMCommand_yaw(::quadrotor_msgs::msg::FMCommand & msg)
  : msg_(msg)
  {}
  Init_FMCommand_moments yaw(::quadrotor_msgs::msg::FMCommand::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_FMCommand_moments(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

class Init_FMCommand_pitch
{
public:
  explicit Init_FMCommand_pitch(::quadrotor_msgs::msg::FMCommand & msg)
  : msg_(msg)
  {}
  Init_FMCommand_yaw pitch(::quadrotor_msgs::msg::FMCommand::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_FMCommand_yaw(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

class Init_FMCommand_roll
{
public:
  explicit Init_FMCommand_roll(::quadrotor_msgs::msg::FMCommand & msg)
  : msg_(msg)
  {}
  Init_FMCommand_pitch roll(::quadrotor_msgs::msg::FMCommand::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_FMCommand_pitch(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

class Init_FMCommand_thrust
{
public:
  explicit Init_FMCommand_thrust(::quadrotor_msgs::msg::FMCommand & msg)
  : msg_(msg)
  {}
  Init_FMCommand_roll thrust(::quadrotor_msgs::msg::FMCommand::_thrust_type arg)
  {
    msg_.thrust = std::move(arg);
    return Init_FMCommand_roll(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

class Init_FMCommand_mpc_flag
{
public:
  explicit Init_FMCommand_mpc_flag(::quadrotor_msgs::msg::FMCommand & msg)
  : msg_(msg)
  {}
  Init_FMCommand_thrust mpc_flag(::quadrotor_msgs::msg::FMCommand::_mpc_flag_type arg)
  {
    msg_.mpc_flag = std::move(arg);
    return Init_FMCommand_thrust(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

class Init_FMCommand_header
{
public:
  Init_FMCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FMCommand_mpc_flag header(::quadrotor_msgs::msg::FMCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FMCommand_mpc_flag(msg_);
  }

private:
  ::quadrotor_msgs::msg::FMCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::FMCommand>()
{
  return quadrotor_msgs::msg::builder::Init_FMCommand_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__FM_COMMAND__BUILDER_HPP_
