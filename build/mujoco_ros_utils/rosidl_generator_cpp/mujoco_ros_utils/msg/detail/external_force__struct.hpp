// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mujoco_ros_utils:msg/ExternalForce.idl
// generated code does not contain a copyright notice

#ifndef MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_HPP_
#define MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_HPP_

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
// Member 'pos'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'force'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mujoco_ros_utils__msg__ExternalForce __attribute__((deprecated))
#else
# define DEPRECATED__mujoco_ros_utils__msg__ExternalForce __declspec(deprecated)
#endif

namespace mujoco_ros_utils
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExternalForce_
{
  using Type = ExternalForce_<ContainerAllocator>;

  explicit ExternalForce_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : duration(_init),
    pos(_init),
    force(_init)
  {
    (void)_init;
  }

  explicit ExternalForce_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : duration(_alloc, _init),
    pos(_alloc, _init),
    force(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _duration_type duration;
  using _pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _pos_type pos;
  using _force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _force_type force;

  // setters for named parameter idiom
  Type & set__duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator> *;
  using ConstRawPtr =
    const mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mujoco_ros_utils__msg__ExternalForce
    std::shared_ptr<mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mujoco_ros_utils__msg__ExternalForce
    std::shared_ptr<mujoco_ros_utils::msg::ExternalForce_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExternalForce_ & other) const
  {
    if (this->duration != other.duration) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExternalForce_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExternalForce_

// alias to use template instance with default allocator
using ExternalForce =
  mujoco_ros_utils::msg::ExternalForce_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mujoco_ros_utils

#endif  // MUJOCO_ROS_UTILS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_HPP_
