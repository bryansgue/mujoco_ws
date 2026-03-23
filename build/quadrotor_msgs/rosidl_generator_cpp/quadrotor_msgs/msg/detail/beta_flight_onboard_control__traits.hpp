// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:msg/BetaFlightOnboardControl.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__TRAITS_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/msg/detail/beta_flight_onboard_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'angular_velocity_desired'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'quaternion_desired'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace quadrotor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BetaFlightOnboardControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: angular_velocity_desired
  {
    out << "angular_velocity_desired: ";
    to_flow_style_yaml(msg.angular_velocity_desired, out);
    out << ", ";
  }

  // member: quaternion_desired
  {
    out << "quaternion_desired: ";
    to_flow_style_yaml(msg.quaternion_desired, out);
    out << ", ";
  }

  // member: thrust_desired
  {
    out << "thrust_desired: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust_desired, out);
    out << ", ";
  }

  // member: active_offboard
  {
    out << "active_offboard: ";
    rosidl_generator_traits::value_to_yaml(msg.active_offboard, out);
    out << ", ";
  }

  // member: active_attitude
  {
    out << "active_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.active_attitude, out);
    out << ", ";
  }

  // member: active_acro
  {
    out << "active_acro: ";
    rosidl_generator_traits::value_to_yaml(msg.active_acro, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BetaFlightOnboardControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: angular_velocity_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_desired:\n";
    to_block_style_yaml(msg.angular_velocity_desired, out, indentation + 2);
  }

  // member: quaternion_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quaternion_desired:\n";
    to_block_style_yaml(msg.quaternion_desired, out, indentation + 2);
  }

  // member: thrust_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thrust_desired: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust_desired, out);
    out << "\n";
  }

  // member: active_offboard
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_offboard: ";
    rosidl_generator_traits::value_to_yaml(msg.active_offboard, out);
    out << "\n";
  }

  // member: active_attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.active_attitude, out);
    out << "\n";
  }

  // member: active_acro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_acro: ";
    rosidl_generator_traits::value_to_yaml(msg.active_acro, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BetaFlightOnboardControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace quadrotor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use quadrotor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const quadrotor_msgs::msg::BetaFlightOnboardControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::msg::BetaFlightOnboardControl & msg)
{
  return quadrotor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::msg::BetaFlightOnboardControl>()
{
  return "quadrotor_msgs::msg::BetaFlightOnboardControl";
}

template<>
inline const char * name<quadrotor_msgs::msg::BetaFlightOnboardControl>()
{
  return "quadrotor_msgs/msg/BetaFlightOnboardControl";
}

template<>
struct has_fixed_size<quadrotor_msgs::msg::BetaFlightOnboardControl>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<quadrotor_msgs::msg::BetaFlightOnboardControl>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<quadrotor_msgs::msg::BetaFlightOnboardControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__TRAITS_HPP_
