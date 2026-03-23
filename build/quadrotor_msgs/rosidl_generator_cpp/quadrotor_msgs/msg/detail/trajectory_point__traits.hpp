// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/msg/detail/trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
// Member 'position_quad'
// Member 'velocity_quad'
// Member 'acceleration_quad'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
// Member 'snap'
// Member 'angular_velocity'
// Member 'angular_velocity_dot'
// Member 'moments'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace quadrotor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: jerk
  {
    out << "jerk: ";
    to_flow_style_yaml(msg.jerk, out);
    out << ", ";
  }

  // member: snap
  {
    out << "snap: ";
    to_flow_style_yaml(msg.snap, out);
    out << ", ";
  }

  // member: quaternion
  {
    out << "quaternion: ";
    to_flow_style_yaml(msg.quaternion, out);
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << ", ";
  }

  // member: rpm
  {
    if (msg.rpm.size() == 0) {
      out << "rpm: []";
    } else {
      out << "rpm: [";
      size_t pending_items = msg.rpm.size();
      for (auto item : msg.rpm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: forces
  {
    if (msg.forces.size() == 0) {
      out << "forces: []";
    } else {
      out << "forces: [";
      size_t pending_items = msg.forces.size();
      for (auto item : msg.forces) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: angular_velocity_dot
  {
    out << "angular_velocity_dot: ";
    to_flow_style_yaml(msg.angular_velocity_dot, out);
    out << ", ";
  }

  // member: moments
  {
    out << "moments: ";
    to_flow_style_yaml(msg.moments, out);
    out << ", ";
  }

  // member: position_quad
  {
    out << "position_quad: ";
    to_flow_style_yaml(msg.position_quad, out);
    out << ", ";
  }

  // member: velocity_quad
  {
    out << "velocity_quad: ";
    to_flow_style_yaml(msg.velocity_quad, out);
    out << ", ";
  }

  // member: acceleration_quad
  {
    out << "acceleration_quad: ";
    to_flow_style_yaml(msg.acceleration_quad, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jerk:\n";
    to_block_style_yaml(msg.jerk, out, indentation + 2);
  }

  // member: snap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snap:\n";
    to_block_style_yaml(msg.snap, out, indentation + 2);
  }

  // member: quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quaternion:\n";
    to_block_style_yaml(msg.quaternion, out, indentation + 2);
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }

  // member: rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rpm.size() == 0) {
      out << "rpm: []\n";
    } else {
      out << "rpm:\n";
      for (auto item : msg.rpm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: forces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.forces.size() == 0) {
      out << "forces: []\n";
    } else {
      out << "forces:\n";
      for (auto item : msg.forces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: angular_velocity_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_dot:\n";
    to_block_style_yaml(msg.angular_velocity_dot, out, indentation + 2);
  }

  // member: moments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moments:\n";
    to_block_style_yaml(msg.moments, out, indentation + 2);
  }

  // member: position_quad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_quad:\n";
    to_block_style_yaml(msg.position_quad, out, indentation + 2);
  }

  // member: velocity_quad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_quad:\n";
    to_block_style_yaml(msg.velocity_quad, out, indentation + 2);
  }

  // member: acceleration_quad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_quad:\n";
    to_block_style_yaml(msg.acceleration_quad, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryPoint & msg, bool use_flow_style = false)
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
  const quadrotor_msgs::msg::TrajectoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::msg::TrajectoryPoint & msg)
{
  return quadrotor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::msg::TrajectoryPoint>()
{
  return "quadrotor_msgs::msg::TrajectoryPoint";
}

template<>
inline const char * name<quadrotor_msgs::msg::TrajectoryPoint>()
{
  return "quadrotor_msgs/msg/TrajectoryPoint";
}

template<>
struct has_fixed_size<quadrotor_msgs::msg::TrajectoryPoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<quadrotor_msgs::msg::TrajectoryPoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<quadrotor_msgs::msg::TrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__TRAITS_HPP_
