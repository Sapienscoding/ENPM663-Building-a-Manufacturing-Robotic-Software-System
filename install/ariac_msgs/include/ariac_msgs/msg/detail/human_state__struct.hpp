// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/HumanState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'human_position'
// Member 'robot_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'human_velocity'
// Member 'robot_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__HumanState __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__HumanState __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanState_
{
  using Type = HumanState_<ContainerAllocator>;

  explicit HumanState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : human_position(_init),
    robot_position(_init),
    human_velocity(_init),
    robot_velocity(_init)
  {
    (void)_init;
  }

  explicit HumanState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : human_position(_alloc, _init),
    robot_position(_alloc, _init),
    human_velocity(_alloc, _init),
    robot_velocity(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _human_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _human_position_type human_position;
  using _robot_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _robot_position_type robot_position;
  using _human_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _human_velocity_type human_velocity;
  using _robot_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _robot_velocity_type robot_velocity;

  // setters for named parameter idiom
  Type & set__human_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->human_position = _arg;
    return *this;
  }
  Type & set__robot_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->robot_position = _arg;
    return *this;
  }
  Type & set__human_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->human_velocity = _arg;
    return *this;
  }
  Type & set__robot_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->robot_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::HumanState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::HumanState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::HumanState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::HumanState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::HumanState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::HumanState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::HumanState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::HumanState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::HumanState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::HumanState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__HumanState
    std::shared_ptr<ariac_msgs::msg::HumanState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__HumanState
    std::shared_ptr<ariac_msgs::msg::HumanState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanState_ & other) const
  {
    if (this->human_position != other.human_position) {
      return false;
    }
    if (this->robot_position != other.robot_position) {
      return false;
    }
    if (this->human_velocity != other.human_velocity) {
      return false;
    }
    if (this->robot_velocity != other.robot_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanState_

// alias to use template instance with default allocator
using HumanState =
  ariac_msgs::msg::HumanState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__STRUCT_HPP_
