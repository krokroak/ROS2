// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from beagle_msgs:action/Distbeagle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"
#include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "beagle_msgs/action/detail/distbeagle__functions.h"
#include "beagle_msgs/action/detail/distbeagle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__action__Distbeagle_Goal__init(message_memory);
}

void Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_fini_function(void * message_memory)
{
  beagle_msgs__action__Distbeagle_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_message_member_array[3] = {
  {
    "lidar_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_Goal, lidar_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plus_arrow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_Goal, plus_arrow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "minus_arrow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_Goal, minus_arrow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_message_members = {
  "beagle_msgs__action",  // message namespace
  "Distbeagle_Goal",  // message name
  3,  // number of fields
  sizeof(beagle_msgs__action__Distbeagle_Goal),
  Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_message_member_array,  // message members
  Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_message_type_support_handle = {
  0,
  &Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_Goal)() {
  if (!Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_message_type_support_handle.typesupport_identifier) {
    Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Distbeagle_Goal__rosidl_typesupport_introspection_c__Distbeagle_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__functions.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__action__Distbeagle_Result__init(message_memory);
}

void Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_fini_function(void * message_memory)
{
  beagle_msgs__action__Distbeagle_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_message_member_array[2] = {
  {
    "count_node_bot_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_Result, count_node_bot_1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "count_node_bot_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_Result, count_node_bot_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_message_members = {
  "beagle_msgs__action",  // message namespace
  "Distbeagle_Result",  // message name
  2,  // number of fields
  sizeof(beagle_msgs__action__Distbeagle_Result),
  Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_message_member_array,  // message members
  Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_message_type_support_handle = {
  0,
  &Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_Result)() {
  if (!Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_message_type_support_handle.typesupport_identifier) {
    Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Distbeagle_Result__rosidl_typesupport_introspection_c__Distbeagle_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__functions.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__action__Distbeagle_Feedback__init(message_memory);
}

void Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_fini_function(void * message_memory)
{
  beagle_msgs__action__Distbeagle_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_message_member_array[1] = {
  {
    "between_beagle12",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_Feedback, between_beagle12),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_message_members = {
  "beagle_msgs__action",  // message namespace
  "Distbeagle_Feedback",  // message name
  1,  // number of fields
  sizeof(beagle_msgs__action__Distbeagle_Feedback),
  Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_message_member_array,  // message members
  Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_message_type_support_handle = {
  0,
  &Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_Feedback)() {
  if (!Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_message_type_support_handle.typesupport_identifier) {
    Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Distbeagle_Feedback__rosidl_typesupport_introspection_c__Distbeagle_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__functions.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "beagle_msgs/action/distbeagle.h"
// Member `goal`
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__action__Distbeagle_SendGoal_Request__init(message_memory);
}

void Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_fini_function(void * message_memory)
{
  beagle_msgs__action__Distbeagle_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_message_members = {
  "beagle_msgs__action",  // message namespace
  "Distbeagle_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(beagle_msgs__action__Distbeagle_SendGoal_Request),
  Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_message_member_array,  // message members
  Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_message_type_support_handle = {
  0,
  &Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_SendGoal_Request)() {
  Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_Goal)();
  if (!Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Distbeagle_SendGoal_Request__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__functions.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__action__Distbeagle_SendGoal_Response__init(message_memory);
}

void Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_fini_function(void * message_memory)
{
  beagle_msgs__action__Distbeagle_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_message_members = {
  "beagle_msgs__action",  // message namespace
  "Distbeagle_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(beagle_msgs__action__Distbeagle_SendGoal_Response),
  Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_message_member_array,  // message members
  Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_message_type_support_handle = {
  0,
  &Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_SendGoal_Response)() {
  Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Distbeagle_SendGoal_Response__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_service_members = {
  "beagle_msgs__action",  // service namespace
  "Distbeagle_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_service_type_support_handle = {
  0,
  &beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_SendGoal)() {
  if (!beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_service_type_support_handle.typesupport_identifier) {
    beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_SendGoal_Response)()->data;
  }

  return &beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__functions.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__action__Distbeagle_GetResult_Request__init(message_memory);
}

void Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_fini_function(void * message_memory)
{
  beagle_msgs__action__Distbeagle_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_message_members = {
  "beagle_msgs__action",  // message namespace
  "Distbeagle_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(beagle_msgs__action__Distbeagle_GetResult_Request),
  Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_message_member_array,  // message members
  Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_message_type_support_handle = {
  0,
  &Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_GetResult_Request)() {
  Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Distbeagle_GetResult_Request__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__functions.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "beagle_msgs/action/distbeagle.h"
// Member `result`
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__action__Distbeagle_GetResult_Response__init(message_memory);
}

void Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_fini_function(void * message_memory)
{
  beagle_msgs__action__Distbeagle_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_message_members = {
  "beagle_msgs__action",  // message namespace
  "Distbeagle_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(beagle_msgs__action__Distbeagle_GetResult_Response),
  Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_message_member_array,  // message members
  Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_message_type_support_handle = {
  0,
  &Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_GetResult_Response)() {
  Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_Result)();
  if (!Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Distbeagle_GetResult_Response__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_GetResult_service_members = {
  "beagle_msgs__action",  // service namespace
  "Distbeagle_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_GetResult_service_type_support_handle = {
  0,
  &beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_GetResult)() {
  if (!beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_GetResult_service_type_support_handle.typesupport_identifier) {
    beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_GetResult_Response)()->data;
  }

  return &beagle_msgs__action__detail__distbeagle__rosidl_typesupport_introspection_c__Distbeagle_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__functions.h"
// already included above
// #include "beagle_msgs/action/detail/distbeagle__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "beagle_msgs/action/distbeagle.h"
// Member `feedback`
// already included above
// #include "beagle_msgs/action/detail/distbeagle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__action__Distbeagle_FeedbackMessage__init(message_memory);
}

void Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_fini_function(void * message_memory)
{
  beagle_msgs__action__Distbeagle_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__action__Distbeagle_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_message_members = {
  "beagle_msgs__action",  // message namespace
  "Distbeagle_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(beagle_msgs__action__Distbeagle_FeedbackMessage),
  Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_message_member_array,  // message members
  Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_message_type_support_handle = {
  0,
  &Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_FeedbackMessage)() {
  Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, action, Distbeagle_Feedback)();
  if (!Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Distbeagle_FeedbackMessage__rosidl_typesupport_introspection_c__Distbeagle_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
