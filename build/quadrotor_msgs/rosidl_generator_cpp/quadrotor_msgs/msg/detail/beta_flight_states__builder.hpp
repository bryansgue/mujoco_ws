// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/BetaFlightStates.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/beta_flight_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_BetaFlightStates_motor
{
public:
  explicit Init_BetaFlightStates_motor(::quadrotor_msgs::msg::BetaFlightStates & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::BetaFlightStates motor(::quadrotor_msgs::msg::BetaFlightStates::_motor_type arg)
  {
    msg_.motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightStates msg_;
};

class Init_BetaFlightStates_angular_acceleration_filtered
{
public:
  explicit Init_BetaFlightStates_angular_acceleration_filtered(::quadrotor_msgs::msg::BetaFlightStates & msg)
  : msg_(msg)
  {}
  Init_BetaFlightStates_motor angular_acceleration_filtered(::quadrotor_msgs::msg::BetaFlightStates::_angular_acceleration_filtered_type arg)
  {
    msg_.angular_acceleration_filtered = std::move(arg);
    return Init_BetaFlightStates_motor(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightStates msg_;
};

class Init_BetaFlightStates_linear_acceleration_filtered
{
public:
  explicit Init_BetaFlightStates_linear_acceleration_filtered(::quadrotor_msgs::msg::BetaFlightStates & msg)
  : msg_(msg)
  {}
  Init_BetaFlightStates_angular_acceleration_filtered linear_acceleration_filtered(::quadrotor_msgs::msg::BetaFlightStates::_linear_acceleration_filtered_type arg)
  {
    msg_.linear_acceleration_filtered = std::move(arg);
    return Init_BetaFlightStates_angular_acceleration_filtered(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightStates msg_;
};

class Init_BetaFlightStates_quaternion
{
public:
  explicit Init_BetaFlightStates_quaternion(::quadrotor_msgs::msg::BetaFlightStates & msg)
  : msg_(msg)
  {}
  Init_BetaFlightStates_linear_acceleration_filtered quaternion(::quadrotor_msgs::msg::BetaFlightStates::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_BetaFlightStates_linear_acceleration_filtered(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightStates msg_;
};

class Init_BetaFlightStates_angular_velocity
{
public:
  explicit Init_BetaFlightStates_angular_velocity(::quadrotor_msgs::msg::BetaFlightStates & msg)
  : msg_(msg)
  {}
  Init_BetaFlightStates_quaternion angular_velocity(::quadrotor_msgs::msg::BetaFlightStates::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_BetaFlightStates_quaternion(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightStates msg_;
};

class Init_BetaFlightStates_linear_acceleration
{
public:
  explicit Init_BetaFlightStates_linear_acceleration(::quadrotor_msgs::msg::BetaFlightStates & msg)
  : msg_(msg)
  {}
  Init_BetaFlightStates_angular_velocity linear_acceleration(::quadrotor_msgs::msg::BetaFlightStates::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_BetaFlightStates_angular_velocity(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightStates msg_;
};

class Init_BetaFlightStates_header
{
public:
  Init_BetaFlightStates_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BetaFlightStates_linear_acceleration header(::quadrotor_msgs::msg::BetaFlightStates::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BetaFlightStates_linear_acceleration(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::BetaFlightStates>()
{
  return quadrotor_msgs::msg::builder::Init_BetaFlightStates_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__BUILDER_HPP_
