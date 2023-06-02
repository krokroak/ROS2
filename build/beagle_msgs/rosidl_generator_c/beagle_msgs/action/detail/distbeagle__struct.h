// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beagle_msgs:action/Distbeagle.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__STRUCT_H_
#define BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Distbeagle in the package beagle_msgs.
typedef struct beagle_msgs__action__Distbeagle_Goal
{
  float lidar_dist;
  int32_t plus_arrow;
  int32_t minus_arrow;
} beagle_msgs__action__Distbeagle_Goal;

// Struct for a sequence of beagle_msgs__action__Distbeagle_Goal.
typedef struct beagle_msgs__action__Distbeagle_Goal__Sequence
{
  beagle_msgs__action__Distbeagle_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__action__Distbeagle_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Distbeagle in the package beagle_msgs.
typedef struct beagle_msgs__action__Distbeagle_Result
{
  int32_t count_node_bot_1;
  int32_t count_node_bot_2;
} beagle_msgs__action__Distbeagle_Result;

// Struct for a sequence of beagle_msgs__action__Distbeagle_Result.
typedef struct beagle_msgs__action__Distbeagle_Result__Sequence
{
  beagle_msgs__action__Distbeagle_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__action__Distbeagle_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Distbeagle in the package beagle_msgs.
typedef struct beagle_msgs__action__Distbeagle_Feedback
{
  int32_t between_beagle12;
} beagle_msgs__action__Distbeagle_Feedback;

// Struct for a sequence of beagle_msgs__action__Distbeagle_Feedback.
typedef struct beagle_msgs__action__Distbeagle_Feedback__Sequence
{
  beagle_msgs__action__Distbeagle_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__action__Distbeagle_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "beagle_msgs/action/detail/distbeagle__struct.h"

// Struct defined in action/Distbeagle in the package beagle_msgs.
typedef struct beagle_msgs__action__Distbeagle_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  beagle_msgs__action__Distbeagle_Goal goal;
} beagle_msgs__action__Distbeagle_SendGoal_Request;

// Struct for a sequence of beagle_msgs__action__Distbeagle_SendGoal_Request.
typedef struct beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence
{
  beagle_msgs__action__Distbeagle_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Distbeagle in the package beagle_msgs.
typedef struct beagle_msgs__action__Distbeagle_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} beagle_msgs__action__Distbeagle_SendGoal_Response;

// Struct for a sequence of beagle_msgs__action__Distbeagle_SendGoal_Response.
typedef struct beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence
{
  beagle_msgs__action__Distbeagle_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Distbeagle in the package beagle_msgs.
typedef struct beagle_msgs__action__Distbeagle_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} beagle_msgs__action__Distbeagle_GetResult_Request;

// Struct for a sequence of beagle_msgs__action__Distbeagle_GetResult_Request.
typedef struct beagle_msgs__action__Distbeagle_GetResult_Request__Sequence
{
  beagle_msgs__action__Distbeagle_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__action__Distbeagle_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "beagle_msgs/action/detail/distbeagle__struct.h"

// Struct defined in action/Distbeagle in the package beagle_msgs.
typedef struct beagle_msgs__action__Distbeagle_GetResult_Response
{
  int8_t status;
  beagle_msgs__action__Distbeagle_Result result;
} beagle_msgs__action__Distbeagle_GetResult_Response;

// Struct for a sequence of beagle_msgs__action__Distbeagle_GetResult_Response.
typedef struct beagle_msgs__action__Distbeagle_GetResult_Response__Sequence
{
  beagle_msgs__action__Distbeagle_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__action__Distbeagle_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "beagle_msgs/action/detail/distbeagle__struct.h"

// Struct defined in action/Distbeagle in the package beagle_msgs.
typedef struct beagle_msgs__action__Distbeagle_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  beagle_msgs__action__Distbeagle_Feedback feedback;
} beagle_msgs__action__Distbeagle_FeedbackMessage;

// Struct for a sequence of beagle_msgs__action__Distbeagle_FeedbackMessage.
typedef struct beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence
{
  beagle_msgs__action__Distbeagle_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__STRUCT_H_
