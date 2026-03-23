// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
// Member 'position_quad'
// Member 'velocity_quad'
// Member 'acceleration_quad'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'velocity'
// Member 'acceleration'
// Member 'jerk'
// Member 'snap'
// Member 'angular_velocity'
// Member 'angular_velocity_dot'
// Member 'moments'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__TrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__TrajectoryPoint __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryPoint_
{
  using Type = TrajectoryPoint_<ContainerAllocator>;

  explicit TrajectoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    velocity(_init),
    acceleration(_init),
    jerk(_init),
    snap(_init),
    quaternion(_init),
    angular_velocity(_init),
    angular_velocity_dot(_init),
    moments(_init),
    position_quad(_init),
    velocity_quad(_init),
    acceleration_quad(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force = 0.0;
      std::fill<typename std::array<int64_t, 4>::iterator, int64_t>(this->rpm.begin(), this->rpm.end(), 0ll);
      std::fill<typename std::array<double, 4>::iterator, double>(this->forces.begin(), this->forces.end(), 0.0);
    }
  }

  explicit TrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    velocity(_alloc, _init),
    acceleration(_alloc, _init),
    jerk(_alloc, _init),
    snap(_alloc, _init),
    quaternion(_alloc, _init),
    rpm(_alloc),
    forces(_alloc),
    angular_velocity(_alloc, _init),
    angular_velocity_dot(_alloc, _init),
    moments(_alloc, _init),
    position_quad(_alloc, _init),
    velocity_quad(_alloc, _init),
    acceleration_quad(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force = 0.0;
      std::fill<typename std::array<int64_t, 4>::iterator, int64_t>(this->rpm.begin(), this->rpm.end(), 0ll);
      std::fill<typename std::array<double, 4>::iterator, double>(this->forces.begin(), this->forces.end(), 0.0);
    }
  }

  // field types and members
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
  using _snap_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _snap_type snap;
  using _quaternion_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _quaternion_type quaternion;
  using _force_type =
    double;
  _force_type force;
  using _rpm_type =
    std::array<int64_t, 4>;
  _rpm_type rpm;
  using _forces_type =
    std::array<double, 4>;
  _forces_type forces;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _angular_velocity_dot_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_dot_type angular_velocity_dot;
  using _moments_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _moments_type moments;
  using _position_quad_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_quad_type position_quad;
  using _velocity_quad_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _velocity_quad_type velocity_quad;
  using _acceleration_quad_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _acceleration_quad_type acceleration_quad;

  // setters for named parameter idiom
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
  Type & set__snap(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->snap = _arg;
    return *this;
  }
  Type & set__quaternion(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->quaternion = _arg;
    return *this;
  }
  Type & set__force(
    const double & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__rpm(
    const std::array<int64_t, 4> & _arg)
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
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity_dot(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity_dot = _arg;
    return *this;
  }
  Type & set__moments(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->moments = _arg;
    return *this;
  }
  Type & set__position_quad(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position_quad = _arg;
    return *this;
  }
  Type & set__velocity_quad(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->velocity_quad = _arg;
    return *this;
  }
  Type & set__acceleration_quad(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->acceleration_quad = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__TrajectoryPoint
    std::shared_ptr<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__TrajectoryPoint
    std::shared_ptr<quadrotor_msgs::msg::TrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryPoint_ & other) const
  {
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
    if (this->snap != other.snap) {
      return false;
    }
    if (this->quaternion != other.quaternion) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    if (this->rpm != other.rpm) {
      return false;
    }
    if (this->forces != other.forces) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->angular_velocity_dot != other.angular_velocity_dot) {
      return false;
    }
    if (this->moments != other.moments) {
      return false;
    }
    if (this->position_quad != other.position_quad) {
      return false;
    }
    if (this->velocity_quad != other.velocity_quad) {
      return false;
    }
    if (this->acceleration_quad != other.acceleration_quad) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryPoint_

// alias to use template instance with default allocator
using TrajectoryPoint =
  quadrotor_msgs::msg::TrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_HPP_
