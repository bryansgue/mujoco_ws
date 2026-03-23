// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/RPMCommand.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__RPM_COMMAND__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__RPM_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__quadrotor_msgs__msg__RPMCommand __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__RPMCommand __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RPMCommand_
{
  using Type = RPMCommand_<ContainerAllocator>;

  explicit RPMCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    aux(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->rpms.begin(), this->rpms.end(), 0l);
      std::fill<typename std::array<double, 4>::iterator, double>(this->motors.begin(), this->motors.end(), 0.0);
    }
  }

  explicit RPMCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rpms(_alloc),
    motors(_alloc),
    aux(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 4>::iterator, int32_t>(this->rpms.begin(), this->rpms.end(), 0l);
      std::fill<typename std::array<double, 4>::iterator, double>(this->motors.begin(), this->motors.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rpms_type =
    std::array<int32_t, 4>;
  _rpms_type rpms;
  using _motors_type =
    std::array<double, 4>;
  _motors_type motors;
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
  Type & set__rpms(
    const std::array<int32_t, 4> & _arg)
  {
    this->rpms = _arg;
    return *this;
  }
  Type & set__motors(
    const std::array<double, 4> & _arg)
  {
    this->motors = _arg;
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
    quadrotor_msgs::msg::RPMCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::RPMCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::RPMCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::RPMCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::RPMCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::RPMCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::RPMCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::RPMCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::RPMCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::RPMCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__RPMCommand
    std::shared_ptr<quadrotor_msgs::msg::RPMCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__RPMCommand
    std::shared_ptr<quadrotor_msgs::msg::RPMCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RPMCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rpms != other.rpms) {
      return false;
    }
    if (this->motors != other.motors) {
      return false;
    }
    if (this->aux != other.aux) {
      return false;
    }
    return true;
  }
  bool operator!=(const RPMCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RPMCommand_

// alias to use template instance with default allocator
using RPMCommand =
  quadrotor_msgs::msg::RPMCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__RPM_COMMAND__STRUCT_HPP_
