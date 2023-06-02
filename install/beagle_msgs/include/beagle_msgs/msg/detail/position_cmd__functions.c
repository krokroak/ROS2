// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beagle_msgs:msg/PositionCmd.idl
// generated code does not contain a copyright notice
#include "beagle_msgs/msg/detail/position_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
beagle_msgs__msg__PositionCmd__init(beagle_msgs__msg__PositionCmd * msg)
{
  if (!msg) {
    return false;
  }
  // linecount
  // movecount
  // nodecount
  return true;
}

void
beagle_msgs__msg__PositionCmd__fini(beagle_msgs__msg__PositionCmd * msg)
{
  if (!msg) {
    return;
  }
  // linecount
  // movecount
  // nodecount
}

bool
beagle_msgs__msg__PositionCmd__are_equal(const beagle_msgs__msg__PositionCmd * lhs, const beagle_msgs__msg__PositionCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linecount
  if (lhs->linecount != rhs->linecount) {
    return false;
  }
  // movecount
  if (lhs->movecount != rhs->movecount) {
    return false;
  }
  // nodecount
  if (lhs->nodecount != rhs->nodecount) {
    return false;
  }
  return true;
}

bool
beagle_msgs__msg__PositionCmd__copy(
  const beagle_msgs__msg__PositionCmd * input,
  beagle_msgs__msg__PositionCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // linecount
  output->linecount = input->linecount;
  // movecount
  output->movecount = input->movecount;
  // nodecount
  output->nodecount = input->nodecount;
  return true;
}

beagle_msgs__msg__PositionCmd *
beagle_msgs__msg__PositionCmd__create()
{
  beagle_msgs__msg__PositionCmd * msg = (beagle_msgs__msg__PositionCmd *)malloc(sizeof(beagle_msgs__msg__PositionCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__msg__PositionCmd));
  bool success = beagle_msgs__msg__PositionCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__msg__PositionCmd__destroy(beagle_msgs__msg__PositionCmd * msg)
{
  if (msg) {
    beagle_msgs__msg__PositionCmd__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__msg__PositionCmd__Sequence__init(beagle_msgs__msg__PositionCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__msg__PositionCmd * data = NULL;
  if (size) {
    data = (beagle_msgs__msg__PositionCmd *)calloc(size, sizeof(beagle_msgs__msg__PositionCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__msg__PositionCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__msg__PositionCmd__fini(&data[i - 1]);
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
beagle_msgs__msg__PositionCmd__Sequence__fini(beagle_msgs__msg__PositionCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__msg__PositionCmd__fini(&array->data[i]);
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

beagle_msgs__msg__PositionCmd__Sequence *
beagle_msgs__msg__PositionCmd__Sequence__create(size_t size)
{
  beagle_msgs__msg__PositionCmd__Sequence * array = (beagle_msgs__msg__PositionCmd__Sequence *)malloc(sizeof(beagle_msgs__msg__PositionCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__msg__PositionCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__msg__PositionCmd__Sequence__destroy(beagle_msgs__msg__PositionCmd__Sequence * array)
{
  if (array) {
    beagle_msgs__msg__PositionCmd__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__msg__PositionCmd__Sequence__are_equal(const beagle_msgs__msg__PositionCmd__Sequence * lhs, const beagle_msgs__msg__PositionCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__msg__PositionCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__msg__PositionCmd__Sequence__copy(
  const beagle_msgs__msg__PositionCmd__Sequence * input,
  beagle_msgs__msg__PositionCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__msg__PositionCmd);
    beagle_msgs__msg__PositionCmd * data =
      (beagle_msgs__msg__PositionCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__msg__PositionCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__msg__PositionCmd__fini(&data[i]);
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
    if (!beagle_msgs__msg__PositionCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
