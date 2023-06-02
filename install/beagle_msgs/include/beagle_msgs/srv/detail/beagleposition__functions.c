// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beagle_msgs:srv/Beagleposition.idl
// generated code does not contain a copyright notice
#include "beagle_msgs/srv/detail/beagleposition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `dice_label`
#include "rosidl_runtime_c/string_functions.h"

bool
beagle_msgs__srv__Beagleposition_Request__init(beagle_msgs__srv__Beagleposition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // dice_label
  if (!rosidl_runtime_c__String__init(&msg->dice_label)) {
    beagle_msgs__srv__Beagleposition_Request__fini(msg);
    return false;
  }
  // user_fir
  // user_sec
  return true;
}

void
beagle_msgs__srv__Beagleposition_Request__fini(beagle_msgs__srv__Beagleposition_Request * msg)
{
  if (!msg) {
    return;
  }
  // dice_label
  rosidl_runtime_c__String__fini(&msg->dice_label);
  // user_fir
  // user_sec
}

bool
beagle_msgs__srv__Beagleposition_Request__are_equal(const beagle_msgs__srv__Beagleposition_Request * lhs, const beagle_msgs__srv__Beagleposition_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dice_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dice_label), &(rhs->dice_label)))
  {
    return false;
  }
  // user_fir
  if (lhs->user_fir != rhs->user_fir) {
    return false;
  }
  // user_sec
  if (lhs->user_sec != rhs->user_sec) {
    return false;
  }
  return true;
}

bool
beagle_msgs__srv__Beagleposition_Request__copy(
  const beagle_msgs__srv__Beagleposition_Request * input,
  beagle_msgs__srv__Beagleposition_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // dice_label
  if (!rosidl_runtime_c__String__copy(
      &(input->dice_label), &(output->dice_label)))
  {
    return false;
  }
  // user_fir
  output->user_fir = input->user_fir;
  // user_sec
  output->user_sec = input->user_sec;
  return true;
}

