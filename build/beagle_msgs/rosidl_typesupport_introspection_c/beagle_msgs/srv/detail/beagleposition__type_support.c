// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from beagle_msgs:srv/Beagleposition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "beagle_msgs/srv/detail/beagleposition__rosidl_typesupport_introspection_c.h"
#include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "beagle_msgs/srv/detail/beagleposition__functions.h"
#include "beagle_msgs/srv/detail/beagleposition__struct.h"


// Include directives for member types
// Member `dice_label`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__srv__Beagleposition_Request__init(message_memory);
}

void Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_fini_function(void * message_memory)
{
  beagle_msgs__srv__Beagleposition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_message_member_array[3] = {
  {
    "dice_label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__srv__Beagleposition_Request, dice_label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "user_fir",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__srv__Beagleposition_Request, user_fir),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "user_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__srv__Beagleposition_Request, user_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_message_members = {
  "beagle_msgs__srv",  // message namespace
  "Beagleposition_Request",  // message name
  3,  // number of fields
  sizeof(beagle_msgs__srv__Beagleposition_Request),
  Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_message_member_array,  // message members
  Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_message_type_support_handle = {
  0,
  &Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, srv, Beagleposition_Request)() {
  if (!Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_message_type_support_handle.typesupport_identifier) {
    Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Beagleposition_Request__rosidl_typesupport_introspection_c__Beagleposition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "beagle_msgs/srv/detail/beagleposition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "beagle_msgs/srv/detail/beagleposition__functions.h"
// already included above
// #include "beagle_msgs/srv/detail/beagleposition__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  beagle_msgs__srv__Beagleposition_Response__init(message_memory);
}

void Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_fini_function(void * message_memory)
{
  beagle_msgs__srv__Beagleposition_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_message_member_array[3] = {
  {
    "move_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__srv__Beagleposition_Response, move_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beagle_event",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__srv__Beagleposition_Response, beagle_event),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beagle_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(beagle_msgs__srv__Beagleposition_Response, beagle_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_message_members = {
  "beagle_msgs__srv",  // message namespace
  "Beagleposition_Response",  // message name
  3,  // number of fields
  sizeof(beagle_msgs__srv__Beagleposition_Response),
  Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_message_member_array,  // message members
  Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_message_type_support_handle = {
  0,
  &Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, srv, Beagleposition_Response)() {
  if (!Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_message_type_support_handle.typesupport_identifier) {
    Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Beagleposition_Response__rosidl_typesupport_introspection_c__Beagleposition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "beagle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "beagle_msgs/srv/detail/beagleposition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers beagle_msgs__srv__detail__beagleposition__rosidl_typesupport_introspection_c__Beagleposition_service_members = {
  "beagle_msgs__srv",  // service namespace
  "Beagleposition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // beagle_msgs__srv__detail__beagleposition__rosidl_typesupport_introspection_c__Beagleposition_Request_message_type_support_handle,
  NULL  // response message
  // beagle_msgs__srv__detail__beagleposition__rosidl_typesupport_introspection_c__Beagleposition_Response_message_type_support_handle
};

static rosidl_service_type_support_t beagle_msgs__srv__detail__beagleposition__rosidl_typesupport_introspection_c__Beagleposition_service_type_support_handle = {
  0,
  &beagle_msgs__srv__detail__beagleposition__rosidl_typesupport_introspection_c__Beagleposition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, srv, Beagleposition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, srv, Beagleposition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_beagle_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, srv, Beagleposition)() {
  if (!beagle_msgs__srv__detail__beagleposition__rosidl_typesupport_introspection_c__Beagleposition_service_type_support_handle.typesupport_identifier) {
    beagle_msgs__srv__detail__beagleposition__rosidl_typesupport_introspection_c__Beagleposition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)beagle_msgs__srv__detail__beagleposition__rosidl_typesupport_introspection_c__Beagleposition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, srv, Beagleposition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, beagle_msgs, srv, Beagleposition_Response)()->data;
  }

  return &beagle_msgs__srv__detail__beagleposition__rosidl_typesupport_introspection_c__Beagleposition_service_type_support_handle;
}
