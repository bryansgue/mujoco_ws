// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/CirclePlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__CIRCLE_PLANNER_GOAL__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__CIRCLE_PLANNER_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__CirclePlannerGoal __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__CirclePlannerGoal __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CirclePlannerGoal_
{
  using Type = CirclePlannerGoal_<ContainerAllocator>;

  explicit CirclePlannerGoal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ax = 0.0;
      this->ay = 0.0;
      this->t = 0.0;
    }
  }

  explicit CirclePlannerGoal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ax = 0.0;
      this->ay = 0.0;
      this->t = 0.0;
    }
  }

  // field types and members
  using _ax_type =
    double;
  _ax_type ax;
  using _ay_type =
    double;
  _ay_type ay;
  using _t_type =
    double;
  _t_type t;
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__ax(
    const double & _arg)
  {
    this->ax = _arg;
    return *this;
  }
  Type & set__ay(
    const double & _arg)
  {
    this->ay = _arg;
    return *this;
  }
  Type & set__t(
    const double & _arg)
  {
    this->t = _arg;
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
    quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__CirclePlannerGoal
    std::shared_ptr<quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__CirclePlannerGoal
    std::shared_ptr<quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CirclePlannerGoal_ & other) const
  {
    if (this->ax != other.ax) {
      return false;
    }
    if (this->ay != other.ay) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const CirclePlannerGoal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CirclePlannerGoal_

// alias to use template instance with default allocator
using CirclePlannerGoal =
  quadrotor_msgs::msg::CirclePlannerGoal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__CIRCLE_PLANNER_GOAL__STRUCT_HPP_
