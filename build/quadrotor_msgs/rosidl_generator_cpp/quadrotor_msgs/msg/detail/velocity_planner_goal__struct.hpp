// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/VelocityPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__VelocityPlannerGoal __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__VelocityPlannerGoal __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityPlannerGoal_
{
  using Type = VelocityPlannerGoal_<ContainerAllocator>;

  explicit VelocityPlannerGoal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->vyaw = 0.0;
      this->use_position_gains = false;
    }
  }

  explicit VelocityPlannerGoal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->vyaw = 0.0;
      this->use_position_gains = false;
    }
  }

  // field types and members
  using _vx_type =
    double;
  _vx_type vx;
  using _vy_type =
    double;
  _vy_type vy;
  using _vz_type =
    double;
  _vz_type vz;
  using _vyaw_type =
    double;
  _vyaw_type vyaw;
  using _use_position_gains_type =
    bool;
  _use_position_gains_type use_position_gains;

  // setters for named parameter idiom
  Type & set__vx(
    const double & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const double & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const double & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__vyaw(
    const double & _arg)
  {
    this->vyaw = _arg;
    return *this;
  }
  Type & set__use_position_gains(
    const bool & _arg)
  {
    this->use_position_gains = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__VelocityPlannerGoal
    std::shared_ptr<quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__VelocityPlannerGoal
    std::shared_ptr<quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityPlannerGoal_ & other) const
  {
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->vyaw != other.vyaw) {
      return false;
    }
    if (this->use_position_gains != other.use_position_gains) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityPlannerGoal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityPlannerGoal_

// alias to use template instance with default allocator
using VelocityPlannerGoal =
  quadrotor_msgs::msg::VelocityPlannerGoal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__VELOCITY_PLANNER_GOAL__STRUCT_HPP_
