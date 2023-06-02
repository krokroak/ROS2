// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from beagle_msgs:msg/CmdAndPoseVel.idl
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
#include "beagle_msgs/msg/detail/cmd_and_pose_vel__struct.h"
#include "beagle_msgs/msg/detail/cmd_and_pose_vel__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool beagle_msgs__msg__cmd_and_pose_vel__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("beagle_msgs.msg._cmd_and_pose_vel.CmdAndPoseVel", full_classname_dest, 47) == 0);
  }
  beagle_msgs__msg__CmdAndPoseVel * ros_message = _ros_message;
  {  // linecount
    PyObject * field = PyObject_GetAttrString(_pymsg, "linecount");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->linecount = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // movecount
    PyObject * field = PyObject_GetAttrString(_pymsg, "movecount");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->movecount = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nodecount
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodecount");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nodecount = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * beagle_msgs__msg__cmd_and_pose_vel__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CmdAndPoseVel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("beagle_msgs.msg._cmd_and_pose_vel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CmdAndPoseVel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  beagle_msgs__msg__CmdAndPoseVel * ros_message = (beagle_msgs__msg__CmdAndPoseVel *)raw_ros_message;
  {  // linecount
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->linecount);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linecount", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // movecount
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->movecount);
    {
      int rc = PyObject_SetAttrString(_pymessage, "movecount", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodecount
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nodecount);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodecount", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
