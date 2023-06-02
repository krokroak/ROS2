// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from beagle_msgs:msg/CmdAndPoseVel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "beagle_msgs/msg/detail/cmd_and_pose_vel__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace beagle_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CmdAndPoseVel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) beagle_msgs::msg::CmdAndPoseVel(_init);
}

void CmdAndPoseVel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<beagle_msgs::msg::CmdAndPoseVel *>(message_memory);
  typed_message->~CmdAndPoseVel();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CmdAndPoseVel_message_member_array[3] = {
  {
    "linecount",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs::msg::CmdAndPoseVel, linecount),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "movecount",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs::msg::CmdAndPoseVel, movecount),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nodecount",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs::msg::CmdAndPoseVel, nodecount),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CmdAndPoseVel_message_members = {
  "beagle_msgs::msg",  // message namespace
  "CmdAndPoseVel",  // message name
  3,  // number of fields
  sizeof(beagle_msgs::msg::CmdAndPoseVel),
  CmdAndPoseVel_message_member_array,  // message members
  CmdAndPoseVel_init_function,  // function to initialize message memory (memory has to be allocated)
  CmdAndPoseVel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CmdAndPoseVel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CmdAndPoseVel_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace beagle_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<beagle_msgs::msg::CmdAndPoseVel>()
{
  return &::beagle_msgs::msg::rosidl_typesupport_introspection_cpp::CmdAndPoseVel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, beagle_msgs, msg, CmdAndPoseVel)() {
  return &::beagle_msgs::msg::rosidl_typesupport_introspection_cpp::CmdAndPoseVel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
