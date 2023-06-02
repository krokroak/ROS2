// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beagle_msgs:msg/Positioncmd.idl
// generated code does not contain a copyright notice
#include "beagle_msgs/msg/detail/positioncmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
beagle_msgs__msg__Positioncmd__init(beagle_msgs__msg__Positioncmd * msg)
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
beagle_msgs__msg__Positioncmd__fini(beagle_msgs__msg__Positioncmd * msg)
{
  if (!msg) {
    return;
  }
  // linecount
  // movecount
  // nodecount
}

bool
beagle_msgs__msg__Positioncmd__are_equal(const beagle_msgs__msg__Positioncmd * lhs, const beagle_msgs__msg__Positioncmd * rhs)
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
beagle_msgs__msg__Positioncmd__copy(
  const beagle_msgs__msg__Positioncmd * input,
  beagle_msgs__msg__Positioncmd * output)
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

beagle_msgs__msg__Positioncmd *
beagle_msgs__msg__Positioncmd__create()
{
  beagle_msgs__msg__Positioncmd * msg = (beagle_msgs__msg__Positioncmd *)malloc(sizeof(beagle_msgs__msg__Positioncmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__msg__Positioncmd));
  bool success = beagle_msgs__msg__Positioncmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__msg__Positioncmd__destroy(beagle_msgs__msg__Positioncmd * msg)
{
  if (msg) {
    beagle_msgs__msg__Positioncmd__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__msg__Positioncmd__Sequence__init(beagle_msgs__msg__Positioncmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__msg__Positioncmd * data = NULL;
  if (size) {
    data = (beagle_msgs__msg__Positioncmd *)calloc(size, sizeof(beagle_msgs__msg__Positioncmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__msg__Positioncmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__msg__Positioncmd__fini(&data[i - 1]);
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
beagle_msgs__msg__Positioncmd__Sequence__fini(beagle_msgs__msg__Positioncmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__msg__Positioncmd__fini(&array->data[i]);
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

beagle_msgs__msg__Positioncmd__Sequence *
beagle_msgs__msg__Positioncmd__Sequence__create(size_t size)
{
  beagle_msgs__msg__Positioncmd__Sequence * array = (beagle_msgs__msg__Positioncmd__Sequence *)malloc(sizeof(beagle_msgs__msg__Positioncmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__msg__Positioncmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__msg__Positioncmd__Sequence__destroy(beagle_msgs__msg__Positioncmd__Sequence * array)
{
  if (array) {
    beagle_msgs__msg__Positioncmd__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__msg__Positioncmd__Sequence__are_equal(const beagle_msgs__msg__Positioncmd__Sequence * lhs, const beagle_msgs__msg__Positioncmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__msg__Positioncmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__msg__Positioncmd__Sequence__copy(
  const beagle_msgs__msg__Positioncmd__Sequence * input,
  beagle_msgs__msg__Positioncmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__msg__Positioncmd);
    beagle_msgs__msg__Positioncmd * data =
      (beagle_msgs__msg__Positioncmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__msg__Positioncmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__msg__Positioncmd__fini(&data[i]);
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
    if (!beagle_msgs__msg__Positioncmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
