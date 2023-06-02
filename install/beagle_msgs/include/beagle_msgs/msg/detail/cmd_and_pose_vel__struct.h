// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beagle_msgs:msg/CmdAndPoseVel.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__STRUCT_H_
#define BEAGLE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CmdAndPoseVel in the package beagle_msgs.
typedef struct beagle_msgs__msg__CmdAndPoseVel
{
  float linecount;
  float movecount;
  float nodecount;
} beagle_msgs__msg__CmdAndPoseVel;

// Struct for a sequence of beagle_msgs__msg__CmdAndPoseVel.
typedef struct beagle_msgs__msg__CmdAndPoseVel__Sequence
{
  beagle_msgs__msg__CmdAndPoseVel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__msg__CmdAndPoseVel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEAGLE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__STRUCT_H_
