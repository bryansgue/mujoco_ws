// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/PWMCommand.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__PWM_COMMAND__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__PWM_COMMAND__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__PWMCommand __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__PWMCommand __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PWMCommand_
{
  using Type = PWMCommand_<ContainerAllocator>;

  explicit PWMCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 2>::iterator, double>(this->pwm.begin(), this->pwm.end(), 0.0);
    }
  }

  explicit PWMCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pwm(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 2>::iterator, double>(this->pwm.begin(), this->pwm.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pwm_type =
    std::array<double, 2>;
  _pwm_type pwm;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pwm(
    const std::array<double, 2> & _arg)
  {
    this->pwm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadrotor_msgs::msg::PWMCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::PWMCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::PWMCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::PWMCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::PWMCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::PWMCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::PWMCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::PWMCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::PWMCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::PWMCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__PWMCommand
    std::shared_ptr<quadrotor_msgs::msg::PWMCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__PWMCommand
    std::shared_ptr<quadrotor_msgs::msg::PWMCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PWMCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pwm != other.pwm) {
      return false;
    }
    return true;
  }
  bool operator!=(const PWMCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PWMCommand_

// alias to use template instance with default allocator
using PWMCommand =
  quadrotor_msgs::msg::PWMCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__PWM_COMMAND__STRUCT_HPP_
