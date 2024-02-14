// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/HumanChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__HUMAN_CHALLENGE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__HUMAN_CHALLENGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'condition'
#include "ariac_msgs/msg/detail/condition__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__HumanChallenge __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__HumanChallenge __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanChallenge_
{
  using Type = HumanChallenge_<ContainerAllocator>;

  explicit HumanChallenge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : condition(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior = 0;
    }
  }

  explicit HumanChallenge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : condition(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior = 0;
    }
  }

  // field types and members
  using _behavior_type =
    uint8_t;
  _behavior_type behavior;
  using _condition_type =
    ariac_msgs::msg::Condition_<ContainerAllocator>;
  _condition_type condition;

  // setters for named parameter idiom
  Type & set__behavior(
    const uint8_t & _arg)
  {
    this->behavior = _arg;
    return *this;
  }
  Type & set__condition(
    const ariac_msgs::msg::Condition_<ContainerAllocator> & _arg)
  {
    this->condition = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ANTAGONISTIC =
    0u;
  static constexpr uint8_t INDIFFERENT =
    1u;
  static constexpr uint8_t HELPFUL =
    2u;

  // pointer types
  using RawPtr =
    ariac_msgs::msg::HumanChallenge_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::HumanChallenge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::HumanChallenge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::HumanChallenge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::HumanChallenge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::HumanChallenge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::HumanChallenge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::HumanChallenge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::HumanChallenge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::HumanChallenge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__HumanChallenge
    std::shared_ptr<ariac_msgs::msg::HumanChallenge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__HumanChallenge
    std::shared_ptr<ariac_msgs::msg::HumanChallenge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanChallenge_ & other) const
  {
    if (this->behavior != other.behavior) {
      return false;
    }
    if (this->condition != other.condition) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanChallenge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanChallenge_

// alias to use template instance with default allocator
using HumanChallenge =
  ariac_msgs::msg::HumanChallenge_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t HumanChallenge_<ContainerAllocator>::ANTAGONISTIC;
template<typename ContainerAllocator>
constexpr uint8_t HumanChallenge_<ContainerAllocator>::INDIFFERENT;
template<typename ContainerAllocator>
constexpr uint8_t HumanChallenge_<ContainerAllocator>::HELPFUL;

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__HUMAN_CHALLENGE__STRUCT_HPP_
