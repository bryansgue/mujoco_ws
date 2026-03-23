// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quadrotor_msgs:srv/Transition.idl
// generated code does not contain a copyright notice

#ifndef QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__STRUCT_HPP_
#define QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'planner_goal'
#include "quadrotor_msgs/msg/detail/planner_goal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__srv__Transition_Request __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__srv__Transition_Request __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Transition_Request_
{
  using Type = Transition_Request_<ContainerAllocator>;

  explicit Transition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planner_goal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracker = "";
    }
  }

  explicit Transition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tracker(_alloc),
    planner_goal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracker = "";
    }
  }

  // field types and members
  using _tracker_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tracker_type tracker;
  using _planner_goal_type =
    quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator>;
  _planner_goal_type planner_goal;

  // setters for named parameter idiom
  Type & set__tracker(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tracker = _arg;
    return *this;
  }
  Type & set__planner_goal(
    const quadrotor_msgs::msg::PlannerGoal_<ContainerAllocator> & _arg)
  {
    this->planner_goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadrotor_msgs::srv::Transition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::srv::Transition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::srv::Transition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::srv::Transition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::srv::Transition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::srv::Transition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::srv::Transition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::srv::Transition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::srv::Transition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::srv::Transition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__srv__Transition_Request
    std::shared_ptr<quadrotor_msgs::srv::Transition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__srv__Transition_Request
    std::shared_ptr<quadrotor_msgs::srv::Transition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Transition_Request_ & other) const
  {
    if (this->tracker != other.tracker) {
      return false;
    }
    if (this->planner_goal != other.planner_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Transition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Transition_Request_

// alias to use template instance with default allocator
using Transition_Request =
  quadrotor_msgs::srv::Transition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace quadrotor_msgs


#ifndef _WIN32
# define DEPRECATED__quadrotor_msgs__srv__Transition_Response __attribute__((deprecated))
#else
# define DEPRECATED__quadrotor_msgs__srv__Transition_Response __declspec(deprecated)
#endif

namespace quadrotor_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Transition_Response_
{
  using Type = Transition_Response_<ContainerAllocator>;

  explicit Transition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Transition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quadrotor_msgs::srv::Transition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const quadrotor_msgs::srv::Transition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quadrotor_msgs::srv::Transition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quadrotor_msgs::srv::Transition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::srv::Transition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::srv::Transition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quadrotor_msgs::srv::Transition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quadrotor_msgs::srv::Transition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quadrotor_msgs::srv::Transition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quadrotor_msgs::srv::Transition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quadrotor_msgs__srv__Transition_Response
    std::shared_ptr<quadrotor_msgs::srv::Transition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quadrotor_msgs__srv__Transition_Response
    std::shared_ptr<quadrotor_msgs::srv::Transition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Transition_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Transition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Transition_Response_

// alias to use template instance with default allocator
using Transition_Response =
  quadrotor_msgs::srv::Transition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace quadrotor_msgs

namespace quadrotor_msgs
{

namespace srv
{

struct Transition
{
  using Request = quadrotor_msgs::srv::Transition_Request;
  using Response = quadrotor_msgs::srv::Transition_Response;
};

}  // namespace srv

}  // namespace quadrotor_msgs

#endif  // QUADROTOR_MSGS__SRV__DETAIL__TRANSITION__STRUCT_HPP_
