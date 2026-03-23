// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/BetaFlightOnboardControl.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__STRUCT_HPP_

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
// Member 'angular_velocity_desired'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'quaternion_desired'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__BetaFlightOnboardControl __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__BetaFlightOnboardControl __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BetaFlightOnboardControl_
{
  using Type = BetaFlightOnboardControl_<ContainerAllocator>;

  explicit BetaFlightOnboardControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    angular_velocity_desired(_init),
    quaternion_desired(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->thrust_desired = 0.0;
      this->active_offboard = 0;
      this->active_attitude = 0;
      this->active_acro = 0;
    }
  }

  explicit BetaFlightOnboardControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    angular_velocity_desired(_alloc, _init),
    quaternion_desired(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->thrust_desired = 0.0;
      this->active_offboard = 0;
      this->active_attitude = 0;
      this->active_acro = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angular_velocity_desired_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_desired_type angular_velocity_desired;
  using _quaternion_desired_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _quaternion_desired_type quaternion_desired;
  using _thrust_desired_type =
    double;
  _thrust_desired_type thrust_desired;
  using _active_offboard_type =
    uint8_t;
  _active_offboard_type active_offboard;
  using _active_attitude_type =
    uint8_t;
  _active_attitude_type active_attitude;
  using _active_acro_type =
    uint8_t;
  _active_acro_type active_acro;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angular_velocity_desired(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity_desired = _arg;
    return *this;
  }
  Type & set__quaternion_desired(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->quaternion_desired = _arg;
    return *this;
  }
  Type & set__thrust_desired(
    const double & _arg)
  {
    this->thrust_desired = _arg;
    return *this;
  }
  Type & set__active_offboard(
    const uint8_t & _arg)
  {
    this->active_offboard = _arg;
    return *this;
  }
  Type & set__active_attitude(
    const uint8_t & _arg)
  {
    this->active_attitude = _arg;
    return *this;
  }
  Type & set__active_acro(
    const uint8_t & _arg)
  {
    this->active_acro = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__BetaFlightOnboardControl
    std::shared_ptr<quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__BetaFlightOnboardControl
    std::shared_ptr<quadrotor_msgs::msg::BetaFlightOnboardControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BetaFlightOnboardControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angular_velocity_desired != other.angular_velocity_desired) {
      return false;
    }
    if (this->quaternion_desired != other.quaternion_desired) {
      return false;
    }
    if (this->thrust_desired != other.thrust_desired) {
      return false;
    }
    if (this->active_offboard != other.active_offboard) {
      return false;
    }
    if (this->active_attitude != other.active_attitude) {
      return false;
    }
    if (this->active_acro != other.active_acro) {
      return false;
    }
    return true;
  }
  bool operator!=(const BetaFlightOnboardControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BetaFlightOnboardControl_

// alias to use template instance with default allocator
using BetaFlightOnboardControl =
  quadrotor_msgs::msg::BetaFlightOnboardControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__BETA_FLIGHT_ONBOARD_CONTROL__STRUCT_HPP_
