// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:srv/Transition.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__BUILDER_HPP_
#define QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/srv/detail/transition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace srv
{

namespace builder
{

class Init_Transition_Request_planner_goal
{
public:
  explicit Init_Transition_Request_planner_goal(::quadrotor_msgs::srv::Transition_Request & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::srv::Transition_Request planner_goal(::quadrotor_msgs::srv::Transition_Request::_planner_goal_type arg)
  {
    msg_.planner_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::srv::Transition_Request msg_;
};

class Init_Transition_Request_tracker
{
public:
  Init_Transition_Request_tracker()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transition_Request_planner_goal tracker(::quadrotor_msgs::srv::Transition_Request::_tracker_type arg)
  {
    msg_.tracker = std::move(arg);
    return Init_Transition_Request_planner_goal(msg_);
  }

private:
  ::quadrotor_msgs::srv::Transition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::srv::Transition_Request>()
{
  return quadrotor_msgs::srv::builder::Init_Transition_Request_tracker();
}

}  // namespace quadrotor_msgs


namespace quadrotor_msgs
{

namespace srv
{

namespace builder
{

class Init_Transition_Response_message
{
public:
  explicit Init_Transition_Response_message(::quadrotor_msgs::srv::Transition_Response & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::srv::Transition_Response message(::quadrotor_msgs::srv::Transition_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::srv::Transition_Response msg_;
};

class Init_Transition_Response_success
{
public:
  Init_Transition_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transition_Response_message success(::quadrotor_msgs::srv::Transition_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Transition_Response_message(msg_);
  }

private:
  ::quadrotor_msgs::srv::Transition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::srv::Transition_Response>()
{
  return quadrotor_msgs::srv::builder::Init_Transition_Response_success();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__BUILDER_HPP_
