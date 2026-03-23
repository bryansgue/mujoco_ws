// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:msg/CuboidMap.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__CUBOID_MAP__TRAITS_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__CUBOID_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/msg/detail/cuboid_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'scale'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace quadrotor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CuboidMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pos
  {
    if (msg.pos.size() == 0) {
      out << "pos: []";
    } else {
      out << "pos: [";
      size_t pending_items = msg.pos.size();
      for (auto item : msg.pos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: scale
  {
    if (msg.scale.size() == 0) {
      out << "scale: []";
    } else {
      out << "scale: [";
      size_t pending_items = msg.scale.size();
      for (auto item : msg.scale) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: connectivity
  {
    if (msg.connectivity.size() == 0) {
      out << "connectivity: []";
    } else {
      out << "connectivity: [";
      size_t pending_items = msg.connectivity.size();
      for (auto item : msg.connectivity) {
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
  const CuboidMap & msg,
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

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos.size() == 0) {
      out << "pos: []\n";
    } else {
      out << "pos:\n";
      for (auto item : msg.pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scale.size() == 0) {
      out << "scale: []\n";
    } else {
      out << "scale:\n";
      for (auto item : msg.scale) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: connectivity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.connectivity.size() == 0) {
      out << "connectivity: []\n";
    } else {
      out << "connectivity:\n";
      for (auto item : msg.connectivity) {
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

inline std::string to_yaml(const CuboidMap & msg, bool use_flow_style = false)
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
  const quadrotor_msgs::msg::CuboidMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::msg::CuboidMap & msg)
{
  return quadrotor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::msg::CuboidMap>()
{
  return "quadrotor_msgs::msg::CuboidMap";
}

template<>
inline const char * name<quadrotor_msgs::msg::CuboidMap>()
{
  return "quadrotor_msgs/msg/CuboidMap";
}

template<>
struct has_fixed_size<quadrotor_msgs::msg::CuboidMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<quadrotor_msgs::msg::CuboidMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<quadrotor_msgs::msg::CuboidMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__MSG__DETAIL__CUBOID_MAP__TRAITS_HPP_
