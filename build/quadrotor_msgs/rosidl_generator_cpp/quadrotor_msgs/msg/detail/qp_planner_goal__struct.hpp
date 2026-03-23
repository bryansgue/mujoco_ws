// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/QpPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'future_point'
#include "nav_msgs/msg/detail/path__struct.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__QpPlannerGoal __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__QpPlannerGoal __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QpPlannerGoal_
{
  using Type = QpPlannerGoal_<ContainerAllocator>;

  explicit QpPlannerGoal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : future_point(_init),
    duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bern_enable = false;
      this->perching = false;
      this->max_a = 0.0;
      this->max_v = 0.0;
    }
  }

  explicit QpPlannerGoal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : future_point(_alloc, _init),
    duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bern_enable = false;
      this->perching = false;
      this->max_a = 0.0;
      this->max_v = 0.0;
    }
  }

  // field types and members
  using _bern_enable_type =
    bool;
  _bern_enable_type bern_enable;
  using _perching_type =
    bool;
  _perching_type perching;
  using _max_a_type =
    double;
  _max_a_type max_a;
  using _max_v_type =
    double;
  _max_v_type max_v;
  using _future_point_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _future_point_type future_point;
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__bern_enable(
    const bool & _arg)
  {
    this->bern_enable = _arg;
    return *this;
  }
  Type & set__perching(
    const bool & _arg)
  {
    this->perching = _arg;
    return *this;
  }
  Type & set__max_a(
    const double & _arg)
  {
    this->max_a = _arg;
    return *this;
  }
  Type & set__max_v(
    const double & _arg)
  {
    this->max_v = _arg;
    return *this;
  }
  Type & set__future_point(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->future_point = _arg;
    return *this;
  }
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__QpPlannerGoal
    std::shared_ptr<quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__QpPlannerGoal
    std::shared_ptr<quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QpPlannerGoal_ & other) const
  {
    if (this->bern_enable != other.bern_enable) {
      return false;
    }
    if (this->perching != other.perching) {
      return false;
    }
    if (this->max_a != other.max_a) {
      return false;
    }
    if (this->max_v != other.max_v) {
      return false;
    }
    if (this->future_point != other.future_point) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const QpPlannerGoal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QpPlannerGoal_

// alias to use template instance with default allocator
using QpPlannerGoal =
  quadrotor_msgs::msg::QpPlannerGoal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__QP_PLANNER_GOAL__STRUCT_HPP_
