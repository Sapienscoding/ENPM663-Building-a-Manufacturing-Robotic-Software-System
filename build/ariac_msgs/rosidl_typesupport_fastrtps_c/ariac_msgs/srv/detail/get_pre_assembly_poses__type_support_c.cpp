// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:srv/GetPreAssemblyPoses.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/srv/detail/get_pre_assembly_poses__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/srv/detail/get_pre_assembly_poses__struct.h"
#include "ariac_msgs/srv/detail/get_pre_assembly_poses__functions.h"
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

#include "rosidl_runtime_c/string.h"  // order_id
#include "rosidl_runtime_c/string_functions.h"  // order_id

// forward declare type support functions


using _GetPreAssemblyPoses_Request__ros_msg_type = ariac_msgs__srv__GetPreAssemblyPoses_Request;

static bool _GetPreAssemblyPoses_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetPreAssemblyPoses_Request__ros_msg_type * ros_message = static_cast<const _GetPreAssemblyPoses_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: order_id
  {
    const rosidl_runtime_c__String * str = &ros_message->order_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetPreAssemblyPoses_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetPreAssemblyPoses_Request__ros_msg_type * ros_message = static_cast<_GetPreAssemblyPoses_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: order_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->order_id.data) {
      rosidl_runtime_c__String__init(&ros_message->order_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->order_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'order_id'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__srv__GetPreAssemblyPoses_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPreAssemblyPoses_Request__ros_msg_type * ros_message = static_cast<const _GetPreAssemblyPoses_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name order_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->order_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetPreAssemblyPoses_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__srv__GetPreAssemblyPoses_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__srv__GetPreAssemblyPoses_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: order_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetPreAssemblyPoses_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__srv__GetPreAssemblyPoses_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetPreAssemblyPoses_Request = {
  "ariac_msgs::srv",
  "GetPreAssemblyPoses_Request",
  _GetPreAssemblyPoses_Request__cdr_serialize,
  _GetPreAssemblyPoses_Request__cdr_deserialize,
  _GetPreAssemblyPoses_Request__get_serialized_size,
  _GetPreAssemblyPoses_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetPreAssemblyPoses_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetPreAssemblyPoses_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, GetPreAssemblyPoses_Request)() {
  return &_GetPreAssemblyPoses_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ariac_msgs/srv/detail/get_pre_assembly_poses__struct.h"
// already included above
// #include "ariac_msgs/srv/detail/get_pre_assembly_poses__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "ariac_msgs/msg/detail/part_pose__functions.h"  // parts

// forward declare type support functions
size_t get_serialized_size_ariac_msgs__msg__PartPose(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__PartPose(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, PartPose)();


using _GetPreAssemblyPoses_Response__ros_msg_type = ariac_msgs__srv__GetPreAssemblyPoses_Response;

static bool _GetPreAssemblyPoses_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetPreAssemblyPoses_Response__ros_msg_type * ros_message = static_cast<const _GetPreAssemblyPoses_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: valid_id
  {
    cdr << (ros_message->valid_id ? true : false);
  }

  // Field name: agv_at_station
  {
    cdr << (ros_message->agv_at_station ? true : false);
  }

  // Field name: parts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, PartPose
      )()->data);
    size_t size = ros_message->parts.size;
    auto array_ptr = ros_message->parts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetPreAssemblyPoses_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetPreAssemblyPoses_Response__ros_msg_type * ros_message = static_cast<_GetPreAssemblyPoses_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: valid_id
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->valid_id = tmp ? true : false;
  }

  // Field name: agv_at_station
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->agv_at_station = tmp ? true : false;
  }

  // Field name: parts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, PartPose
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->parts.data) {
      ariac_msgs__msg__PartPose__Sequence__fini(&ros_message->parts);
    }
    if (!ariac_msgs__msg__PartPose__Sequence__init(&ros_message->parts, size)) {
      fprintf(stderr, "failed to create array for field 'parts'");
      return false;
    }
    auto array_ptr = ros_message->parts.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__srv__GetPreAssemblyPoses_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPreAssemblyPoses_Response__ros_msg_type * ros_message = static_cast<const _GetPreAssemblyPoses_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name valid_id
  {
    size_t item_size = sizeof(ros_message->valid_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name agv_at_station
  {
    size_t item_size = sizeof(ros_message->agv_at_station);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parts
  {
    size_t array_size = ros_message->parts.size;
    auto array_ptr = ros_message->parts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ariac_msgs__msg__PartPose(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetPreAssemblyPoses_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__srv__GetPreAssemblyPoses_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__srv__GetPreAssemblyPoses_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: valid_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: agv_at_station
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parts
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__PartPose(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetPreAssemblyPoses_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__srv__GetPreAssemblyPoses_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetPreAssemblyPoses_Response = {
  "ariac_msgs::srv",
  "GetPreAssemblyPoses_Response",
  _GetPreAssemblyPoses_Response__cdr_serialize,
  _GetPreAssemblyPoses_Response__cdr_deserialize,
  _GetPreAssemblyPoses_Response__get_serialized_size,
  _GetPreAssemblyPoses_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetPreAssemblyPoses_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetPreAssemblyPoses_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, GetPreAssemblyPoses_Response)() {
  return &_GetPreAssemblyPoses_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/srv/get_pre_assembly_poses.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetPreAssemblyPoses__callbacks = {
  "ariac_msgs::srv",
  "GetPreAssemblyPoses",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, GetPreAssemblyPoses_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, GetPreAssemblyPoses_Response)(),
};

static rosidl_service_type_support_t GetPreAssemblyPoses__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetPreAssemblyPoses__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, GetPreAssemblyPoses)() {
  return &GetPreAssemblyPoses__handle;
}

#if defined(__cplusplus)
}
#endif
