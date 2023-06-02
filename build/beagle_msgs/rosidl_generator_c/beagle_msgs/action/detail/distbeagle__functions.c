// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beagle_msgs:action/Distbeagle.idl
// generated code does not contain a copyright notice
#include "beagle_msgs/action/detail/distbeagle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
beagle_msgs__action__Distbeagle_Goal__init(beagle_msgs__action__Distbeagle_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // lidar_dist
  // plus_arrow
  // minus_arrow
  return true;
}

void
beagle_msgs__action__Distbeagle_Goal__fini(beagle_msgs__action__Distbeagle_Goal * msg)
{
  if (!msg) {
    return;
  }
  // lidar_dist
  // plus_arrow
  // minus_arrow
}

bool
beagle_msgs__action__Distbeagle_Goal__are_equal(const beagle_msgs__action__Distbeagle_Goal * lhs, const beagle_msgs__action__Distbeagle_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lidar_dist
  if (lhs->lidar_dist != rhs->lidar_dist) {
    return false;
  }
  // plus_arrow
  if (lhs->plus_arrow != rhs->plus_arrow) {
    return false;
  }
  // minus_arrow
  if (lhs->minus_arrow != rhs->minus_arrow) {
    return false;
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_Goal__copy(
  const beagle_msgs__action__Distbeagle_Goal * input,
  beagle_msgs__action__Distbeagle_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // lidar_dist
  output->lidar_dist = input->lidar_dist;
  // plus_arrow
  output->plus_arrow = input->plus_arrow;
  // minus_arrow
  output->minus_arrow = input->minus_arrow;
  return true;
}

beagle_msgs__action__Distbeagle_Goal *
beagle_msgs__action__Distbeagle_Goal__create()
{
  beagle_msgs__action__Distbeagle_Goal * msg = (beagle_msgs__action__Distbeagle_Goal *)malloc(sizeof(beagle_msgs__action__Distbeagle_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__action__Distbeagle_Goal));
  bool success = beagle_msgs__action__Distbeagle_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__action__Distbeagle_Goal__destroy(beagle_msgs__action__Distbeagle_Goal * msg)
{
  if (msg) {
    beagle_msgs__action__Distbeagle_Goal__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__action__Distbeagle_Goal__Sequence__init(beagle_msgs__action__Distbeagle_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__action__Distbeagle_Goal * data = NULL;
  if (size) {
    data = (beagle_msgs__action__Distbeagle_Goal *)calloc(size, sizeof(beagle_msgs__action__Distbeagle_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__action__Distbeagle_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__action__Distbeagle_Goal__fini(&data[i - 1]);
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
beagle_msgs__action__Distbeagle_Goal__Sequence__fini(beagle_msgs__action__Distbeagle_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__action__Distbeagle_Goal__fini(&array->data[i]);
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

beagle_msgs__action__Distbeagle_Goal__Sequence *
beagle_msgs__action__Distbeagle_Goal__Sequence__create(size_t size)
{
  beagle_msgs__action__Distbeagle_Goal__Sequence * array = (beagle_msgs__action__Distbeagle_Goal__Sequence *)malloc(sizeof(beagle_msgs__action__Distbeagle_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__action__Distbeagle_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__action__Distbeagle_Goal__Sequence__destroy(beagle_msgs__action__Distbeagle_Goal__Sequence * array)
{
  if (array) {
    beagle_msgs__action__Distbeagle_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__action__Distbeagle_Goal__Sequence__are_equal(const beagle_msgs__action__Distbeagle_Goal__Sequence * lhs, const beagle_msgs__action__Distbeagle_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__action__Distbeagle_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_Goal__Sequence__copy(
  const beagle_msgs__action__Distbeagle_Goal__Sequence * input,
  beagle_msgs__action__Distbeagle_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__action__Distbeagle_Goal);
    beagle_msgs__action__Distbeagle_Goal * data =
      (beagle_msgs__action__Distbeagle_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__action__Distbeagle_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__action__Distbeagle_Goal__fini(&data[i]);
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
    if (!beagle_msgs__action__Distbeagle_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
beagle_msgs__action__Distbeagle_Result__init(beagle_msgs__action__Distbeagle_Result * msg)
{
  if (!msg) {
    return false;
  }
  // count_node_bot_1
  // count_node_bot_2
  return true;
}

void
beagle_msgs__action__Distbeagle_Result__fini(beagle_msgs__action__Distbeagle_Result * msg)
{
  if (!msg) {
    return;
  }
  // count_node_bot_1
  // count_node_bot_2
}

bool
beagle_msgs__action__Distbeagle_Result__are_equal(const beagle_msgs__action__Distbeagle_Result * lhs, const beagle_msgs__action__Distbeagle_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // count_node_bot_1
  if (lhs->count_node_bot_1 != rhs->count_node_bot_1) {
    return false;
  }
  // count_node_bot_2
  if (lhs->count_node_bot_2 != rhs->count_node_bot_2) {
    return false;
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_Result__copy(
  const beagle_msgs__action__Distbeagle_Result * input,
  beagle_msgs__action__Distbeagle_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // count_node_bot_1
  output->count_node_bot_1 = input->count_node_bot_1;
  // count_node_bot_2
  output->count_node_bot_2 = input->count_node_bot_2;
  return true;
}

beagle_msgs__action__Distbeagle_Result *
beagle_msgs__action__Distbeagle_Result__create()
{
  beagle_msgs__action__Distbeagle_Result * msg = (beagle_msgs__action__Distbeagle_Result *)malloc(sizeof(beagle_msgs__action__Distbeagle_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__action__Distbeagle_Result));
  bool success = beagle_msgs__action__Distbeagle_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__action__Distbeagle_Result__destroy(beagle_msgs__action__Distbeagle_Result * msg)
{
  if (msg) {
    beagle_msgs__action__Distbeagle_Result__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__action__Distbeagle_Result__Sequence__init(beagle_msgs__action__Distbeagle_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__action__Distbeagle_Result * data = NULL;
  if (size) {
    data = (beagle_msgs__action__Distbeagle_Result *)calloc(size, sizeof(beagle_msgs__action__Distbeagle_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__action__Distbeagle_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__action__Distbeagle_Result__fini(&data[i - 1]);
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
beagle_msgs__action__Distbeagle_Result__Sequence__fini(beagle_msgs__action__Distbeagle_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__action__Distbeagle_Result__fini(&array->data[i]);
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

beagle_msgs__action__Distbeagle_Result__Sequence *
beagle_msgs__action__Distbeagle_Result__Sequence__create(size_t size)
{
  beagle_msgs__action__Distbeagle_Result__Sequence * array = (beagle_msgs__action__Distbeagle_Result__Sequence *)malloc(sizeof(beagle_msgs__action__Distbeagle_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__action__Distbeagle_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__action__Distbeagle_Result__Sequence__destroy(beagle_msgs__action__Distbeagle_Result__Sequence * array)
{
  if (array) {
    beagle_msgs__action__Distbeagle_Result__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__action__Distbeagle_Result__Sequence__are_equal(const beagle_msgs__action__Distbeagle_Result__Sequence * lhs, const beagle_msgs__action__Distbeagle_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__action__Distbeagle_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_Result__Sequence__copy(
  const beagle_msgs__action__Distbeagle_Result__Sequence * input,
  beagle_msgs__action__Distbeagle_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__action__Distbeagle_Result);
    beagle_msgs__action__Distbeagle_Result * data =
      (beagle_msgs__action__Distbeagle_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__action__Distbeagle_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__action__Distbeagle_Result__fini(&data[i]);
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
    if (!beagle_msgs__action__Distbeagle_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
beagle_msgs__action__Distbeagle_Feedback__init(beagle_msgs__action__Distbeagle_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // between_beagle12
  return true;
}

void
beagle_msgs__action__Distbeagle_Feedback__fini(beagle_msgs__action__Distbeagle_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // between_beagle12
}

bool
beagle_msgs__action__Distbeagle_Feedback__are_equal(const beagle_msgs__action__Distbeagle_Feedback * lhs, const beagle_msgs__action__Distbeagle_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // between_beagle12
  if (lhs->between_beagle12 != rhs->between_beagle12) {
    return false;
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_Feedback__copy(
  const beagle_msgs__action__Distbeagle_Feedback * input,
  beagle_msgs__action__Distbeagle_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // between_beagle12
  output->between_beagle12 = input->between_beagle12;
  return true;
}

beagle_msgs__action__Distbeagle_Feedback *
beagle_msgs__action__Distbeagle_Feedback__create()
{
  beagle_msgs__action__Distbeagle_Feedback * msg = (beagle_msgs__action__Distbeagle_Feedback *)malloc(sizeof(beagle_msgs__action__Distbeagle_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__action__Distbeagle_Feedback));
  bool success = beagle_msgs__action__Distbeagle_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__action__Distbeagle_Feedback__destroy(beagle_msgs__action__Distbeagle_Feedback * msg)
{
  if (msg) {
    beagle_msgs__action__Distbeagle_Feedback__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__action__Distbeagle_Feedback__Sequence__init(beagle_msgs__action__Distbeagle_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__action__Distbeagle_Feedback * data = NULL;
  if (size) {
    data = (beagle_msgs__action__Distbeagle_Feedback *)calloc(size, sizeof(beagle_msgs__action__Distbeagle_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__action__Distbeagle_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__action__Distbeagle_Feedback__fini(&data[i - 1]);
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
beagle_msgs__action__Distbeagle_Feedback__Sequence__fini(beagle_msgs__action__Distbeagle_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__action__Distbeagle_Feedback__fini(&array->data[i]);
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

beagle_msgs__action__Distbeagle_Feedback__Sequence *
beagle_msgs__action__Distbeagle_Feedback__Sequence__create(size_t size)
{
  beagle_msgs__action__Distbeagle_Feedback__Sequence * array = (beagle_msgs__action__Distbeagle_Feedback__Sequence *)malloc(sizeof(beagle_msgs__action__Distbeagle_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__action__Distbeagle_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__action__Distbeagle_Feedback__Sequence__destroy(beagle_msgs__action__Distbeagle_Feedback__Sequence * array)
{
  if (array) {
    beagle_msgs__action__Distbeagle_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__action__Distbeagle_Feedback__Sequence__are_equal(const beagle_msgs__action__Distbeagle_Feedback__Sequence * lhs, const beagle_msgs__action__Distbeagle_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__action__Distbeagle_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_Feedback__Sequence__copy(
  const beagle_msgs__action__Distbeagle_Feedback__Sequence * input,
  beagle_msgs__action__Distbeagle_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__action__Distbeagle_Feedback);
    beagle_msgs__action__Distbeagle_Feedback * data =
      (beagle_msgs__action__Distbeagle_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__action__Distbeagle_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__action__Distbeagle_Feedback__fini(&data[i]);
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
    if (!beagle_msgs__action__Distbeagle_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "beagle_msgs/action/detail/distbeagle__functions.h"

bool
beagle_msgs__action__Distbeagle_SendGoal_Request__init(beagle_msgs__action__Distbeagle_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    beagle_msgs__action__Distbeagle_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!beagle_msgs__action__Distbeagle_Goal__init(&msg->goal)) {
    beagle_msgs__action__Distbeagle_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
beagle_msgs__action__Distbeagle_SendGoal_Request__fini(beagle_msgs__action__Distbeagle_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  beagle_msgs__action__Distbeagle_Goal__fini(&msg->goal);
}

bool
beagle_msgs__action__Distbeagle_SendGoal_Request__are_equal(const beagle_msgs__action__Distbeagle_SendGoal_Request * lhs, const beagle_msgs__action__Distbeagle_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!beagle_msgs__action__Distbeagle_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_SendGoal_Request__copy(
  const beagle_msgs__action__Distbeagle_SendGoal_Request * input,
  beagle_msgs__action__Distbeagle_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!beagle_msgs__action__Distbeagle_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

beagle_msgs__action__Distbeagle_SendGoal_Request *
beagle_msgs__action__Distbeagle_SendGoal_Request__create()
{
  beagle_msgs__action__Distbeagle_SendGoal_Request * msg = (beagle_msgs__action__Distbeagle_SendGoal_Request *)malloc(sizeof(beagle_msgs__action__Distbeagle_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__action__Distbeagle_SendGoal_Request));
  bool success = beagle_msgs__action__Distbeagle_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__action__Distbeagle_SendGoal_Request__destroy(beagle_msgs__action__Distbeagle_SendGoal_Request * msg)
{
  if (msg) {
    beagle_msgs__action__Distbeagle_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__init(beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__action__Distbeagle_SendGoal_Request * data = NULL;
  if (size) {
    data = (beagle_msgs__action__Distbeagle_SendGoal_Request *)calloc(size, sizeof(beagle_msgs__action__Distbeagle_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__action__Distbeagle_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__action__Distbeagle_SendGoal_Request__fini(&data[i - 1]);
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
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__fini(beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__action__Distbeagle_SendGoal_Request__fini(&array->data[i]);
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

beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence *
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__create(size_t size)
{
  beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * array = (beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence *)malloc(sizeof(beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__destroy(beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * array)
{
  if (array) {
    beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__are_equal(const beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * lhs, const beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__action__Distbeagle_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__copy(
  const beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * input,
  beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__action__Distbeagle_SendGoal_Request);
    beagle_msgs__action__Distbeagle_SendGoal_Request * data =
      (beagle_msgs__action__Distbeagle_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__action__Distbeagle_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__action__Distbeagle_SendGoal_Request__fini(&data[i]);
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
    if (!beagle_msgs__action__Distbeagle_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
beagle_msgs__action__Distbeagle_SendGoal_Response__init(beagle_msgs__action__Distbeagle_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    beagle_msgs__action__Distbeagle_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
beagle_msgs__action__Distbeagle_SendGoal_Response__fini(beagle_msgs__action__Distbeagle_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
beagle_msgs__action__Distbeagle_SendGoal_Response__are_equal(const beagle_msgs__action__Distbeagle_SendGoal_Response * lhs, const beagle_msgs__action__Distbeagle_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_SendGoal_Response__copy(
  const beagle_msgs__action__Distbeagle_SendGoal_Response * input,
  beagle_msgs__action__Distbeagle_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

beagle_msgs__action__Distbeagle_SendGoal_Response *
beagle_msgs__action__Distbeagle_SendGoal_Response__create()
{
  beagle_msgs__action__Distbeagle_SendGoal_Response * msg = (beagle_msgs__action__Distbeagle_SendGoal_Response *)malloc(sizeof(beagle_msgs__action__Distbeagle_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__action__Distbeagle_SendGoal_Response));
  bool success = beagle_msgs__action__Distbeagle_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__action__Distbeagle_SendGoal_Response__destroy(beagle_msgs__action__Distbeagle_SendGoal_Response * msg)
{
  if (msg) {
    beagle_msgs__action__Distbeagle_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__init(beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__action__Distbeagle_SendGoal_Response * data = NULL;
  if (size) {
    data = (beagle_msgs__action__Distbeagle_SendGoal_Response *)calloc(size, sizeof(beagle_msgs__action__Distbeagle_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__action__Distbeagle_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__action__Distbeagle_SendGoal_Response__fini(&data[i - 1]);
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
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__fini(beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__action__Distbeagle_SendGoal_Response__fini(&array->data[i]);
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

beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence *
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__create(size_t size)
{
  beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * array = (beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence *)malloc(sizeof(beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__destroy(beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * array)
{
  if (array) {
    beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__are_equal(const beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * lhs, const beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__action__Distbeagle_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__copy(
  const beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * input,
  beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__action__Distbeagle_SendGoal_Response);
    beagle_msgs__action__Distbeagle_SendGoal_Response * data =
      (beagle_msgs__action__Distbeagle_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__action__Distbeagle_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__action__Distbeagle_SendGoal_Response__fini(&data[i]);
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
    if (!beagle_msgs__action__Distbeagle_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
beagle_msgs__action__Distbeagle_GetResult_Request__init(beagle_msgs__action__Distbeagle_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    beagle_msgs__action__Distbeagle_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
beagle_msgs__action__Distbeagle_GetResult_Request__fini(beagle_msgs__action__Distbeagle_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
beagle_msgs__action__Distbeagle_GetResult_Request__are_equal(const beagle_msgs__action__Distbeagle_GetResult_Request * lhs, const beagle_msgs__action__Distbeagle_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_GetResult_Request__copy(
  const beagle_msgs__action__Distbeagle_GetResult_Request * input,
  beagle_msgs__action__Distbeagle_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

beagle_msgs__action__Distbeagle_GetResult_Request *
beagle_msgs__action__Distbeagle_GetResult_Request__create()
{
  beagle_msgs__action__Distbeagle_GetResult_Request * msg = (beagle_msgs__action__Distbeagle_GetResult_Request *)malloc(sizeof(beagle_msgs__action__Distbeagle_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__action__Distbeagle_GetResult_Request));
  bool success = beagle_msgs__action__Distbeagle_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__action__Distbeagle_GetResult_Request__destroy(beagle_msgs__action__Distbeagle_GetResult_Request * msg)
{
  if (msg) {
    beagle_msgs__action__Distbeagle_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__init(beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__action__Distbeagle_GetResult_Request * data = NULL;
  if (size) {
    data = (beagle_msgs__action__Distbeagle_GetResult_Request *)calloc(size, sizeof(beagle_msgs__action__Distbeagle_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__action__Distbeagle_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__action__Distbeagle_GetResult_Request__fini(&data[i - 1]);
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
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__fini(beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__action__Distbeagle_GetResult_Request__fini(&array->data[i]);
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

beagle_msgs__action__Distbeagle_GetResult_Request__Sequence *
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__create(size_t size)
{
  beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * array = (beagle_msgs__action__Distbeagle_GetResult_Request__Sequence *)malloc(sizeof(beagle_msgs__action__Distbeagle_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__destroy(beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * array)
{
  if (array) {
    beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__are_equal(const beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * lhs, const beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__action__Distbeagle_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__copy(
  const beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * input,
  beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__action__Distbeagle_GetResult_Request);
    beagle_msgs__action__Distbeagle_GetResult_Request * data =
      (beagle_msgs__action__Distbeagle_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__action__Distbeagle_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__action__Distbeagle_GetResult_Request__fini(&data[i]);
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
    if (!beagle_msgs__action__Distbeagle_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "beagle_msgs/action/detail/distbeagle__functions.h"

bool
beagle_msgs__action__Distbeagle_GetResult_Response__init(beagle_msgs__action__Distbeagle_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!beagle_msgs__action__Distbeagle_Result__init(&msg->result)) {
    beagle_msgs__action__Distbeagle_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
beagle_msgs__action__Distbeagle_GetResult_Response__fini(beagle_msgs__action__Distbeagle_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  beagle_msgs__action__Distbeagle_Result__fini(&msg->result);
}

bool
beagle_msgs__action__Distbeagle_GetResult_Response__are_equal(const beagle_msgs__action__Distbeagle_GetResult_Response * lhs, const beagle_msgs__action__Distbeagle_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!beagle_msgs__action__Distbeagle_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_GetResult_Response__copy(
  const beagle_msgs__action__Distbeagle_GetResult_Response * input,
  beagle_msgs__action__Distbeagle_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!beagle_msgs__action__Distbeagle_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

beagle_msgs__action__Distbeagle_GetResult_Response *
beagle_msgs__action__Distbeagle_GetResult_Response__create()
{
  beagle_msgs__action__Distbeagle_GetResult_Response * msg = (beagle_msgs__action__Distbeagle_GetResult_Response *)malloc(sizeof(beagle_msgs__action__Distbeagle_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__action__Distbeagle_GetResult_Response));
  bool success = beagle_msgs__action__Distbeagle_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__action__Distbeagle_GetResult_Response__destroy(beagle_msgs__action__Distbeagle_GetResult_Response * msg)
{
  if (msg) {
    beagle_msgs__action__Distbeagle_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__init(beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__action__Distbeagle_GetResult_Response * data = NULL;
  if (size) {
    data = (beagle_msgs__action__Distbeagle_GetResult_Response *)calloc(size, sizeof(beagle_msgs__action__Distbeagle_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__action__Distbeagle_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__action__Distbeagle_GetResult_Response__fini(&data[i - 1]);
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
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__fini(beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__action__Distbeagle_GetResult_Response__fini(&array->data[i]);
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

beagle_msgs__action__Distbeagle_GetResult_Response__Sequence *
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__create(size_t size)
{
  beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * array = (beagle_msgs__action__Distbeagle_GetResult_Response__Sequence *)malloc(sizeof(beagle_msgs__action__Distbeagle_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__destroy(beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * array)
{
  if (array) {
    beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__are_equal(const beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * lhs, const beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__action__Distbeagle_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__copy(
  const beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * input,
  beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__action__Distbeagle_GetResult_Response);
    beagle_msgs__action__Distbeagle_GetResult_Response * data =
      (beagle_msgs__action__Distbeagle_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__action__Distbeagle_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__action__Distbeagle_GetResult_Response__fini(&data[i]);
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
    if (!beagle_msgs__action__Distbeagle_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "beagle_msgs/action/detail/distbeagle__functions.h"

bool
beagle_msgs__action__Distbeagle_FeedbackMessage__init(beagle_msgs__action__Distbeagle_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    beagle_msgs__action__Distbeagle_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!beagle_msgs__action__Distbeagle_Feedback__init(&msg->feedback)) {
    beagle_msgs__action__Distbeagle_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
beagle_msgs__action__Distbeagle_FeedbackMessage__fini(beagle_msgs__action__Distbeagle_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  beagle_msgs__action__Distbeagle_Feedback__fini(&msg->feedback);
}

bool
beagle_msgs__action__Distbeagle_FeedbackMessage__are_equal(const beagle_msgs__action__Distbeagle_FeedbackMessage * lhs, const beagle_msgs__action__Distbeagle_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!beagle_msgs__action__Distbeagle_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_FeedbackMessage__copy(
  const beagle_msgs__action__Distbeagle_FeedbackMessage * input,
  beagle_msgs__action__Distbeagle_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!beagle_msgs__action__Distbeagle_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

beagle_msgs__action__Distbeagle_FeedbackMessage *
beagle_msgs__action__Distbeagle_FeedbackMessage__create()
{
  beagle_msgs__action__Distbeagle_FeedbackMessage * msg = (beagle_msgs__action__Distbeagle_FeedbackMessage *)malloc(sizeof(beagle_msgs__action__Distbeagle_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beagle_msgs__action__Distbeagle_FeedbackMessage));
  bool success = beagle_msgs__action__Distbeagle_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
beagle_msgs__action__Distbeagle_FeedbackMessage__destroy(beagle_msgs__action__Distbeagle_FeedbackMessage * msg)
{
  if (msg) {
    beagle_msgs__action__Distbeagle_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__init(beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  beagle_msgs__action__Distbeagle_FeedbackMessage * data = NULL;
  if (size) {
    data = (beagle_msgs__action__Distbeagle_FeedbackMessage *)calloc(size, sizeof(beagle_msgs__action__Distbeagle_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beagle_msgs__action__Distbeagle_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beagle_msgs__action__Distbeagle_FeedbackMessage__fini(&data[i - 1]);
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
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__fini(beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beagle_msgs__action__Distbeagle_FeedbackMessage__fini(&array->data[i]);
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

beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence *
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__create(size_t size)
{
  beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * array = (beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence *)malloc(sizeof(beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__destroy(beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * array)
{
  if (array) {
    beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__are_equal(const beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * lhs, const beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beagle_msgs__action__Distbeagle_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__copy(
  const beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * input,
  beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beagle_msgs__action__Distbeagle_FeedbackMessage);
    beagle_msgs__action__Distbeagle_FeedbackMessage * data =
      (beagle_msgs__action__Distbeagle_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beagle_msgs__action__Distbeagle_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beagle_msgs__action__Distbeagle_FeedbackMessage__fini(&data[i]);
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
    if (!beagle_msgs__action__Distbeagle_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
