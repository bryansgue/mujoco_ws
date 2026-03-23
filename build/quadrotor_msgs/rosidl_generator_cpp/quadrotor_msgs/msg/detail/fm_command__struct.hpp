// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/FMCommand.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__FM_COMMAND__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__FM_COMMAND__STRUCT_HPP_

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
// Member 'moments'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'aux'
#include "quadrotor_msgs/msg/detail/aux_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__FMCommand __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__FMCommand __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FMCommand_
{
  using Type = FMCommand_<ContainerAllocator>;

  explicit FMCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    moments(_init),
    angular_velocity(_init),
    quaternion(_init),
    aux(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mpc_flag = false;
      this->thrust = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->kr.begin(), this->kr.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->kom.begin(), this->kom.end(), 0.0);
    }
  }

  explicit FMCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    moments(_alloc, _init),
    angular_velocity(_alloc, _init),
    quaternion(_alloc, _init),
    kr(_alloc),
    kom(_alloc),
    aux(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mpc_flag = false;
      this->thrust = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->kr.begin(), this->kr.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->kom.begin(), this->kom.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mpc_flag_type =
    bool;
  _mpc_flag_type mpc_flag;
  using _thrust_type =
    double;
  _thrust_type thrust;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _moments_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _moments_type moments;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _quaternion_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _quaternion_type quaternion;
  using _kr_type =
    std::array<double, 3>;
  _kr_type kr;
  using _kom_type =
    std::array<double, 3>;
  _kom_type kom;
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
  Type & set__mpc_flag(
    const bool & _arg)
  {
    this->mpc_flag = _arg;
    return *this;
  }
  Type & set__thrust(
    const double & _arg)
  {
    this->thrust = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__moments(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->moments = _arg;
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
  Type & set__kr(
    const std::array<double, 3> & _arg)
  {
    this->kr = _arg;
    return *this;
  }
  Type & set__kom(
    const std::array<double, 3> & _arg)
  {
    this->kom = _arg;
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
    quadrotor_msgs::msg::FMCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::FMCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::FMCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::FMCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::FMCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::FMCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::FMCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::FMCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::FMCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::FMCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__FMCommand
    std::shared_ptr<quadrotor_msgs::msg::FMCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__FMCommand
    std::shared_ptr<quadrotor_msgs::msg::FMCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FMCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mpc_flag != other.mpc_flag) {
      return false;
    }
    if (this->thrust != other.thrust) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->moments != other.moments) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->quaternion != other.quaternion) {
      return false;
    }
    if (this->kr != other.kr) {
      return false;
    }
    if (this->kom != other.kom) {
      return false;
    }
    if (this->aux != other.aux) {
      return false;
    }
    return true;
  }
  bool operator!=(const FMCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FMCommand_

// alias to use template instance with default allocator
using FMCommand =
  quadrotor_msgs::msg::FMCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__FM_COMMAND__STRUCT_HPP_
