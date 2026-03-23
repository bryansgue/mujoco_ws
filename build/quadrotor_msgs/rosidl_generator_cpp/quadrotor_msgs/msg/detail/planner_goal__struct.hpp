// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:msg/PlannerGoal.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__STRUCT_HPP_
#define QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__STRUCT_HPP_

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
// Member 'init_cond'
#include "nav_msgs/msg/detail/odometry__struct.hpp"
// Member 'line_planner_goal'
#include "quadrotor_msgs/msg/detail/line_planner_goal__struct.hpp"
// Member 'circle_planner_goal'
#include "quadrotor_msgs/msg/detail/circle_planner_goal__struct.hpp"
// Member 'lissajous_planner_goal'
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__struct.hpp"
// Member 'velocity_planner_goal'
#include "quadrotor_msgs/msg/detail/velocity_planner_goal__struct.hpp"
// Member 'qp_planner_goal'
#include "quadrotor_msgs/msg/detail/qp_planner_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__msg__PlannerGoal __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__msg__PlannerGoal __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlannerGoal_
{
  using Type = PlannerGoal_<ContainerAllocator>;

  explicit PlannerGoal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    init_cond(_init),
    line_planner_goal(_init),
    circle_planner_goal(_init),
    lissajous_planner_goal(_init),
    velocity_planner_goal(_init),
    qp_planner_goal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->des_tracker = "";
    }
  }

  explicit PlannerGoal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    des_tracker(_alloc),
    init_cond(_alloc, _init),
    line_planner_goal(_alloc, _init),
    circle_planner_goal(_alloc, _init),
    lissajous_planner_goal(_alloc, _init),
    velocity_planner_goal(_alloc, _init),
    qp_planner_goal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->des_tracker = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _des_tracker_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _des_tracker_type des_tracker;
  using _init_cond_type =
    nav_msgs::msg::Odometry_<ContainerAllocator>;
  _init_cond_type init_cond;
  using _line_planner_goal_type =
    quadrotor_msgs::msg::LinePlannerGoal_<ContainerAllocator>;
  _line_planner_goal_type line_planner_goal;
  using _circle_planner_goal_type =
    quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator>;
  _circle_planner_goal_type circle_planner_goal;
  using _lissajous_planner_goal_type =
    quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator>;
  _lissajous_planner_goal_type lissajous_planner_goal;
  using _velocity_planner_goal_type =
    quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator>;
  _velocity_planner_goal_type velocity_planner_goal;
  using _qp_planner_goal_type =
    quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator>;
  _qp_planner_goal_type qp_planner_goal;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__des_tracker(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->des_tracker = _arg;
    return *this;
  }
  Type & set__init_cond(
    const nav_msgs::msg::Odometry_<ContainerAllocator> & _arg)
  {
    this->init_cond = _arg;
    return *this;
  }
  Type & set__line_planner_goal(
    const quadrotor_msgs::msg::LinePlannerGoal_<ContainerAllocator> & _arg)
  {
    this->line_planner_goal = _arg;
    return *this;
  }
  Type & set__circle_planner_goal(
    const quadrotor_msgs::msg::CirclePlannerGoal_<ContainerAllocator> & _arg)
  {
    this->circle_planner_goal = _arg;
    return *this;
  }
  Type & set__lissajous_planner_goal(
    const quadrotor_msgs::msg::LissaPlannerGoal_<ContainerAllocator> & _arg)
  {
    this->lissajous_planner_goal = _arg;
    return *this;
  }
  Type & set__velocity_planner_goal(
    const quadrotor_msgs::msg::VelocityPlannerGoal_<ContainerAllocator> & _arg)
  {
    this->velocity_planner_goal = _arg;
    return *this;
  }
  Type & set__qp_planner_goal(
    const quadrotor_msgs::msg::QpPlannerGoal_<ContainerAllocator> & _arg)
  {
    this->qp_planner_goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__msg__PlannerGoal
    std::shared_ptr<quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__msg__PlannerGoal
    std::shared_ptr<quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlannerGoal_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->des_tracker != other.des_tracker) {
      return false;
    }
    if (this->init_cond != other.init_cond) {
      return false;
    }
    if (this->line_planner_goal != other.line_planner_goal) {
      return false;
    }
    if (this->circle_planner_goal != other.circle_planner_goal) {
      return false;
    }
    if (this->lissajous_planner_goal != other.lissajous_planner_goal) {
      return false;
    }
    if (this->velocity_planner_goal != other.velocity_planner_goal) {
      return false;
    }
    if (this->qp_planner_goal != other.qp_planner_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlannerGoal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlannerGoal_

// alias to use template instance with default allocator
using PlannerGoal =
  quadrotor_msgs::msg::PlannerGoal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__MSG__DETAIL__PLANNER_GOAL__STRUCT_HPP_
