// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:srv/GetPreAssemblyPoses.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/srv/detail/get_pre_assembly_poses__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `order_id`
#include "rosidl_runtime_c/string_functions.h"

bool
ariac_msgs__srv__GetPreAssemblyPoses_Request__init(ariac_msgs__srv__GetPreAssemblyPoses_Request * msg)
{
  if (!msg) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__init(&msg->order_id)) {
    ariac_msgs__srv__GetPreAssemblyPoses_Request__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__srv__GetPreAssemblyPoses_Request__fini(ariac_msgs__srv__GetPreAssemblyPoses_Request * msg)
{
  if (!msg) {
    return;
  }
  // order_id
  rosidl_runtime_c__String__fini(&msg->order_id);
}

bool
ariac_msgs__srv__GetPreAssemblyPoses_Request__are_equal(const ariac_msgs__srv__GetPreAssemblyPoses_Request * lhs, const ariac_msgs__srv__GetPreAssemblyPoses_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->order_id), &(rhs->order_id)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__srv__GetPreAssemblyPoses_Request__copy(
  const ariac_msgs__srv__GetPreAssemblyPoses_Request * input,
  ariac_msgs__srv__GetPreAssemblyPoses_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__copy(
      &(input->order_id), &(output->order_id)))
  {
    return false;
  }
  return true;
}

ariac_msgs__srv__GetPreAssemblyPoses_Request *
ariac_msgs__srv__GetPreAssemblyPoses_Request__create()
{
  ariac_msgs__srv__GetPreAssemblyPoses_Request * msg = (ariac_msgs__srv__GetPreAssemblyPoses_Request *)malloc(sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Request));
  bool success = ariac_msgs__srv__GetPreAssemblyPoses_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__srv__GetPreAssemblyPoses_Request__destroy(ariac_msgs__srv__GetPreAssemblyPoses_Request * msg)
{
  if (msg) {
    ariac_msgs__srv__GetPreAssemblyPoses_Request__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence__init(ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__srv__GetPreAssemblyPoses_Request * data = NULL;
  if (size) {
    data = (ariac_msgs__srv__GetPreAssemblyPoses_Request *)calloc(size, sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__srv__GetPreAssemblyPoses_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__srv__GetPreAssemblyPoses_Request__fini(&data[i - 1]);
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
ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence__fini(ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__srv__GetPreAssemblyPoses_Request__fini(&array->data[i]);
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

ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence *
ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence__create(size_t size)
{
  ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence * array = (ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence *)malloc(sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence__destroy(ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence * array)
{
  if (array) {
    ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence__are_equal(const ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence * lhs, const ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__srv__GetPreAssemblyPoses_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence__copy(
  const ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence * input,
  ariac_msgs__srv__GetPreAssemblyPoses_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Request);
    ariac_msgs__srv__GetPreAssemblyPoses_Request * data =
      (ariac_msgs__srv__GetPreAssemblyPoses_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__srv__GetPreAssemblyPoses_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__srv__GetPreAssemblyPoses_Request__fini(&data[i]);
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
    if (!ariac_msgs__srv__GetPreAssemblyPoses_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `parts`
#include "ariac_msgs/msg/detail/part_pose__functions.h"

bool
ariac_msgs__srv__GetPreAssemblyPoses_Response__init(ariac_msgs__srv__GetPreAssemblyPoses_Response * msg)
{
  if (!msg) {
    return false;
  }
  // valid_id
  // agv_at_station
  // parts
  if (!ariac_msgs__msg__PartPose__Sequence__init(&msg->parts, 0)) {
    ariac_msgs__srv__GetPreAssemblyPoses_Response__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__srv__GetPreAssemblyPoses_Response__fini(ariac_msgs__srv__GetPreAssemblyPoses_Response * msg)
{
  if (!msg) {
    return;
  }
  // valid_id
  // agv_at_station
  // parts
  ariac_msgs__msg__PartPose__Sequence__fini(&msg->parts);
}

bool
ariac_msgs__srv__GetPreAssemblyPoses_Response__are_equal(const ariac_msgs__srv__GetPreAssemblyPoses_Response * lhs, const ariac_msgs__srv__GetPreAssemblyPoses_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // valid_id
  if (lhs->valid_id != rhs->valid_id) {
    return false;
  }
  // agv_at_station
  if (lhs->agv_at_station != rhs->agv_at_station) {
    return false;
  }
  // parts
  if (!ariac_msgs__msg__PartPose__Sequence__are_equal(
      &(lhs->parts), &(rhs->parts)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__srv__GetPreAssemblyPoses_Response__copy(
  const ariac_msgs__srv__GetPreAssemblyPoses_Response * input,
  ariac_msgs__srv__GetPreAssemblyPoses_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // valid_id
  output->valid_id = input->valid_id;
  // agv_at_station
  output->agv_at_station = input->agv_at_station;
  // parts
  if (!ariac_msgs__msg__PartPose__Sequence__copy(
      &(input->parts), &(output->parts)))
  {
    return false;
  }
  return true;
}

ariac_msgs__srv__GetPreAssemblyPoses_Response *
ariac_msgs__srv__GetPreAssemblyPoses_Response__create()
{
  ariac_msgs__srv__GetPreAssemblyPoses_Response * msg = (ariac_msgs__srv__GetPreAssemblyPoses_Response *)malloc(sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Response));
  bool success = ariac_msgs__srv__GetPreAssemblyPoses_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__srv__GetPreAssemblyPoses_Response__destroy(ariac_msgs__srv__GetPreAssemblyPoses_Response * msg)
{
  if (msg) {
    ariac_msgs__srv__GetPreAssemblyPoses_Response__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence__init(ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__srv__GetPreAssemblyPoses_Response * data = NULL;
  if (size) {
    data = (ariac_msgs__srv__GetPreAssemblyPoses_Response *)calloc(size, sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__srv__GetPreAssemblyPoses_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__srv__GetPreAssemblyPoses_Response__fini(&data[i - 1]);
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
ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence__fini(ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__srv__GetPreAssemblyPoses_Response__fini(&array->data[i]);
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

ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence *
ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence__create(size_t size)
{
  ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence * array = (ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence *)malloc(sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence__destroy(ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence * array)
{
  if (array) {
    ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence__are_equal(const ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence * lhs, const ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__srv__GetPreAssemblyPoses_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence__copy(
  const ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence * input,
  ariac_msgs__srv__GetPreAssemblyPoses_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Response);
    ariac_msgs__srv__GetPreAssemblyPoses_Response * data =
      (ariac_msgs__srv__GetPreAssemblyPoses_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__srv__GetPreAssemblyPoses_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__srv__GetPreAssemblyPoses_Response__fini(&data[i]);
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
    if (!ariac_msgs__srv__GetPreAssemblyPoses_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
