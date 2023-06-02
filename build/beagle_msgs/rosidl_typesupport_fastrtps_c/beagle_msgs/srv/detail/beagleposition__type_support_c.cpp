// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from beagle_msgs:srv/Beagleposition.idl
// generated code does not contain a copyright notice
#include "beagle_msgs/srv/detail/beagleposition__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "beagle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "beagle_msgs/srv/detail/beagleposition__struct.h"
#include "beagle_msgs/srv/detail/beagleposition__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // dice_label
#include "rosidl_runtime_c/string_functions.h"  // dice_label

// forward declare type support functions


using _Beagleposition_Request__ros_msg_type = beagle_msgs__srv__Beagleposition_Request;

static bool _Beagleposition_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Beagleposition_Request__ros_msg_type * ros_message = static_cast<const _Beagleposition_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: dice_label
  {
    const rosidl_runtime_c__String * str = &ros_message->dice_label;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: user_fir
  {
    cdr << ros_message->user_fir;
  }

  // Field name: user_sec
  {
    cdr << ros_message->user_sec;
  }

  return true;
}

static bool _Beagleposition_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Beagleposition_Request__ros_msg_type * ros_message = static_cast<_Beagleposition_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: dice_label
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->dice_label.data) {
      rosidl_runtime_c__String__init(&ros_message->dice_label);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->dice_label,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'dice_label'\n");
      return false;
    }
  }

  // Field name: user_fir
  {
    cdr >> ros_message->user_fir;
  }

  // Field name: user_sec
  {
    cdr >> ros_message->user_sec;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_beagle_msgs
size_t get_serialized_size_beagle_msgs__srv__Beagleposition_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Beagleposition_Request__ros_msg_type * ros_message = static_cast<const _Beagleposition_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name dice_label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->dice_label.size + 1);
  // field.name user_fir
  {
    size_t item_size = sizeof(ros_message->user_fir);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name user_sec
  {
    size_t item_size = sizeof(ros_message->user_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Beagleposition_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_beagle_msgs__srv__Beagleposition_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_beagle_msgs
size_t max_serialized_size_beagle_msgs__srv__Beagleposition_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: dice_label
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: user_fir
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: user_sec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Beagleposition_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_beagle_msgs__srv__Beagleposition_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Beagleposition_Request = {
  "beagle_msgs::srv",
  "Beagleposition_Request",
  _Beagleposition_Request__cdr_serialize,
  _Beagleposition_Request__cdr_deserialize,
  _Beagleposition_Request__get_serialized_size,
  _Beagleposition_Request__max_serialized_size
};

static rosidl_message_type_support_t _Beagleposition_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Beagleposition_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, beagle_msgs, srv, Beagleposition_Request)() {
  return &_Beagleposition_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "beagle_msgs/srv/detail/beagleposition__struct.h"
// already included above
// #include "beagle_msgs/srv/detail/beagleposition__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Beagleposition_Response__ros_msg_type = beagle_msgs__srv__Beagleposition_Response;

static bool _Beagleposition_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Beagleposition_Response__ros_msg_type * ros_message = static_cast<const _Beagleposition_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: move_point
  {
    cdr << ros_message->move_point;
  }

  // Field name: beagle_event
  {
    cdr << ros_message->beagle_event;
  }

  // Field name: beagle_position
  {
    cdr << ros_message->beagle_position;
  }

  return true;
}

static bool _Beagleposition_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Beagleposition_Response__ros_msg_type * ros_message = static_cast<_Beagleposition_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: move_point
  {
    cdr >> ros_message->move_point;
  }

  // Field name: beagle_event
  {
    cdr >> ros_message->beagle_event;
  }

  // Field name: beagle_position
  {
    cdr >> ros_message->beagle_position;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_beagle_msgs
size_t get_serialized_size_beagle_msgs__srv__Beagleposition_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Beagleposition_Response__ros_msg_type * ros_message = static_cast<const _Beagleposition_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name move_point
  {
    size_t item_size = sizeof(ros_message->move_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beagle_event
  {
    size_t item_size = sizeof(ros_message->beagle_event);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beagle_position
  {
    size_t item_size = sizeof(ros_message->beagle_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Beagleposition_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_beagle_msgs__srv__Beagleposition_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_beagle_msgs
size_t max_serialized_size_beagle_msgs__srv__Beagleposition_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: move_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: beagle_event
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: beagle_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Beagleposition_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_beagle_msgs__srv__Beagleposition_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Beagleposition_Response = {
  "beagle_msgs::srv",
  "Beagleposition_Response",
  _Beagleposition_Response__cdr_serialize,
  _Beagleposition_Response__cdr_deserialize,
  _Beagleposition_Response__get_serialized_size,
  _Beagleposition_Response__max_serialized_size
};

static rosidl_message_type_support_t _Beagleposition_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Beagleposition_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, beagle_msgs, srv, Beagleposition_Response)() {
  return &_Beagleposition_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "beagle_msgs/srv/beagleposition.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Beagleposition__callbacks = {
  "beagle_msgs::srv",
  "Beagleposition",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, beagle_msgs, srv, Beagleposition_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, beagle_msgs, srv, Beagleposition_Response)(),
};

static rosidl_service_type_support_t Beagleposition__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Beagleposition__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, beagle_msgs, srv, Beagleposition)() {
  return &Beagleposition__handle;
}

#if defined(__cplusplus)
}
#endif
