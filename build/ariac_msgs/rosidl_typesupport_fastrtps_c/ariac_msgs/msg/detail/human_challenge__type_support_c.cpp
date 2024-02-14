// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/HumanChallenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/human_challenge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/human_challenge__struct.h"
#include "ariac_msgs/msg/detail/human_challenge__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ariac_msgs/msg/detail/condition__functions.h"  // condition

// forward declare type support functions
size_t get_serialized_size_ariac_msgs__msg__Condition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__Condition(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Condition)();


using _HumanChallenge__ros_msg_type = ariac_msgs__msg__HumanChallenge;

static bool _HumanChallenge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HumanChallenge__ros_msg_type * ros_message = static_cast<const _HumanChallenge__ros_msg_type *>(untyped_ros_message);
  // Field name: behavior
  {
    cdr << ros_message->behavior;
  }

  // Field name: condition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Condition
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->condition, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _HumanChallenge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HumanChallenge__ros_msg_type * ros_message = static_cast<_HumanChallenge__ros_msg_type *>(untyped_ros_message);
  // Field name: behavior
  {
    cdr >> ros_message->behavior;
  }

  // Field name: condition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Condition
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->condition))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__HumanChallenge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HumanChallenge__ros_msg_type * ros_message = static_cast<const _HumanChallenge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name behavior
  {
    size_t item_size = sizeof(ros_message->behavior);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition

  current_alignment += get_serialized_size_ariac_msgs__msg__Condition(
    &(ros_message->condition), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _HumanChallenge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__HumanChallenge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__HumanChallenge(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: behavior
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__Condition(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _HumanChallenge__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__msg__HumanChallenge(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HumanChallenge = {
  "ariac_msgs::msg",
  "HumanChallenge",
  _HumanChallenge__cdr_serialize,
  _HumanChallenge__cdr_deserialize,
  _HumanChallenge__get_serialized_size,
  _HumanChallenge__max_serialized_size
};

static rosidl_message_type_support_t _HumanChallenge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HumanChallenge,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, HumanChallenge)() {
  return &_HumanChallenge__type_support;
}

#if defined(__cplusplus)
}
#endif
