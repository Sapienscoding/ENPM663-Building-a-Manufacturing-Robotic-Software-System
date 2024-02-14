// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:srv/GetPreAssemblyPoses.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__GET_PRE_ASSEMBLY_POSES__TRAITS_HPP_
#define ARIAC_MSGS__SRV__DETAIL__GET_PRE_ASSEMBLY_POSES__TRAITS_HPP_

#include "ariac_msgs/srv/detail/get_pre_assembly_poses__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::srv::GetPreAssemblyPoses_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: order_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order_id: ";
    value_to_yaml(msg.order_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::srv::GetPreAssemblyPoses_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::srv::GetPreAssemblyPoses_Request>()
{
  return "ariac_msgs::srv::GetPreAssemblyPoses_Request";
}

template<>
inline const char * name<ariac_msgs::srv::GetPreAssemblyPoses_Request>()
{
  return "ariac_msgs/srv/GetPreAssemblyPoses_Request";
}

template<>
struct has_fixed_size<ariac_msgs::srv::GetPreAssemblyPoses_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::srv::GetPreAssemblyPoses_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::srv::GetPreAssemblyPoses_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/part_pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::srv::GetPreAssemblyPoses_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: valid_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_id: ";
    value_to_yaml(msg.valid_id, out);
    out << "\n";
  }

  // member: agv_at_station
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agv_at_station: ";
    value_to_yaml(msg.agv_at_station, out);
    out << "\n";
  }

  // member: parts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parts.size() == 0) {
      out << "parts: []\n";
    } else {
      out << "parts:\n";
      for (auto item : msg.parts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::srv::GetPreAssemblyPoses_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::srv::GetPreAssemblyPoses_Response>()
{
  return "ariac_msgs::srv::GetPreAssemblyPoses_Response";
}

template<>
inline const char * name<ariac_msgs::srv::GetPreAssemblyPoses_Response>()
{
  return "ariac_msgs/srv/GetPreAssemblyPoses_Response";
}

template<>
struct has_fixed_size<ariac_msgs::srv::GetPreAssemblyPoses_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::srv::GetPreAssemblyPoses_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::srv::GetPreAssemblyPoses_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ariac_msgs::srv::GetPreAssemblyPoses>()
{
  return "ariac_msgs::srv::GetPreAssemblyPoses";
}

template<>
inline const char * name<ariac_msgs::srv::GetPreAssemblyPoses>()
{
  return "ariac_msgs/srv/GetPreAssemblyPoses";
}

template<>
struct has_fixed_size<ariac_msgs::srv::GetPreAssemblyPoses>
  : std::integral_constant<
    bool,
    has_fixed_size<ariac_msgs::srv::GetPreAssemblyPoses_Request>::value &&
    has_fixed_size<ariac_msgs::srv::GetPreAssemblyPoses_Response>::value
  >
{
};

template<>
struct has_bounded_size<ariac_msgs::srv::GetPreAssemblyPoses>
  : std::integral_constant<
    bool,
    has_bounded_size<ariac_msgs::srv::GetPreAssemblyPoses_Request>::value &&
    has_bounded_size<ariac_msgs::srv::GetPreAssemblyPoses_Response>::value
  >
{
};

template<>
struct is_service<ariac_msgs::srv::GetPreAssemblyPoses>
  : std::true_type
{
};

template<>
struct is_service_request<ariac_msgs::srv::GetPreAssemblyPoses_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ariac_msgs::srv::GetPreAssemblyPoses_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__SRV__DETAIL__GET_PRE_ASSEMBLY_POSES__TRAITS_HPP_
