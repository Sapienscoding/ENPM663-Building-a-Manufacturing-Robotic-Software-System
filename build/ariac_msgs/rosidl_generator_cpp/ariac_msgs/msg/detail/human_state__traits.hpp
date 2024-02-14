// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/HumanState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__TRAITS_HPP_

#include "ariac_msgs/msg/detail/human_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'human_position'
// Member 'robot_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'human_velocity'
// Member 'robot_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::HumanState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: human_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "human_position:\n";
    to_yaml(msg.human_position, out, indentation + 2);
  }

  // member: robot_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_position:\n";
    to_yaml(msg.robot_position, out, indentation + 2);
  }

  // member: human_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "human_velocity:\n";
    to_yaml(msg.human_velocity, out, indentation + 2);
  }

  // member: robot_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_velocity:\n";
    to_yaml(msg.robot_velocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::HumanState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::HumanState>()
{
  return "ariac_msgs::msg::HumanState";
}

template<>
inline const char * name<ariac_msgs::msg::HumanState>()
{
  return "ariac_msgs/msg/HumanState";
}

template<>
struct has_fixed_size<ariac_msgs::msg::HumanState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<ariac_msgs::msg::HumanState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<ariac_msgs::msg::HumanState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__TRAITS_HPP_
