// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/HumanState.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/human_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `human_position`
// Member `robot_position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `human_velocity`
// Member `robot_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
ariac_msgs__msg__HumanState__init(ariac_msgs__msg__HumanState * msg)
{
  if (!msg) {
    return false;
  }
  // human_position
  if (!geometry_msgs__msg__Point__init(&msg->human_position)) {
    ariac_msgs__msg__HumanState__fini(msg);
    return false;
  }
  // robot_position
  if (!geometry_msgs__msg__Point__init(&msg->robot_position)) {
    ariac_msgs__msg__HumanState__fini(msg);
    return false;
  }
  // human_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->human_velocity)) {
    ariac_msgs__msg__HumanState__fini(msg);
    return false;
  }
  // robot_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->robot_velocity)) {
    ariac_msgs__msg__HumanState__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__HumanState__fini(ariac_msgs__msg__HumanState * msg)
{
  if (!msg) {
    return;
  }
  // human_position
  geometry_msgs__msg__Point__fini(&msg->human_position);
  // robot_position
  geometry_msgs__msg__Point__fini(&msg->robot_position);
  // human_velocity
  geometry_msgs__msg__Vector3__fini(&msg->human_velocity);
  // robot_velocity
  geometry_msgs__msg__Vector3__fini(&msg->robot_velocity);
}

bool
ariac_msgs__msg__HumanState__are_equal(const ariac_msgs__msg__HumanState * lhs, const ariac_msgs__msg__HumanState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // human_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->human_position), &(rhs->human_position)))
  {
    return false;
  }
  // robot_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->robot_position), &(rhs->robot_position)))
  {
    return false;
  }
  // human_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->human_velocity), &(rhs->human_velocity)))
  {
    return false;
  }
  // robot_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->robot_velocity), &(rhs->robot_velocity)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__HumanState__copy(
  const ariac_msgs__msg__HumanState * input,
  ariac_msgs__msg__HumanState * output)
{
  if (!input || !output) {
    return false;
  }
  // human_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->human_position), &(output->human_position)))
  {
    return false;
  }
  // robot_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->robot_position), &(output->robot_position)))
  {
    return false;
  }
  // human_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->human_velocity), &(output->human_velocity)))
  {
    return false;
  }
  // robot_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->robot_velocity), &(output->robot_velocity)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__HumanState *
ariac_msgs__msg__HumanState__create()
{
  ariac_msgs__msg__HumanState * msg = (ariac_msgs__msg__HumanState *)malloc(sizeof(ariac_msgs__msg__HumanState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__HumanState));
  bool success = ariac_msgs__msg__HumanState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__HumanState__destroy(ariac_msgs__msg__HumanState * msg)
{
  if (msg) {
    ariac_msgs__msg__HumanState__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__HumanState__Sequence__init(ariac_msgs__msg__HumanState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__HumanState * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__HumanState *)calloc(size, sizeof(ariac_msgs__msg__HumanState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__HumanState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__HumanState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ariac_msgs__msg__HumanState__Sequence__fini(ariac_msgs__msg__HumanState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__HumanState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ariac_msgs__msg__HumanState__Sequence *
ariac_msgs__msg__HumanState__Sequence__create(size_t size)
{
  ariac_msgs__msg__HumanState__Sequence * array = (ariac_msgs__msg__HumanState__Sequence *)malloc(sizeof(ariac_msgs__msg__HumanState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__HumanState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__HumanState__Sequence__destroy(ariac_msgs__msg__HumanState__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__HumanState__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__HumanState__Sequence__are_equal(const ariac_msgs__msg__HumanState__Sequence * lhs, const ariac_msgs__msg__HumanState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__HumanState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__HumanState__Sequence__copy(
  const ariac_msgs__msg__HumanState__Sequence * input,
  ariac_msgs__msg__HumanState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__HumanState);
    ariac_msgs__msg__HumanState * data =
      (ariac_msgs__msg__HumanState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__HumanState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__HumanState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__HumanState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
