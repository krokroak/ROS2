// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beagle_msgs:msg/CmdAndPoseVel.idl
// generated code does not contain a copyright notice
#include "beagle_msgs/msg/detail/cmd_and_pose_vel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
beagle_msgs__msg__CmdAndPoseVel__init(beagle_msgs__msg__CmdAndPoseVel * msg)
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
beagle_msgs__msg__CmdAndPoseVel__fini(beagle_msgs__msg__CmdAndPoseVel * msg)
{
  if (!msg) {
    return;
  }
  // linecount
  // movecount
  // nodecount
}

bool
beagle_msgs__msg__CmdAndPoseVel__are_equal(const beagle_msgs__msg__CmdAndPoseVel * lhs, const beagle_msgs__msg__CmdAndPoseVel * rhs)
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
beagle_msgs__msg__CmdAndPoseVel__copy(
  const beagle_msgs__msg__CmdAndPoseVel * input,
  beagle_msgs__msg__CmdAndPoseVel * output)
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

beagle_msgs__msg__CmdAndPoseVel *
beagle_msgs__msg__CmdAndPoseVel__create()
{
  beagle_msgs__msg__CmdAndPoseVel * msg = (beagle_msgs__msg__CmdAndPoseVel *)malloc(sizeof(beagle_msgs__msg__CmdAndPoseVel));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__msg__CmdAndPoseVel));
  bool success = beagle_msgs__msg__CmdAndPoseVel__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__msg__CmdAndPoseVel__destroy(beagle_msgs__msg__CmdAndPoseVel * msg)
{
  if (msg) {
    beagle_msgs__msg__CmdAndPoseVel__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__msg__CmdAndPoseVel__Sequence__init(beagle_msgs__msg__CmdAndPoseVel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__msg__CmdAndPoseVel * data = NULL;
  if (size) {
    data = (beagle_msgs__msg__CmdAndPoseVel *)calloc(size, sizeof(beagle_msgs__msg__CmdAndPoseVel));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__msg__CmdAndPoseVel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__msg__CmdAndPoseVel__fini(&data[i - 1]);
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
beagle_msgs__msg__CmdAndPoseVel__Sequence__fini(beagle_msgs__msg__CmdAndPoseVel__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__msg__CmdAndPoseVel__fini(&array->data[i]);
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

beagle_msgs__msg__CmdAndPoseVel__Sequence *
beagle_msgs__msg__CmdAndPoseVel__Sequence__create(size_t size)
{
  beagle_msgs__msg__CmdAndPoseVel__Sequence * array = (beagle_msgs__msg__CmdAndPoseVel__Sequence *)malloc(sizeof(beagle_msgs__msg__CmdAndPoseVel__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__msg__CmdAndPoseVel__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__msg__CmdAndPoseVel__Sequence__destroy(beagle_msgs__msg__CmdAndPoseVel__Sequence * array)
{
  if (array) {
    beagle_msgs__msg__CmdAndPoseVel__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__msg__CmdAndPoseVel__Sequence__are_equal(const beagle_msgs__msg__CmdAndPoseVel__Sequence * lhs, const beagle_msgs__msg__CmdAndPoseVel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__msg__CmdAndPoseVel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__msg__CmdAndPoseVel__Sequence__copy(
  const beagle_msgs__msg__CmdAndPoseVel__Sequence * input,
  beagle_msgs__msg__CmdAndPoseVel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__msg__CmdAndPoseVel);
    beagle_msgs__msg__CmdAndPoseVel * data =
      (beagle_msgs__msg__CmdAndPoseVel *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__msg__CmdAndPoseVel__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__msg__CmdAndPoseVel__fini(&data[i]);
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
    if (!beagle_msgs__msg__CmdAndPoseVel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
