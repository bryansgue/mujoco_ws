// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/LissaPlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__LissaPlannerGoal __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__LissaPlannerGoal __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LissaPlannerGoal_
{
  using Type = LissaPlannerGoal_<ContainerAllocator>;

  explicit LissaPlannerGoal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_amp = 0.0;
      this->y_amp = 0.0;
      this->z_amp = 0.0;
      this->yaw_amp = 0.0;
      this->x_num_periods = 0.0;
      this->y_num_periods = 0.0;
      this->z_num_periods = 0.0;
      this->yaw_num_periods = 0.0;
      this->period = 0.0;
      this->num_cycles = 0.0;
      this->ramp_time = 0.0;
    }
  }

  explicit LissaPlannerGoal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_amp = 0.0;
      this->y_amp = 0.0;
      this->z_amp = 0.0;
      this->yaw_amp = 0.0;
      this->x_num_periods = 0.0;
      this->y_num_periods = 0.0;
      this->z_num_periods = 0.0;
      this->yaw_num_periods = 0.0;
      this->period = 0.0;
      this->num_cycles = 0.0;
      this->ramp_time = 0.0;
    }
  }

  // field types and members
  using _x_amp_type =
    double;
  _x_amp_type x_amp;
  using _y_amp_type =
    double;
  _y_amp_type y_amp;
  using _z_amp_type =
    double;
  _z_amp_type z_amp;
  using _yaw_amp_type =
    double;
  _yaw_amp_type yaw_amp;
  using _x_num_periods_type =
    double;
  _x_num_periods_type x_num_periods;
  using _y_num_periods_type =
    double;
  _y_num_periods_type y_num_periods;
  using _z_num_periods_type =
    double;
  _z_num_periods_type z_num_periods;
  using _yaw_num_periods_type =
    double;
  _yaw_num_periods_type yaw_num_periods;
  using _period_type =
    double;
  _period_type period;
  using _num_cycles_type =
    double;
  _num_cycles_type num_cycles;
  using _ramp_time_type =
    double;
  _ramp_time_type ramp_time;

  // setters for named parameter idiom
  Type & set__x_amp(
    const double & _arg)
  {
    this->x_amp = _arg;
    return *this;
  }
  Type & set__y_amp(
    const double & _arg)
  {
    this->y_amp = _arg;
    return *this;
  }
  Type & set__z_amp(
    const double & _arg)
  {
    this->z_amp = _arg;
    return *this;
  }
  Type & set__yaw_amp(
    const double & _arg)
  {
    this->yaw_amp = _arg;
    return *this;
  }
  Type & set__x_num_periods(
    const double & _arg)
  {
    this->x_num_periods = _arg;
    return *this;
  }
  Type & set__y_num_periods(
    const double & _arg)
  {
    this->y_num_periods = _arg;
    return *this;
  }
  Type & set__z_num_periods(
    const double & _arg)
  {
    this->z_num_periods = _arg;
    return *this;
  }
  Type & set__yaw_num_periods(
    const double & _arg)
  {
    this->yaw_num_periods = _arg;
    return *this;
  }
  Type & set__period(
    const double & _arg)
  {
    this->period = _arg;
    return *this;
  }
  Type & set__num_cycles(
    const double & _arg)
  {
    this->num_cycles = _arg;
    return *this;
  }
  Type & set__ramp_time(
    const double & _arg)
  {
    this->ramp_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__LissaPlannerGoal
    std::shared_ptr<quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__LissaPlannerGoal
    std::shared_ptr<quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LissaPlannerGoal_ & other) const
  {
    if (this->x_amp != other.x_amp) {
      return false;
    }
    if (this->y_amp != other.y_amp) {
      return false;
    }
    if (this->z_amp != other.z_amp) {
      return false;
    }
    if (this->yaw_amp != other.yaw_amp) {
      return false;
    }
    if (this->x_num_periods != other.x_num_periods) {
      return false;
    }
    if (this->y_num_periods != other.y_num_periods) {
      return false;
    }
    if (this->z_num_periods != other.z_num_periods) {
      return false;
    }
    if (this->yaw_num_periods != other.yaw_num_periods) {
      return false;
    }
    if (this->period != other.period) {
      return false;
    }
    if (this->num_cycles != other.num_cycles) {
      return false;
    }
    if (this->ramp_time != other.ramp_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const LissaPlannerGoal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LissaPlannerGoal_

// alias to use template instance with default allocator
using LissaPlannerGoal =
  quadrotor_msgs::msg::LissaPlannerGoal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__LISSA_PLANNER_GOAL__STRUCT_HPP_
