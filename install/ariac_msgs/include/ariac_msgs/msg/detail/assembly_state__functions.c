// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/AssemblyState.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/assembly_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ariac_msgs__msg__AssemblyState__init(ariac_msgs__msg__AssemblyState * msg)
{
  if (!msg) {
    return false;
  }
  // battery_attached
  // pump_attached
  // regulator_attached
  // sensor_attached
  return true;
}

void
ariac_msgs__msg__AssemblyState__fini(ariac_msgs__msg__AssemblyState * msg)
{
  if (!msg) {
    return;
  }
  // battery_attached
  // pump_attached
  // regulator_attached
  // sensor_attached
}

bool
ariac_msgs__msg__AssemblyState__are_equal(const ariac_msgs__msg__AssemblyState * lhs, const ariac_msgs__msg__AssemblyState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_attached
  if (lhs->battery_attached != rhs->battery_attached) {
    return false;
  }
  // pump_attached
  if (lhs->pump_attached != rhs->pump_attached) {
    return false;
  }
  // regulator_attached
  if (lhs->regulator_attached != rhs->regulator_attached) {
    return false;
  }
  // sensor_attached
  if (lhs->sensor_attached != rhs->sensor_attached) {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__AssemblyState__copy(
  const ariac_msgs__msg__AssemblyState * input,
  ariac_msgs__msg__AssemblyState * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_attached
  output->battery_attached = input->battery_attached;
  // pump_attached
  output->pump_attached = input->pump_attached;
  // regulator_attached
  output->regulator_attached = input->regulator_attached;
  // sensor_attached
  output->sensor_attached = input->sensor_attached;
  return true;
}

ariac_msgs__msg__AssemblyState *
ariac_msgs__msg__AssemblyState__create()
{
  ariac_msgs__msg__AssemblyState * msg = (ariac_msgs__msg__AssemblyState *)malloc(sizeof(ariac_msgs__msg__AssemblyState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__AssemblyState));
  bool success = ariac_msgs__msg__AssemblyState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__AssemblyState__destroy(ariac_msgs__msg__AssemblyState * msg)
{
  if (msg) {
    ariac_msgs__msg__AssemblyState__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__AssemblyState__Sequence__init(ariac_msgs__msg__AssemblyState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__AssemblyState * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__AssemblyState *)calloc(size, sizeof(ariac_msgs__msg__AssemblyState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__AssemblyState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__AssemblyState__fini(&data[i - 1]);
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
ariac_msgs__msg__AssemblyState__Sequence__fini(ariac_msgs__msg__AssemblyState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__AssemblyState__fini(&array->data[i]);
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

ariac_msgs__msg__AssemblyState__Sequence *
ariac_msgs__msg__AssemblyState__Sequence__create(size_t size)
{
  ariac_msgs__msg__AssemblyState__Sequence * array = (ariac_msgs__msg__AssemblyState__Sequence *)malloc(sizeof(ariac_msgs__msg__AssemblyState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__AssemblyState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__AssemblyState__Sequence__destroy(ariac_msgs__msg__AssemblyState__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__AssemblyState__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__AssemblyState__Sequence__are_equal(const ariac_msgs__msg__AssemblyState__Sequence * lhs, const ariac_msgs__msg__AssemblyState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__AssemblyState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__AssemblyState__Sequence__copy(
  const ariac_msgs__msg__AssemblyState__Sequence * input,
  ariac_msgs__msg__AssemblyState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__AssemblyState);
    ariac_msgs__msg__AssemblyState * data =
      (ariac_msgs__msg__AssemblyState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__AssemblyState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__AssemblyState__fini(&data[i]);
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
    if (!ariac_msgs__msg__AssemblyState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
