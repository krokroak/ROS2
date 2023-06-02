// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beagle_msgs:msg/PositionCmd.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__MSG__DETAIL__POSITION_CMD__STRUCT_H_
#define BEAGLE_MSGS__MSG__DETAIL__POSITION_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PositionCmd in the package beagle_msgs.
typedef struct beagle_msgs__msg__PositionCmd
{
  float linecount;
  float movecount;
  float nodecount;
} beagle_msgs__msg__PositionCmd;

// Struct for a sequence of beagle_msgs__msg__PositionCmd.
typedef struct beagle_msgs__msg__PositionCmd__Sequence
{
  beagle_msgs__msg__PositionCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__msg__PositionCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEAGLE_MSGS__MSG__DETAIL__POSITION_CMD__STRUCT_H_
