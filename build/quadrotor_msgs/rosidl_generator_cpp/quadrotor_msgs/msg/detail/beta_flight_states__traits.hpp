// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:msg/BetaFlightStates.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__TRAITS_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/msg/detail/beta_flight_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'linear_acceleration_filtered'
// Member 'angular_acceleration_filtered'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace quadrotor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BetaFlightStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: linear_acceleration
  {
    out << "linear_acceleration: ";
    to_flow_style_yaml(msg.linear_acceleration, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: quaternion
  {
    out << "quaternion: ";
    to_flow_style_yaml(msg.quaternion, out);
    out << ", ";
  }

  // member: linear_acceleration_filtered
  {
    out << "linear_acceleration_filtered: ";
    to_flow_style_yaml(msg.linear_acceleration_filtered, out);
    out << ", ";
  }

  // member: angular_acceleration_filtered
  {
    out << "angular_acceleration_filtered: ";
    to_flow_style_yaml(msg.angular_acceleration_filtered, out);
    out << ", ";
  }

  // member: motor
  {
    if (msg.motor.size() == 0) {
      out << "motor: []";
    } else {
      out << "motor: [";
      size_t pending_items = msg.motor.size();
      for (auto item : msg.motor) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BetaFlightStates & msg,
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

  // member: linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration:\n";
    to_block_style_yaml(msg.linear_acceleration, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quaternion:\n";
    to_block_style_yaml(msg.quaternion, out, indentation + 2);
  }

  // member: linear_acceleration_filtered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration_filtered:\n";
    to_block_style_yaml(msg.linear_acceleration_filtered, out, indentation + 2);
  }

  // member: angular_acceleration_filtered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_acceleration_filtered:\n";
    to_block_style_yaml(msg.angular_acceleration_filtered, out, indentation + 2);
  }

  // member: motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor.size() == 0) {
      out << "motor: []\n";
    } else {
      out << "motor:\n";
      for (auto item : msg.motor) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BetaFlightStates & msg, bool use_flow_style = false)
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
  const quadrotor_msgs::msg::BetaFlightStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::msg::BetaFlightStates & msg)
{
  return quadrotor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::msg::BetaFlightStates>()
{
  return "quadrotor_msgs::msg::BetaFlightStates";
}

template<>
inline const char * name<quadrotor_msgs::msg::BetaFlightStates>()
{
  return "quadrotor_msgs/msg/BetaFlightStates";
}

template<>
struct has_fixed_size<quadrotor_msgs::msg::BetaFlightStates>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<quadrotor_msgs::msg::BetaFlightStates>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<quadrotor_msgs::msg::BetaFlightStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__TRAITS_HPP_
