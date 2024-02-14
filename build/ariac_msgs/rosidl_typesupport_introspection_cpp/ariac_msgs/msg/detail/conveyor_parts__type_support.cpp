// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/ConveyorParts.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ariac_msgs/msg/detail/conveyor_parts__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ariac_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ConveyorParts_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::msg::ConveyorParts(_init);
}

void ConveyorParts_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::msg::ConveyorParts *>(message_memory);
  typed_message->~ConveyorParts();
}

size_t size_function__ConveyorParts__parts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ariac_msgs::msg::PartLot> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConveyorParts__parts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ariac_msgs::msg::PartLot> *>(untyped_member);
  return &member[index];
}

void * get_function__ConveyorParts__parts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ariac_msgs::msg::PartLot> *>(untyped_member);
  return &member[index];
}

void resize_function__ConveyorParts__parts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ariac_msgs::msg::PartLot> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConveyorParts_message_member_array[1] = {
  {
    "parts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::msg::PartLot>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::msg::ConveyorParts, parts),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConveyorParts__parts,  // size() function pointer
    get_const_function__ConveyorParts__parts,  // get_const(index) function pointer
    get_function__ConveyorParts__parts,  // get(index) function pointer
    resize_function__ConveyorParts__parts  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConveyorParts_message_members = {
  "ariac_msgs::msg",  // message namespace
  "ConveyorParts",  // message name
  1,  // number of fields
  sizeof(ariac_msgs::msg::ConveyorParts),
  ConveyorParts_message_member_array,  // message members
  ConveyorParts_init_function,  // function to initialize message memory (memory has to be allocated)
  ConveyorParts_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConveyorParts_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConveyorParts_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::msg::ConveyorParts>()
{
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::ConveyorParts_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, msg, ConveyorParts)() {
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::ConveyorParts_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
