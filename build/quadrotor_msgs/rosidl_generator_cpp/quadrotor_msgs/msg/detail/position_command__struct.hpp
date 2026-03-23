// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/PositionCommand.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__POSITION_COMMAND__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__POSITION_COMMAND__STRUCT_HPP_

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
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'points'
#include "quadrotor_msgs/msg/detail/trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__PositionCommand __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__PositionCommand __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionCommand_
{
  using Type = PositionCommand_<ContainerAllocator>;

  explicit PositionCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    velocity(_init),
    acceleration(_init),
    jerk(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->yaw_dot = 0.0;
      this->planner_type = 0l;
    }
  }

  explicit PositionCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    velocity(_alloc, _init),
    acceleration(_alloc, _init),
    jerk(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->yaw_dot = 0.0;
      this->planner_type = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _jerk_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _jerk_type jerk;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _yaw_dot_type =
    double;
  _yaw_dot_type yaw_dot;
  using _points_type =
    std::vector<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator>>>;
  _points_type points;
  using _planner_type_type =
    int32_t;
  _planner_type_type planner_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__jerk(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->jerk = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__yaw_dot(
    const double & _arg)
  {
    this->yaw_dot = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__planner_type(
    const int32_t & _arg)
  {
    this->planner_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t PAYLOAD_PLANNER =
    1;
  static constexpr int32_t QUAD_PLANNER =
    2;

  // pointer types
  using RawPtr =
    quadrotor_msgs::msg::PositionCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::PositionCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::PositionCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::PositionCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::PositionCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::PositionCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::PositionCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::PositionCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::PositionCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::PositionCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__PositionCommand
    std::shared_ptr<quadrotor_msgs::msg::PositionCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__PositionCommand
    std::shared_ptr<quadrotor_msgs::msg::PositionCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->jerk != other.jerk) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->yaw_dot != other.yaw_dot) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->planner_type != other.planner_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionCommand_

// alias to use template instance with default allocator
using PositionCommand =
  quadrotor_msgs::msg::PositionCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PositionCommand_<ContainerAllocator>::PAYLOAD_PLANNER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t PositionCommand_<ContainerAllocator>::QUAD_PLANNER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__POSITION_COMMAND__STRUCT_HPP_
