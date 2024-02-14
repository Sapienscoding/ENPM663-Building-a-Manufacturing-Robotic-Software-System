// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:srv/SubmitOrder.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__SUBMIT_ORDER__STRUCT_H_
#define ARIAC_MSGS__SRV__DETAIL__SUBMIT_ORDER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'order_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SubmitOrder in the package ariac_msgs.
typedef struct ariac_msgs__srv__SubmitOrder_Request
{
  rosidl_runtime_c__String order_id;
} ariac_msgs__srv__SubmitOrder_Request;

// Struct for a sequence of ariac_msgs__srv__SubmitOrder_Request.
typedef struct ariac_msgs__srv__SubmitOrder_Request__Sequence
{
  ariac_msgs__srv__SubmitOrder_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__SubmitOrder_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/SubmitOrder in the package ariac_msgs.
typedef struct ariac_msgs__srv__SubmitOrder_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ariac_msgs__srv__SubmitOrder_Response;

// Struct for a sequence of ariac_msgs__srv__SubmitOrder_Response.
typedef struct ariac_msgs__srv__SubmitOrder_Response__Sequence
{
  ariac_msgs__srv__SubmitOrder_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__SubmitOrder_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__SRV__DETAIL__SUBMIT_ORDER__STRUCT_H_
