// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/HumanState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/human_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanState_robot_velocity
{
public:
  explicit Init_HumanState_robot_velocity(::ariac_msgs::msg::HumanState & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::HumanState robot_velocity(::ariac_msgs::msg::HumanState::_robot_velocity_type arg)
  {
    msg_.robot_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::HumanState msg_;
};

class Init_HumanState_human_velocity
{
public:
  explicit Init_HumanState_human_velocity(::ariac_msgs::msg::HumanState & msg)
  : msg_(msg)
  {}
  Init_HumanState_robot_velocity human_velocity(::ariac_msgs::msg::HumanState::_human_velocity_type arg)
  {
    msg_.human_velocity = std::move(arg);
    return Init_HumanState_robot_velocity(msg_);
  }

private:
  ::ariac_msgs::msg::HumanState msg_;
};

class Init_HumanState_robot_position
{
public:
  explicit Init_HumanState_robot_position(::ariac_msgs::msg::HumanState & msg)
  : msg_(msg)
  {}
  Init_HumanState_human_velocity robot_position(::ariac_msgs::msg::HumanState::_robot_position_type arg)
  {
    msg_.robot_position = std::move(arg);
    return Init_HumanState_human_velocity(msg_);
  }

private:
  ::ariac_msgs::msg::HumanState msg_;
};

class Init_HumanState_human_position
{
public:
  Init_HumanState_human_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanState_robot_position human_position(::ariac_msgs::msg::HumanState::_human_position_type arg)
  {
    msg_.human_position = std::move(arg);
    return Init_HumanState_robot_position(msg_);
  }

private:
  ::ariac_msgs::msg::HumanState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::HumanState>()
{
  return ariac_msgs::msg::builder::Init_HumanState_human_position();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__BUILDER_HPP_
