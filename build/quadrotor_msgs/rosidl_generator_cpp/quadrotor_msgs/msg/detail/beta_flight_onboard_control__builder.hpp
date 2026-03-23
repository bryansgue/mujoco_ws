// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/BetaFlightOnboardControl.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/beta_flight_onboard_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_BetaFlightOnboardControl_active_acro
{
public:
  explicit Init_BetaFlightOnboardControl_active_acro(::quadrotor_msgs::msg::BetaFlightOnboardControl & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::BetaFlightOnboardControl active_acro(::quadrotor_msgs::msg::BetaFlightOnboardControl::_active_acro_type arg)
  {
    msg_.active_acro = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightOnboardControl msg_;
};

class Init_BetaFlightOnboardControl_active_attitude
{
public:
  explicit Init_BetaFlightOnboardControl_active_attitude(::quadrotor_msgs::msg::BetaFlightOnboardControl & msg)
  : msg_(msg)
  {}
  Init_BetaFlightOnboardControl_active_acro active_attitude(::quadrotor_msgs::msg::BetaFlightOnboardControl::_active_attitude_type arg)
  {
    msg_.active_attitude = std::move(arg);
    return Init_BetaFlightOnboardControl_active_acro(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightOnboardControl msg_;
};

class Init_BetaFlightOnboardControl_active_offboard
{
public:
  explicit Init_BetaFlightOnboardControl_active_offboard(::quadrotor_msgs::msg::BetaFlightOnboardControl & msg)
  : msg_(msg)
  {}
  Init_BetaFlightOnboardControl_active_attitude active_offboard(::quadrotor_msgs::msg::BetaFlightOnboardControl::_active_offboard_type arg)
  {
    msg_.active_offboard = std::move(arg);
    return Init_BetaFlightOnboardControl_active_attitude(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightOnboardControl msg_;
};

class Init_BetaFlightOnboardControl_thrust_desired
{
public:
  explicit Init_BetaFlightOnboardControl_thrust_desired(::quadrotor_msgs::msg::BetaFlightOnboardControl & msg)
  : msg_(msg)
  {}
  Init_BetaFlightOnboardControl_active_offboard thrust_desired(::quadrotor_msgs::msg::BetaFlightOnboardControl::_thrust_desired_type arg)
  {
    msg_.thrust_desired = std::move(arg);
    return Init_BetaFlightOnboardControl_active_offboard(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightOnboardControl msg_;
};

class Init_BetaFlightOnboardControl_quaternion_desired
{
public:
  explicit Init_BetaFlightOnboardControl_quaternion_desired(::quadrotor_msgs::msg::BetaFlightOnboardControl & msg)
  : msg_(msg)
  {}
  Init_BetaFlightOnboardControl_thrust_desired quaternion_desired(::quadrotor_msgs::msg::BetaFlightOnboardControl::_quaternion_desired_type arg)
  {
    msg_.quaternion_desired = std::move(arg);
    return Init_BetaFlightOnboardControl_thrust_desired(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightOnboardControl msg_;
};

class Init_BetaFlightOnboardControl_angular_velocity_desired
{
public:
  explicit Init_BetaFlightOnboardControl_angular_velocity_desired(::quadrotor_msgs::msg::BetaFlightOnboardControl & msg)
  : msg_(msg)
  {}
  Init_BetaFlightOnboardControl_quaternion_desired angular_velocity_desired(::quadrotor_msgs::msg::BetaFlightOnboardControl::_angular_velocity_desired_type arg)
  {
    msg_.angular_velocity_desired = std::move(arg);
    return Init_BetaFlightOnboardControl_quaternion_desired(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightOnboardControl msg_;
};

class Init_BetaFlightOnboardControl_header
{
public:
  Init_BetaFlightOnboardControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BetaFlightOnboardControl_angular_velocity_desired header(::quadrotor_msgs::msg::BetaFlightOnboardControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BetaFlightOnboardControl_angular_velocity_desired(msg_);
  }

private:
  ::quadrotor_msgs::msg::BetaFlightOnboardControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::BetaFlightOnboardControl>()
{
  return quadrotor_msgs::msg::builder::Init_BetaFlightOnboardControl_header();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__BUILDER_HPP_
