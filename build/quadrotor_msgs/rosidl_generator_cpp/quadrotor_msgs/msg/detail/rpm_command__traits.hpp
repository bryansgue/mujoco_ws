// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:msg/RPMCommand.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__RPM_COMMAND__TRAITS_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__RPM_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/msg/detail/rpm_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'aux'
#include "quadrotor_msgs/msg/detail/aux_command__traits.hpp"

namespace quadrotor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RPMCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rpms
  {
    if (msg.rpms.size() == 0) {
      out << "rpms: []";
    } else {
      out << "rpms: [";
      size_t pending_items = msg.rpms.size();
      for (auto item : msg.rpms) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motors
  {
    if (msg.motors.size() == 0) {
      out << "motors: []";
    } else {
      out << "motors: [";
      size_t pending_items = msg.motors.size();
      for (auto item : msg.motors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aux
  {
    out << "aux: ";
    to_flow_style_yaml(msg.aux, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RPMCommand & msg,
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

  // member: rpms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rpms.size() == 0) {
      out << "rpms: []\n";
    } else {
      out << "rpms:\n";
      for (auto item : msg.rpms) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motors.size() == 0) {
      out << "motors: []\n";
    } else {
      out << "motors:\n";
      for (auto item : msg.motors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aux
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux:\n";
    to_block_style_yaml(msg.aux, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RPMCommand & msg, bool use_flow_style = false)
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
  const quadrotor_msgs::msg::RPMCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::msg::RPMCommand & msg)
{
  return quadrotor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::msg::RPMCommand>()
{
  return "quadrotor_msgs::msg::RPMCommand";
}

template<>
inline const char * name<quadrotor_msgs::msg::RPMCommand>()
{
  return "quadrotor_msgs/msg/RPMCommand";
}

template<>
struct has_fixed_size<quadrotor_msgs::msg::RPMCommand>
  : std::integral_constant<bool, has_fixed_size<quadrotor_msgs::msg::AuxCommand>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<quadrotor_msgs::msg::RPMCommand>
  : std::integral_constant<bool, has_bounded_size<quadrotor_msgs::msg::AuxCommand>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<quadrotor_msgs::msg::RPMCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__MSG__DETAIL__RPM_COMMAND__TRAITS_HPP_
