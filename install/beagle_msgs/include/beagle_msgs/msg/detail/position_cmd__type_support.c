// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from beagle_msgs:msg/PositionCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "beagle_msgs/msg/detail/position_cmd__rosidl_typesupport_introspection_c.h"
#include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "beagle_msgs/msg/detail/position_cmd__functions.h"
#include "beagle_msgs/msg/detail/position_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__msg__PositionCmd__init(message_memory);
}

void PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_fini_function(void * message_memory)
{
  beagle_msgs__msg__PositionCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_message_member_array[3] = {
  {
    "linecount",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__msg__PositionCmd, linecount),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movecount",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__msg__PositionCmd, movecount),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodecount",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__msg__PositionCmd, nodecount),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_message_members = {
  "beagle_msgs__msg",  // message namespace
  "PositionCmd",  // message name
  3,  // number of fields
  sizeof(beagle_msgs__msg__PositionCmd),
  PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_message_member_array,  // message members
  PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_message_type_support_handle = {
  0,
  &PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, msg, PositionCmd)() {
  if (!PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_message_type_support_handle.typesupport_identifier) {
    PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PositionCmd__rosidl_typesupport_introspection_c__PositionCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
