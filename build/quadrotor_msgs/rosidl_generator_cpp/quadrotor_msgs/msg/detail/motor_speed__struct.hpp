// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/MotorSpeed.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'aux'
#include "quadrotor_msgs/msg/detail/aux_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__MotorSpeed __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__MotorSpeed __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorSpeed_
{
  using Type = MotorSpeed_<ContainerAllocator>;

  explicit MotorSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    aux(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->rpm.begin(), this->rpm.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(this->forces.begin(), this->forces.end(), 0.0);
    }
  }

  explicit MotorSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rpm(_alloc),
    forces(_alloc),
    aux(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->rpm.begin(), this->rpm.end(), 0.0);
      std::fill<typename std::array<double, 4>::iterator, double>(this->forces.begin(), this->forces.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rpm_type =
    std::array<double, 4>;
  _rpm_type rpm;
  using _forces_type =
    std::array<double, 4>;
  _forces_type forces;
  using _aux_type =
    quadrotor_msgs::msg::AuxCommand_<ContainerAllocator>;
  _aux_type aux;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rpm(
    const std::array<double, 4> & _arg)
  {
    this->rpm = _arg;
    return *this;
  }
  Type & set__forces(
    const std::array<double, 4> & _arg)
  {
    this->forces = _arg;
    return *this;
  }
  Type & set__aux(
    const quadrotor_msgs::msg::AuxCommand_<ContainerAllocator> & _arg)
  {
    this->aux = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__MotorSpeed
    std::shared_ptr<quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__MotorSpeed
    std::shared_ptr<quadrotor_msgs::msg::MotorSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorSpeed_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rpm != other.rpm) {
      return false;
    }
    if (this->forces != other.forces) {
      return false;
    }
    if (this->aux != other.aux) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorSpeed_

// alias to use template instance with default allocator
using MotorSpeed =
  quadrotor_msgs::msg::MotorSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__MOTOR_SPEED__STRUCT_HPP_
