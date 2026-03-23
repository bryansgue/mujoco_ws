// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/BetaFlightStates.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__STRUCT_HPP_

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
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'linear_acceleration_filtered'
// Member 'angular_acceleration_filtered'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__BetaFlightStates __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__BetaFlightStates __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BetaFlightStates_
{
  using Type = BetaFlightStates_<ContainerAllocator>;

  explicit BetaFlightStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    linear_acceleration(_init),
    angular_velocity(_init),
    quaternion(_init),
    linear_acceleration_filtered(_init),
    angular_acceleration_filtered(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->motor.begin(), this->motor.end(), 0.0);
    }
  }

  explicit BetaFlightStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    linear_acceleration(_alloc, _init),
    angular_velocity(_alloc, _init),
    quaternion(_alloc, _init),
    linear_acceleration_filtered(_alloc, _init),
    angular_acceleration_filtered(_alloc, _init),
    motor(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->motor.begin(), this->motor.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _linear_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _quaternion_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _quaternion_type quaternion;
  using _linear_acceleration_filtered_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_filtered_type linear_acceleration_filtered;
  using _angular_acceleration_filtered_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_acceleration_filtered_type angular_acceleration_filtered;
  using _motor_type =
    std::array<double, 4>;
  _motor_type motor;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__quaternion(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->quaternion = _arg;
    return *this;
  }
  Type & set__linear_acceleration_filtered(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration_filtered = _arg;
    return *this;
  }
  Type & set__angular_acceleration_filtered(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_acceleration_filtered = _arg;
    return *this;
  }
  Type & set__motor(
    const std::array<double, 4> & _arg)
  {
    this->motor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__BetaFlightStates
    std::shared_ptr<quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__BetaFlightStates
    std::shared_ptr<quadrotor_msgs::msg::BetaFlightStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BetaFlightStates_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->quaternion != other.quaternion) {
      return false;
    }
    if (this->linear_acceleration_filtered != other.linear_acceleration_filtered) {
      return false;
    }
    if (this->angular_acceleration_filtered != other.angular_acceleration_filtered) {
      return false;
    }
    if (this->motor != other.motor) {
      return false;
    }
    return true;
  }
  bool operator!=(const BetaFlightStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BetaFlightStates_

// alias to use template instance with default allocator
using BetaFlightStates =
  quadrotor_msgs::msg::BetaFlightStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_STATES__STRUCT_HPP_
