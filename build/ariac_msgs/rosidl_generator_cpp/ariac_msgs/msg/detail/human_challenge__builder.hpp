// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/HumanChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__HUMAN_CHALLENGE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__HUMAN_CHALLENGE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/human_challenge__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanChallenge_condition
{
public:
  explicit Init_HumanChallenge_condition(::ariac_msgs::msg::HumanChallenge & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::HumanChallenge condition(::ariac_msgs::msg::HumanChallenge::_condition_type arg)
  {
    msg_.condition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::HumanChallenge msg_;
};

class Init_HumanChallenge_behavior
{
public:
  Init_HumanChallenge_behavior()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanChallenge_condition behavior(::ariac_msgs::msg::HumanChallenge::_behavior_type arg)
  {
    msg_.behavior = std::move(arg);
    return Init_HumanChallenge_condition(msg_);
  }

private:
  ::ariac_msgs::msg::HumanChallenge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::HumanChallenge>()
{
  return ariac_msgs::msg::builder::Init_HumanChallenge_behavior();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__HUMAN_CHALLENGE__BUILDER_HPP_
