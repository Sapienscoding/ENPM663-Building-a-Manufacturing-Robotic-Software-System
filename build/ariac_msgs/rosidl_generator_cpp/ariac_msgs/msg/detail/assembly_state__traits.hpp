// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/AssemblyState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__TRAITS_HPP_

#include "ariac_msgs/msg/detail/assembly_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::AssemblyState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_attached: ";
    value_to_yaml(msg.battery_attached, out);
    out << "\n";
  }

  // member: pump_attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pump_attached: ";
    value_to_yaml(msg.pump_attached, out);
    out << "\n";
  }

  // member: regulator_attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "regulator_attached: ";
    value_to_yaml(msg.regulator_attached, out);
    out << "\n";
  }

  // member: sensor_attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_attached: ";
    value_to_yaml(msg.sensor_attached, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::AssemblyState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::AssemblyState>()
{
  return "ariac_msgs::msg::AssemblyState";
}

template<>
inline const char * name<ariac_msgs::msg::AssemblyState>()
{
  return "ariac_msgs/msg/AssemblyState";
}

template<>
struct has_fixed_size<ariac_msgs::msg::AssemblyState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::msg::AssemblyState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::msg::AssemblyState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__TRAITS_HPP_
