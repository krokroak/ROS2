// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beagle_msgs:srv/Beagleposition.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__STRUCT_H_
#define BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dice_label'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Beagleposition in the package beagle_msgs.
typedef struct beagle_msgs__srv__Beagleposition_Request
{
  rosidl_runtime_c__String dice_label;
  int64_t user_fir;
  int64_t user_sec;
} beagle_msgs__srv__Beagleposition_Request;

// Struct for a sequence of beagle_msgs__srv__Beagleposition_Request.
typedef struct beagle_msgs__srv__Beagleposition_Request__Sequence
{
  beagle_msgs__srv__Beagleposition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__srv__Beagleposition_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Beagleposition in the package beagle_msgs.
typedef struct beagle_msgs__srv__Beagleposition_Response
{
  int64_t move_point;
  int32_t beagle_event;
  int32_t beagle_position;
} beagle_msgs__srv__Beagleposition_Response;

// Struct for a sequence of beagle_msgs__srv__Beagleposition_Response.
typedef struct beagle_msgs__srv__Beagleposition_Response__Sequence
{
  beagle_msgs__srv__Beagleposition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__srv__Beagleposition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__STRUCT_H_
