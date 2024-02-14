// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/HumanState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'human_position'
// Member 'robot_position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'human_velocity'
// Member 'robot_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/HumanState in the package ariac_msgs.
typedef struct ariac_msgs__msg__HumanState
{
  geometry_msgs__msg__Point human_position;
  geometry_msgs__msg__Point robot_position;
  geometry_msgs__msg__Vector3 human_velocity;
  geometry_msgs__msg__Vector3 robot_velocity;
} ariac_msgs__msg__HumanState;

// Struct for a sequence of ariac_msgs__msg__HumanState.
typedef struct ariac_msgs__msg__HumanState__Sequence
{
  ariac_msgs__msg__HumanState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__HumanState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__HUMAN_STATE__STRUCT_H_
