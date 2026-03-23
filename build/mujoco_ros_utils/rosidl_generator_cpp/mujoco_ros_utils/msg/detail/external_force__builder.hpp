// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mujoco_ros_utils:msg/ExternalForce.idl
// generated code does not contain a copyright notice

#ifndef MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__BUILDER_HPP_
#define MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mujoco_ros_utils/msg/detail/external_force__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mujoco_ros_utils
{

namespace msg
{

namespace builder
{

class Init_ExternalForce_force
{
public:
  explicit Init_ExternalForce_force(::mujoco_ros_utils::msg::ExternalForce & msg)
  : msg_(msg)
  {}
  ::mujoco_ros_utils::msg::ExternalForce force(::mujoco_ros_utils::msg::ExternalForce::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mujoco_ros_utils::msg::ExternalForce msg_;
};

class Init_ExternalForce_pos
{
public:
  explicit Init_ExternalForce_pos(::mujoco_ros_utils::msg::ExternalForce & msg)
  : msg_(msg)
  {}
  Init_ExternalForce_force pos(::mujoco_ros_utils::msg::ExternalForce::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_ExternalForce_force(msg_);
  }

private:
  ::mujoco_ros_utils::msg::ExternalForce msg_;
};

class Init_ExternalForce_duration
{
public:
  Init_ExternalForce_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExternalForce_pos duration(::mujoco_ros_utils::msg::ExternalForce::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_ExternalForce_pos(msg_);
  }

private:
  ::mujoco_ros_utils::msg::ExternalForce msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mujoco_ros_utils::msg::ExternalForce>()
{
  return mujoco_ros_utils::msg::builder::Init_ExternalForce_duration();
}

}  // namespace mujoco_ros_utils

#endif  // MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__BUILDER_HPP_
