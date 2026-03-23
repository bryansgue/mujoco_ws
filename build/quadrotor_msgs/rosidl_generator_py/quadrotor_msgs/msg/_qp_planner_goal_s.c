// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from quadrotor_msgs:msg/QpPlannerGoal.idl
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
#include "quadrotor_msgs/msg/detail/qp_planner_goal__struct.h"
#include "quadrotor_msgs/msg/detail/qp_planner_goal__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool nav_msgs__msg__path__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_msgs__msg__path__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__duration__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__duration__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool quadrotor_msgs__msg__qp_planner_goal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("quadrotor_msgs.msg._qp_planner_goal.QpPlannerGoal", full_classname_dest, 49) == 0);
  }
  quadrotor_msgs__msg__QpPlannerGoal * ros_message = _ros_message;
  {  // bern_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "bern_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bern_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // perching
    PyObject * field = PyObject_GetAttrString(_pymsg, "perching");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->perching = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_v = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // future_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "future_point");
    if (!field) {
      return false;
    }
    if (!nav_msgs__msg__path__convert_from_py(field, &ros_message->future_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__duration__convert_from_py(field, &ros_message->duration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * quadrotor_msgs__msg__qp_planner_goal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of QpPlannerGoal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("quadrotor_msgs.msg._qp_planner_goal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "QpPlannerGoal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  quadrotor_msgs__msg__QpPlannerGoal * ros_message = (quadrotor_msgs__msg__QpPlannerGoal *)raw_ros_message;
  {  // bern_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bern_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bern_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // perching
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->perching ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "perching", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // future_point
    PyObject * field = NULL;
    field = nav_msgs__msg__path__convert_to_py(&ros_message->future_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "future_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration
    PyObject * field = NULL;
    field = builtin_interfaces__msg__duration__convert_to_py(&ros_message->duration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
