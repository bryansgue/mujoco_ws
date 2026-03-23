// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/FlatOutputs.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__FLAT_OUTPUTS__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__FLAT_OUTPUTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/flat_outputs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_FlatOutputs_yaw
{
public:
  explicit Init_FlatOutputs_yaw(::quadrotor_msgs::msg::FlatOutputs & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::FlatOutputs yaw(::quadrotor_msgs::msg::FlatOutputs::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::FlatOutputs msg_;
};

class Init_FlatOutputs_z
{
public:
  explicit Init_FlatOutputs_z(::quadrotor_msgs::msg::FlatOutputs & msg)
  : msg_(msg)
  {}
  Init_FlatOutputs_yaw z(::quadrotor_msgs::msg::FlatOutputs::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_FlatOutputs_yaw(msg_);
  }

private:
  ::quadrotor_msgs::msg::FlatOutputs msg_;
};

class Init_FlatOutputs_y
{
public:
  explicit Init_FlatOutputs_y(::quadrotor_msgs::msg::FlatOutputs & msg)
  : msg_(msg)
  {}
  Init_FlatOutputs_z y(::quadrotor_msgs::msg::FlatOutputs::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_FlatOutputs_z(msg_);
  }

private:
  ::quadrotor_msgs::msg::FlatOutputs msg_;
};

class Init_FlatOutputs_x
{
public:
  explicit Init_FlatOutputs_x(::quadrotor_msgs::msg::FlatOutputs & msg)
  : msg_(msg)
  {}
  Init_FlatOutputs_y x(::quadrotor_msgs::msg::FlatOutputs::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_FlatOutputs_y(msg_);
  }

private:
  ::quadrotor_msgs::msg::FlatOutputs msg_;
};

class Init_FlatOutputs_header
{
public:
  Init_FlatOutputs_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FlatOutputs_x header(::quadrotor_msgs::msg::FlatOutputs::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FlatOutputs_x(msg_);
  }

private:
  ::quadrotor_msgs::msg::FlatOutputs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::FlatOutputs>()
{
  return quadrotor_msgs::msg::builder::Init_FlatOutputs_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__FLAT_OUTPUTS__BUILDER_HPP_
