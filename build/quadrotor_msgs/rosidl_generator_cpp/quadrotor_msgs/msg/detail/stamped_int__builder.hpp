// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/StampedInt.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__STAMPED_INT__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__STAMPED_INT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/stamped_int__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_StampedInt_val
{
public:
  explicit Init_StampedInt_val(::quadrotor_msgs::msg::StampedInt & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::StampedInt val(::quadrotor_msgs::msg::StampedInt::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::StampedInt msg_;
};

class Init_StampedInt_header
{
public:
  Init_StampedInt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StampedInt_val header(::quadrotor_msgs::msg::StampedInt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StampedInt_val(msg_);
  }

private:
  ::quadrotor_msgs::msg::StampedInt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::StampedInt>()
{
  return quadrotor_msgs::msg::builder::Init_StampedInt_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__STAMPED_INT__BUILDER_HPP_
