// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/LocalSS.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__LOCAL_SS__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__LOCAL_SS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/local_ss__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalSS_data
{
public:
  explicit Init_LocalSS_data(::quadrotor_msgs::msg::LocalSS & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::LocalSS data(::quadrotor_msgs::msg::LocalSS::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::LocalSS msg_;
};

class Init_LocalSS_header
{
public:
  Init_LocalSS_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalSS_data header(::quadrotor_msgs::msg::LocalSS::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LocalSS_data(msg_);
  }

private:
  ::quadrotor_msgs::msg::LocalSS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::LocalSS>()
{
  return quadrotor_msgs::msg::builder::Init_LocalSS_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__LOCAL_SS__BUILDER_HPP_
