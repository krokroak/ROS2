// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from beagle_msgs:srv/Beagleposition.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "beagle_msgs/srv/detail/beagleposition__struct.h"
#include "beagle_msgs/srv/detail/beagleposition__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool beagle_msgs__srv__beagleposition__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("beagle_msgs.srv._beagleposition.Beagleposition_Request", full_classname_dest, 54) == 0);
  }
  beagle_msgs__srv__Beagleposition_Request * ros_message = _ros_message;
  {  // dice_label
    PyObject * field = PyObject_GetAttrString(_pymsg, "dice_label");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->dice_label, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // user_fir
    PyObject * field = PyObject_GetAttrString(_pymsg, "user_fir");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->user_fir = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // user_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "user_sec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->user_sec = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * beagle_msgs__srv__beagleposition__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Beagleposition_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("beagle_msgs.srv._beagleposition");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Beagleposition_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  beagle_msgs__srv__Beagleposition_Request * ros_message = (beagle_msgs__srv__Beagleposition_Request *)raw_ros_message;
  {  // dice_label
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->dice_label.data,
      strlen(ros_message->dice_label.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dice_label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user_fir
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->user_fir);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user_fir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // user_sec
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->user_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "user_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "beagle_msgs/srv/detail/beagleposition__struct.h"
// already included above
// #include "beagle_msgs/srv/detail/beagleposition__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool beagle_msgs__srv__beagleposition__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("beagle_msgs.srv._beagleposition.Beagleposition_Response", full_classname_dest, 55) == 0);
  }
  beagle_msgs__srv__Beagleposition_Response * ros_message = _ros_message;
  {  // move_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_point");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->move_point = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // beagle_event
    PyObject * field = PyObject_GetAttrString(_pymsg, "beagle_event");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->beagle_event = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // beagle_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "beagle_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->beagle_position = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * beagle_msgs__srv__beagleposition__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Beagleposition_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("beagle_msgs.srv._beagleposition");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Beagleposition_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  beagle_msgs__srv__Beagleposition_Response * ros_message = (beagle_msgs__srv__Beagleposition_Response *)raw_ros_message;
  {  // move_point
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->move_point);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beagle_event
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->beagle_event);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beagle_event", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beagle_position
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->beagle_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beagle_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
