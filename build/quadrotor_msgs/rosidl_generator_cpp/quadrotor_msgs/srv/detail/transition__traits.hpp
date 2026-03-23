// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quadrotor_msgs:srv/Transition.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__TRAITS_HPP_
#define QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quadrotor_msgs/srv/detail/transition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'planner_goal'
#include "quadrotor_msgs/msg/detail/planner_goal__traits.hpp"

namespace quadrotor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Transition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: tracker
  {
    out << "tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.tracker, out);
    out << ", ";
  }

  // member: planner_goal
  {
    out << "planner_goal: ";
    to_flow_style_yaml(msg.planner_goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Transition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tracker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.tracker, out);
    out << "\n";
  }

  // member: planner_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_goal:\n";
    to_block_style_yaml(msg.planner_goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Transition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace quadrotor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use quadrotor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const quadrotor_msgs::srv::Transition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::srv::Transition_Request & msg)
{
  return quadrotor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::srv::Transition_Request>()
{
  return "quadrotor_msgs::srv::Transition_Request";
}

template<>
inline const char * name<quadrotor_msgs::srv::Transition_Request>()
{
  return "quadrotor_msgs/srv/Transition_Request";
}

template<>
struct has_fixed_size<quadrotor_msgs::srv::Transition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<quadrotor_msgs::srv::Transition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<quadrotor_msgs::srv::Transition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace quadrotor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Transition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Transition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Transition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace quadrotor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use quadrotor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const quadrotor_msgs::srv::Transition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  quadrotor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quadrotor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const quadrotor_msgs::srv::Transition_Response & msg)
{
  return quadrotor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<quadrotor_msgs::srv::Transition_Response>()
{
  return "quadrotor_msgs::srv::Transition_Response";
}

template<>
inline const char * name<quadrotor_msgs::srv::Transition_Response>()
{
  return "quadrotor_msgs/srv/Transition_Response";
}

template<>
struct has_fixed_size<quadrotor_msgs::srv::Transition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<quadrotor_msgs::srv::Transition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<quadrotor_msgs::srv::Transition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<quadrotor_msgs::srv::Transition>()
{
  return "quadrotor_msgs::srv::Transition";
}

template<>
inline const char * name<quadrotor_msgs::srv::Transition>()
{
  return "quadrotor_msgs/srv/Transition";
}

template<>
struct has_fixed_size<quadrotor_msgs::srv::Transition>
  : std::integral_constant<
    bool,
    has_fixed_size<quadrotor_msgs::srv::Transition_Request>::value &&
    has_fixed_size<quadrotor_msgs::srv::Transition_Response>::value
  >
{
};

template<>
struct has_bounded_size<quadrotor_msgs::srv::Transition>
  : std::integral_constant<
    bool,
    has_bounded_size<quadrotor_msgs::srv::Transition_Request>::value &&
    has_bounded_size<quadrotor_msgs::srv::Transition_Response>::value
  >
{
};

template<>
struct is_service<quadrotor_msgs::srv::Transition>
  : std::true_type
{
};

template<>
struct is_service_request<quadrotor_msgs::srv::Transition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<quadrotor_msgs::srv::Transition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__TRAITS_HPP_
