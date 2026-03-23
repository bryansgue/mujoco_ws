// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPoint_acceleration_quad
{
public:
  explicit Init_TrajectoryPoint_acceleration_quad(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::TrajectoryPoint acceleration_quad(::quadrotor_msgs::msg::TrajectoryPoint::_acceleration_quad_type arg)
  {
    msg_.acceleration_quad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_velocity_quad
{
public:
  explicit Init_TrajectoryPoint_velocity_quad(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_acceleration_quad velocity_quad(::quadrotor_msgs::msg::TrajectoryPoint::_velocity_quad_type arg)
  {
    msg_.velocity_quad = std::move(arg);
    return Init_TrajectoryPoint_acceleration_quad(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_position_quad
{
public:
  explicit Init_TrajectoryPoint_position_quad(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_velocity_quad position_quad(::quadrotor_msgs::msg::TrajectoryPoint::_position_quad_type arg)
  {
    msg_.position_quad = std::move(arg);
    return Init_TrajectoryPoint_velocity_quad(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_moments
{
public:
  explicit Init_TrajectoryPoint_moments(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_position_quad moments(::quadrotor_msgs::msg::TrajectoryPoint::_moments_type arg)
  {
    msg_.moments = std::move(arg);
    return Init_TrajectoryPoint_position_quad(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_angular_velocity_dot
{
public:
  explicit Init_TrajectoryPoint_angular_velocity_dot(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_moments angular_velocity_dot(::quadrotor_msgs::msg::TrajectoryPoint::_angular_velocity_dot_type arg)
  {
    msg_.angular_velocity_dot = std::move(arg);
    return Init_TrajectoryPoint_moments(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_angular_velocity
{
public:
  explicit Init_TrajectoryPoint_angular_velocity(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_angular_velocity_dot angular_velocity(::quadrotor_msgs::msg::TrajectoryPoint::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_TrajectoryPoint_angular_velocity_dot(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_forces
{
public:
  explicit Init_TrajectoryPoint_forces(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_angular_velocity forces(::quadrotor_msgs::msg::TrajectoryPoint::_forces_type arg)
  {
    msg_.forces = std::move(arg);
    return Init_TrajectoryPoint_angular_velocity(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_rpm
{
public:
  explicit Init_TrajectoryPoint_rpm(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_forces rpm(::quadrotor_msgs::msg::TrajectoryPoint::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return Init_TrajectoryPoint_forces(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_force
{
public:
  explicit Init_TrajectoryPoint_force(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_rpm force(::quadrotor_msgs::msg::TrajectoryPoint::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_TrajectoryPoint_rpm(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_quaternion
{
public:
  explicit Init_TrajectoryPoint_quaternion(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_force quaternion(::quadrotor_msgs::msg::TrajectoryPoint::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_TrajectoryPoint_force(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_snap
{
public:
  explicit Init_TrajectoryPoint_snap(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_quaternion snap(::quadrotor_msgs::msg::TrajectoryPoint::_snap_type arg)
  {
    msg_.snap = std::move(arg);
    return Init_TrajectoryPoint_quaternion(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_jerk
{
public:
  explicit Init_TrajectoryPoint_jerk(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_snap jerk(::quadrotor_msgs::msg::TrajectoryPoint::_jerk_type arg)
  {
    msg_.jerk = std::move(arg);
    return Init_TrajectoryPoint_snap(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_acceleration
{
public:
  explicit Init_TrajectoryPoint_acceleration(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_jerk acceleration(::quadrotor_msgs::msg::TrajectoryPoint::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_TrajectoryPoint_jerk(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_velocity
{
public:
  explicit Init_TrajectoryPoint_velocity(::quadrotor_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_acceleration velocity(::quadrotor_msgs::msg::TrajectoryPoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TrajectoryPoint_acceleration(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_position
{
public:
  Init_TrajectoryPoint_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPoint_velocity position(::quadrotor_msgs::msg::TrajectoryPoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TrajectoryPoint_velocity(msg_);
  }

private:
  ::quadrotor_msgs::msg::TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::TrajectoryPoint>()
{
  return quadrotor_msgs::msg::builder::Init_TrajectoryPoint_position();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
