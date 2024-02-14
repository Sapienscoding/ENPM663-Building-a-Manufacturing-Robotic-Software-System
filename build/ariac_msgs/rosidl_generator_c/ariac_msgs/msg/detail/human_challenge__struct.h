// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/HumanChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__HUMAN_CHALLENGE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__HUMAN_CHALLENGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ANTAGONISTIC'.
enum
{
  ariac_msgs__msg__HumanChallenge__ANTAGONISTIC = 0
};

/// Constant 'INDIFFERENT'.
enum
{
  ariac_msgs__msg__HumanChallenge__INDIFFERENT = 1
};

/// Constant 'HELPFUL'.
enum
{
  ariac_msgs__msg__HumanChallenge__HELPFUL = 2
};

// Include directives for member types
// Member 'condition'
#include "ariac_msgs/msg/detail/condition__struct.h"

// Struct defined in msg/HumanChallenge in the package ariac_msgs.
typedef struct ariac_msgs__msg__HumanChallenge
{
  uint8_t behavior;
  ariac_msgs__msg__Condition condition;
} ariac_msgs__msg__HumanChallenge;

// Struct for a sequence of ariac_msgs__msg__HumanChallenge.
typedef struct ariac_msgs__msg__HumanChallenge__Sequence
{
  ariac_msgs__msg__HumanChallenge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__HumanChallenge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__HUMAN_CHALLENGE__STRUCT_H_
