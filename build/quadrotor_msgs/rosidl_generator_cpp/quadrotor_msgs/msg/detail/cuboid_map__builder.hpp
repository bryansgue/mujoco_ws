// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/CuboidMap.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__CUBOID_MAP__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__CUBOID_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/cuboid_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_CuboidMap_connectivity
{
public:
  explicit Init_CuboidMap_connectivity(::quadrotor_msgs::msg::CuboidMap & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::CuboidMap connectivity(::quadrotor_msgs::msg::CuboidMap::_connectivity_type arg)
  {
    msg_.connectivity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::CuboidMap msg_;
};

class Init_CuboidMap_scale
{
public:
  explicit Init_CuboidMap_scale(::quadrotor_msgs::msg::CuboidMap & msg)
  : msg_(msg)
  {}
  Init_CuboidMap_connectivity scale(::quadrotor_msgs::msg::CuboidMap::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_CuboidMap_connectivity(msg_);
  }

private:
  ::quadrotor_msgs::msg::CuboidMap msg_;
};

class Init_CuboidMap_pos
{
public:
  explicit Init_CuboidMap_pos(::quadrotor_msgs::msg::CuboidMap & msg)
  : msg_(msg)
  {}
  Init_CuboidMap_scale pos(::quadrotor_msgs::msg::CuboidMap::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_CuboidMap_scale(msg_);
  }

private:
  ::quadrotor_msgs::msg::CuboidMap msg_;
};

class Init_CuboidMap_header
{
public:
  Init_CuboidMap_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CuboidMap_pos header(::quadrotor_msgs::msg::CuboidMap::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CuboidMap_pos(msg_);
  }

private:
  ::quadrotor_msgs::msg::CuboidMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::CuboidMap>()
{
  return quadrotor_msgs::msg::builder::Init_CuboidMap_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__CUBOID_MAP__BUILDER_HPP_
