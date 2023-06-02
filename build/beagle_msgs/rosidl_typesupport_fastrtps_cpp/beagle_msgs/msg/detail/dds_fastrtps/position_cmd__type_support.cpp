// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from beagle_msgs:msg/PositionCmd.idl
// generated code does not contain a copyright notice
#include "beagle_msgs/msg/detail/position_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "beagle_msgs/msg/detail/position_cmd__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace beagle_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
cdr_serialize(
  const beagle_msgs::msg::PositionCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: linecount
  cdr << ros_message.linecount;
  // Member: movecount
  cdr << ros_message.movecount;
  // Member: nodecount
  cdr << ros_message.nodecount;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  beagle_msgs::msg::PositionCmd & ros_message)
{
  // Member: linecount
  cdr >> ros_message.linecount;

  // Member: movecount
  cdr >> ros_message.movecount;

  // Member: nodecount
  cdr >> ros_message.nodecount;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
get_serialized_size(
  const beagle_msgs::msg::PositionCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: linecount
  {
    size_t item_size = sizeof(ros_message.linecount);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: movecount
  {
    size_t item_size = sizeof(ros_message.movecount);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nodecount
  {
    size_t item_size = sizeof(ros_message.nodecount);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
max_serialized_size_PositionCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: linecount
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: movecount
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: nodecount
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PositionCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const beagle_msgs::msg::PositionCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PositionCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<beagle_msgs::msg::PositionCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PositionCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const beagle_msgs::msg::PositionCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PositionCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PositionCmd(full_bounded, 0);
}

static message_type_support_callbacks_t _PositionCmd__callbacks = {
  "beagle_msgs::msg",
  "PositionCmd",
  _PositionCmd__cdr_serialize,
  _PositionCmd__cdr_deserialize,
  _PositionCmd__get_serialized_size,
  _PositionCmd__max_serialized_size
};

static rosidl_message_type_support_t _PositionCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PositionCmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace beagle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<beagle_msgs::msg::PositionCmd>()
{
  return &beagle_msgs::msg::typesupport_fastrtps_cpp::_PositionCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beagle_msgs, msg, PositionCmd)() {
  return &beagle_msgs::msg::typesupport_fastrtps_cpp::_PositionCmd__handle;
}

#ifdef __cplusplus
}
#endif