beagle_msgs__srv__Beagleposition_Request *
beagle_msgs__srv__Beagleposition_Request__create()
{
  beagle_msgs__srv__Beagleposition_Request * msg = (beagle_msgs__srv__Beagleposition_Request *)malloc(sizeof(beagle_msgs__srv__Beagleposition_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__srv__Beagleposition_Request));
  bool success = beagle_msgs__srv__Beagleposition_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__srv__Beagleposition_Request__destroy(beagle_msgs__srv__Beagleposition_Request * msg)
{
  if (msg) {
    beagle_msgs__srv__Beagleposition_Request__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__srv__Beagleposition_Request__Sequence__init(beagle_msgs__srv__Beagleposition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__srv__Beagleposition_Request * data = NULL;
  if (size) {
    data = (beagle_msgs__srv__Beagleposition_Request *)calloc(size, sizeof(beagle_msgs__srv__Beagleposition_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__srv__Beagleposition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__srv__Beagleposition_Request__fini(&data[i - 1]);
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
beagle_msgs__srv__Beagleposition_Request__Sequence__fini(beagle_msgs__srv__Beagleposition_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__srv__Beagleposition_Request__fini(&array->data[i]);
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

beagle_msgs__srv__Beagleposition_Request__Sequence *
beagle_msgs__srv__Beagleposition_Request__Sequence__create(size_t size)
{
  beagle_msgs__srv__Beagleposition_Request__Sequence * array = (beagle_msgs__srv__Beagleposition_Request__Sequence *)malloc(sizeof(beagle_msgs__srv__Beagleposition_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__srv__Beagleposition_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__srv__Beagleposition_Request__Sequence__destroy(beagle_msgs__srv__Beagleposition_Request__Sequence * array)
{
  if (array) {
    beagle_msgs__srv__Beagleposition_Request__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__srv__Beagleposition_Request__Sequence__are_equal(const beagle_msgs__srv__Beagleposition_Request__Sequence * lhs, const beagle_msgs__srv__Beagleposition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__srv__Beagleposition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__srv__Beagleposition_Request__Sequence__copy(
  const beagle_msgs__srv__Beagleposition_Request__Sequence * input,
  beagle_msgs__srv__Beagleposition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__srv__Beagleposition_Request);
    beagle_msgs__srv__Beagleposition_Request * data =
      (beagle_msgs__srv__Beagleposition_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__srv__Beagleposition_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__srv__Beagleposition_Request__fini(&data[i]);
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
    if (!beagle_msgs__srv__Beagleposition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
beagle_msgs__srv__Beagleposition_Response__init(beagle_msgs__srv__Beagleposition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // move_point
  // beagle_event
  // beagle_position
  return true;
}

void
beagle_msgs__srv__Beagleposition_Response__fini(beagle_msgs__srv__Beagleposition_Response * msg)
{
  if (!msg) {
    return;
  }
  // move_point
  // beagle_event
  // beagle_position
}

bool
beagle_msgs__srv__Beagleposition_Response__are_equal(const beagle_msgs__srv__Beagleposition_Response * lhs, const beagle_msgs__srv__Beagleposition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // move_point
  if (lhs->move_point != rhs->move_point) {
    return false;
  }
  // beagle_event
  if (lhs->beagle_event != rhs->beagle_event) {
    return false;
  }
  // beagle_position
  if (lhs->beagle_position != rhs->beagle_position) {
    return false;
  }
  return true;
}

bool
beagle_msgs__srv__Beagleposition_Response__copy(
  const beagle_msgs__srv__Beagleposition_Response * input,
  beagle_msgs__srv__Beagleposition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // move_point
  output->move_point = input->move_point;
  // beagle_event
  output->beagle_event = input->beagle_event;
  // beagle_position
  output->beagle_position = input->beagle_position;
  return true;
}

beagle_msgs__srv__Beagleposition_Response *
beagle_msgs__srv__Beagleposition_Response__create()
{
  beagle_msgs__srv__Beagleposition_Response * msg = (beagle_msgs__srv__Beagleposition_Response *)malloc(sizeof(beagle_msgs__srv__Beagleposition_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__srv__Beagleposition_Response));
  bool success = beagle_msgs__srv__Beagleposition_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__srv__Beagleposition_Response__destroy(beagle_msgs__srv__Beagleposition_Response * msg)
{
  if (msg) {
    beagle_msgs__srv__Beagleposition_Response__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__srv__Beagleposition_Response__Sequence__init(beagle_msgs__srv__Beagleposition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__srv__Beagleposition_Response * data = NULL;
  if (size) {
    data = (beagle_msgs__srv__Beagleposition_Response *)calloc(size, sizeof(beagle_msgs__srv__Beagleposition_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__srv__Beagleposition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__srv__Beagleposition_Response__fini(&data[i - 1]);
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
beagle_msgs__srv__Beagleposition_Response__Sequence__fini(beagle_msgs__srv__Beagleposition_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__srv__Beagleposition_Response__fini(&array->data[i]);
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

beagle_msgs__srv__Beagleposition_Response__Sequence *
beagle_msgs__srv__Beagleposition_Response__Sequence__create(size_t size)
{
  beagle_msgs__srv__Beagleposition_Response__Sequence * array = (beagle_msgs__srv__Beagleposition_Response__Sequence *)malloc(sizeof(beagle_msgs__srv__Beagleposition_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__srv__Beagleposition_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__srv__Beagleposition_Response__Sequence__destroy(beagle_msgs__srv__Beagleposition_Response__Sequence * array)
{
  if (array) {
    beagle_msgs__srv__Beagleposition_Response__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__srv__Beagleposition_Response__Sequence__are_equal(const beagle_msgs__srv__Beagleposition_Response__Sequence * lhs, const beagle_msgs__srv__Beagleposition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__srv__Beagleposition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__srv__Beagleposition_Response__Sequence__copy(
  const beagle_msgs__srv__Beagleposition_Response__Sequence * input,
  beagle_msgs__srv__Beagleposition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__srv__Beagleposition_Response);
    beagle_msgs__srv__Beagleposition_Response * data =
      (beagle_msgs__srv__Beagleposition_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__srv__Beagleposition_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__srv__Beagleposition_Response__fini(&data[i]);
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
    if (!beagle_msgs__srv__Beagleposition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
