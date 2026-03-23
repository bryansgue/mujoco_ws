// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quadrotor_msgs:msg/QpPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__BUILDER_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quadrotor_msgs/msg/detail/qp_planner_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quadrotor_msgs
{

namespace msg
{

namespace builder
{

class Init_QpPlannerGoal_duration
{
public:
  explicit Init_QpPlannerGoal_duration(::quadrotor_msgs::msg::QpPlannerGoal & msg)
  : msg_(msg)
  {}
  ::quadrotor_msgs::msg::QpPlannerGoal duration(::quadrotor_msgs::msg::QpPlannerGoal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quadrotor_msgs::msg::QpPlannerGoal msg_;
};

class Init_QpPlannerGoal_future_point
{
public:
  explicit Init_QpPlannerGoal_future_point(::quadrotor_msgs::msg::QpPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_QpPlannerGoal_duration future_point(::quadrotor_msgs::msg::QpPlannerGoal::_future_point_type arg)
  {
    msg_.future_point = std::move(arg);
    return Init_QpPlannerGoal_duration(msg_);
  }

private:
  ::quadrotor_msgs::msg::QpPlannerGoal msg_;
};

class Init_QpPlannerGoal_max_v
{
public:
  explicit Init_QpPlannerGoal_max_v(::quadrotor_msgs::msg::QpPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_QpPlannerGoal_future_point max_v(::quadrotor_msgs::msg::QpPlannerGoal::_max_v_type arg)
  {
    msg_.max_v = std::move(arg);
    return Init_QpPlannerGoal_future_point(msg_);
  }

private:
  ::quadrotor_msgs::msg::QpPlannerGoal msg_;
};

class Init_QpPlannerGoal_max_a
{
public:
  explicit Init_QpPlannerGoal_max_a(::quadrotor_msgs::msg::QpPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_QpPlannerGoal_max_v max_a(::quadrotor_msgs::msg::QpPlannerGoal::_max_a_type arg)
  {
    msg_.max_a = std::move(arg);
    return Init_QpPlannerGoal_max_v(msg_);
  }

private:
  ::quadrotor_msgs::msg::QpPlannerGoal msg_;
};

class Init_QpPlannerGoal_perching
{
public:
  explicit Init_QpPlannerGoal_perching(::quadrotor_msgs::msg::QpPlannerGoal & msg)
  : msg_(msg)
  {}
  Init_QpPlannerGoal_max_a perching(::quadrotor_msgs::msg::QpPlannerGoal::_perching_type arg)
  {
    msg_.perching = std::move(arg);
    return Init_QpPlannerGoal_max_a(msg_);
  }

private:
  ::quadrotor_msgs::msg::QpPlannerGoal msg_;
};

class Init_QpPlannerGoal_bern_enable
{
public:
  Init_QpPlannerGoal_bern_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QpPlannerGoal_perching bern_enable(::quadrotor_msgs::msg::QpPlannerGoal::_bern_enable_type arg)
  {
    msg_.bern_enable = std::move(arg);
    return Init_QpPlannerGoal_perching(msg_);
  }

private:
  ::quadrotor_msgs::msg::QpPlannerGoal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quadrotor_msgs::msg::QpPlannerGoal>()
{
  return quadrotor_msgs::msg::builder::Init_QpPlannerGoal_bern_enable();
}

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__BUILDER_HPP_
