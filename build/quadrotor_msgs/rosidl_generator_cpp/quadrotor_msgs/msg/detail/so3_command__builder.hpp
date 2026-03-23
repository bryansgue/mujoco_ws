// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/SO3Command.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__SO3_COMMAND__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__SO3_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/so3_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_SO3Command_thrust
{
public:
  explicit Init_SO3Command_thrust(::quadrotor_msgs::msg::SO3Command & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::SO3Command thrust(::quadrotor_msgs::msg::SO3Command::_thrust_type arg)
  {
    msg_.thrust = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::SO3Command msg_;
};

class Init_SO3Command_torque
{
public:
  explicit Init_SO3Command_torque(::quadrotor_msgs::msg::SO3Command & msg)
  : msg_(msg)
  {}
  Init_SO3Command_thrust torque(::quadrotor_msgs::msg::SO3Command::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_SO3Command_thrust(msg_);
  }

private:
  ::quadrotor_msgs::msg::SO3Command msg_;
};

class Init_SO3Command_kom
{
public:
  explicit Init_SO3Command_kom(::quadrotor_msgs::msg::SO3Command & msg)
  : msg_(msg)
  {}
  Init_SO3Command_torque kom(::quadrotor_msgs::msg::SO3Command::_kom_type arg)
  {
    msg_.kom = std::move(arg);
    return Init_SO3Command_torque(msg_);
  }

private:
  ::quadrotor_msgs::msg::SO3Command msg_;
};

class Init_SO3Command_kr
{
public:
  explicit Init_SO3Command_kr(::quadrotor_msgs::msg::SO3Command & msg)
  : msg_(msg)
  {}
  Init_SO3Command_kom kr(::quadrotor_msgs::msg::SO3Command::_kr_type arg)
  {
    msg_.kr = std::move(arg);
    return Init_SO3Command_kom(msg_);
  }

private:
  ::quadrotor_msgs::msg::SO3Command msg_;
};

class Init_SO3Command_kv
{
public:
  explicit Init_SO3Command_kv(::quadrotor_msgs::msg::SO3Command & msg)
  : msg_(msg)
  {}
  Init_SO3Command_kr kv(::quadrotor_msgs::msg::SO3Command::_kv_type arg)
  {
    msg_.kv = std::move(arg);
    return Init_SO3Command_kr(msg_);
  }

private:
  ::quadrotor_msgs::msg::SO3Command msg_;
};

class Init_SO3Command_kx
{
public:
  explicit Init_SO3Command_kx(::quadrotor_msgs::msg::SO3Command & msg)
  : msg_(msg)
  {}
  Init_SO3Command_kv kx(::quadrotor_msgs::msg::SO3Command::_kx_type arg)
  {
    msg_.kx = std::move(arg);
    return Init_SO3Command_kv(msg_);
  }

private:
  ::quadrotor_msgs::msg::SO3Command msg_;
};

class Init_SO3Command_aux
{
public:
  explicit Init_SO3Command_aux(::quadrotor_msgs::msg::SO3Command & msg)
  : msg_(msg)
  {}
  Init_SO3Command_kx aux(::quadrotor_msgs::msg::SO3Command::_aux_type arg)
  {
    msg_.aux = std::move(arg);
    return Init_SO3Command_kx(msg_);
  }

private:
  ::quadrotor_msgs::msg::SO3Command msg_;
};

class Init_SO3Command_angular_velocity
{
public:
  explicit Init_SO3Command_angular_velocity(::quadrotor_msgs::msg::SO3Command & msg)
  : msg_(msg)
  {}
  Init_SO3Command_aux angular_velocity(::quadrotor_msgs::msg::SO3Command::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_SO3Command_aux(msg_);
  }

private:
  ::quadrotor_msgs::msg::SO3Command msg_;
};

class Init_SO3Command_orientation
{
public:
  explicit Init_SO3Command_orientation(::quadrotor_msgs::msg::SO3Command & msg)
  : msg_(msg)
  {}
  Init_SO3Command_angular_velocity orientation(::quadrotor_msgs::msg::SO3Command::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_SO3Command_angular_velocity(msg_);
  }

private:
  ::quadrotor_msgs::msg::SO3Command msg_;
};

class Init_SO3Command_force
{
public:
  explicit Init_SO3Command_force(::quadrotor_msgs::msg::SO3Command & msg)
  : msg_(msg)
  {}
  Init_SO3Command_orientation force(::quadrotor_msgs::msg::SO3Command::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_SO3Command_orientation(msg_);
  }

private:
  ::quadrotor_msgs::msg::SO3Command msg_;
};

class Init_SO3Command_header
{
public:
  Init_SO3Command_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SO3Command_force header(::quadrotor_msgs::msg::SO3Command::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SO3Command_force(msg_);
  }

private:
  ::quadrotor_msgs::msg::SO3Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::SO3Command>()
{
  return quadrotor_msgs::msg::builder::Init_SO3Command_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__SO3_COMMAND__BUILDER_HPP_
