// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from beagle_msgs:srv/Beagleposition.idl
// generated code does not contain a copyright notice
#include "beagle_msgs/srv/detail/beagleposition__rosidl_typesupport_fastrtps_cpp.hpp"
#include "beagle_msgs/srv/detail/beagleposition__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
cdr_serialize(
  const beagle_msgs::srv::Beagleposition_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dice_label
  cdr << ros_message.dice_label;
  // Member: user_fir
  cdr << ros_message.user_fir;
  // Member: user_sec
  cdr << ros_message.user_sec;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  beagle_msgs::srv::Beagleposition_Request & ros_message)
{
  // Member: dice_label
  cdr >> ros_message.dice_label;

  // Member: user_fir
  cdr >> ros_message.user_fir;

  // Member: user_sec
  cdr >> ros_message.user_sec;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
get_serialized_size(
  const beagle_msgs::srv::Beagleposition_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dice_label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.dice_label.size() + 1);
  // Member: user_fir
  {
    size_t item_size = sizeof(ros_message.user_fir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: user_sec
  {
    size_t item_size = sizeof(ros_message.user_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
max_serialized_size_Beagleposition_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: dice_label
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: user_fir
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: user_sec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Beagleposition_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const beagle_msgs::srv::Beagleposition_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Beagleposition_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<beagle_msgs::srv::Beagleposition_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Beagleposition_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const beagle_msgs::srv::Beagleposition_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Beagleposition_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Beagleposition_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Beagleposition_Request__callbacks = {
  "beagle_msgs::srv",
  "Beagleposition_Request",
  _Beagleposition_Request__cdr_serialize,
  _Beagleposition_Request__cdr_deserialize,
  _Beagleposition_Request__get_serialized_size,
  _Beagleposition_Request__max_serialized_size
};

static rosidl_message_type_support_t _Beagleposition_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Beagleposition_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace beagle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<beagle_msgs::srv::Beagleposition_Request>()
{
  return &beagle_msgs::srv::typesupport_fastrtps_cpp::_Beagleposition_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beagle_msgs, srv, Beagleposition_Request)() {
  return &beagle_msgs::srv::typesupport_fastrtps_cpp::_Beagleposition_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace beagle_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
cdr_serialize(
  const beagle_msgs::srv::Beagleposition_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: move_point
  cdr << ros_message.move_point;
  // Member: beagle_event
  cdr << ros_message.beagle_event;
  // Member: beagle_position
  cdr << ros_message.beagle_position;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  beagle_msgs::srv::Beagleposition_Response & ros_message)
{
  // Member: move_point
  cdr >> ros_message.move_point;

  // Member: beagle_event
  cdr >> ros_message.beagle_event;

  // Member: beagle_position
  cdr >> ros_message.beagle_position;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
get_serialized_size(
  const beagle_msgs::srv::Beagleposition_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: move_point
  {
    size_t item_size = sizeof(ros_message.move_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beagle_event
  {
    size_t item_size = sizeof(ros_message.beagle_event);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beagle_position
  {
    size_t item_size = sizeof(ros_message.beagle_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_beagle_msgs
max_serialized_size_Beagleposition_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: move_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: beagle_event
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: beagle_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Beagleposition_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const beagle_msgs::srv::Beagleposition_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Beagleposition_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<beagle_msgs::srv::Beagleposition_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Beagleposition_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const beagle_msgs::srv::Beagleposition_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Beagleposition_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Beagleposition_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Beagleposition_Response__callbacks = {
  "beagle_msgs::srv",
  "Beagleposition_Response",
  _Beagleposition_Response__cdr_serialize,
  _Beagleposition_Response__cdr_deserialize,
  _Beagleposition_Response__get_serialized_size,
  _Beagleposition_Response__max_serialized_size
};

static rosidl_message_type_support_t _Beagleposition_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Beagleposition_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace beagle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<beagle_msgs::srv::Beagleposition_Response>()
{
  return &beagle_msgs::srv::typesupport_fastrtps_cpp::_Beagleposition_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beagle_msgs, srv, Beagleposition_Response)() {
  return &beagle_msgs::srv::typesupport_fastrtps_cpp::_Beagleposition_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace beagle_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Beagleposition__callbacks = {
  "beagle_msgs::srv",
  "Beagleposition",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beagle_msgs, srv, Beagleposition_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beagle_msgs, srv, Beagleposition_Response)(),
};

static rosidl_service_type_support_t _Beagleposition__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Beagleposition__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace beagle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_beagle_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<beagle_msgs::srv::Beagleposition>()
{
  return &beagle_msgs::srv::typesupport_fastrtps_cpp::_Beagleposition__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, beagle_msgs, srv, Beagleposition)() {
  return &beagle_msgs::srv::typesupport_fastrtps_cpp::_Beagleposition__handle;
}

#ifdef __cplusplus
}
#endif
