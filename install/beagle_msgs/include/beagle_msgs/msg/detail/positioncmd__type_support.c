// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from beagle_msgs:msg/Positioncmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "beagle_msgs/msg/detail/positioncmd__rosidl_typesupport_introspection_c.h"
#include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "beagle_msgs/msg/detail/positioncmd__functions.h"
#include "beagle_msgs/msg/detail/positioncmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__msg__Positioncmd__init(message_memory);
}

void Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_fini_function(void * message_memory)
{
  beagle_msgs__msg__Positioncmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_message_member_array[3] = {
  {
    "linecount",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__msg__Positioncmd, linecount),  // bytes offset in struct
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
    offsetof(beagle_msgs__msg__Positioncmd, movecount),  // bytes offset in struct
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
    offsetof(beagle_msgs__msg__Positioncmd, nodecount),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_message_members = {
  "beagle_msgs__msg",  // message namespace
  "Positioncmd",  // message name
  3,  // number of fields
  sizeof(beagle_msgs__msg__Positioncmd),
  Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_message_member_array,  // message members
  Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_init_function,  // function to initialize message memory (memory has to be allocated)
  Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_message_type_support_handle = {
  0,
  &Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, msg, Positioncmd)() {
  if (!Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_message_type_support_handle.typesupport_identifier) {
    Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Positioncmd__rosidl_typesupport_introspection_c__Positioncmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
