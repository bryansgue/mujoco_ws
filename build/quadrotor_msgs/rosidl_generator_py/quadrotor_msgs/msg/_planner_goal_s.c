// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from quadrotor_msgs:msg/PlannerGoal.idl
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
#include "quadrotor_msgs/msg/detail/planner_goal__struct.h"
#include "quadrotor_msgs/msg/detail/planner_goal__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool nav_msgs__msg__odometry__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_msgs__msg__odometry__convert_to_py(void * raw_ros_message);
bool quadrotor_msgs__msg__line_planner_goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * quadrotor_msgs__msg__line_planner_goal__convert_to_py(void * raw_ros_message);
bool quadrotor_msgs__msg__circle_planner_goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * quadrotor_msgs__msg__circle_planner_goal__convert_to_py(void * raw_ros_message);
bool quadrotor_msgs__msg__lissa_planner_goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * quadrotor_msgs__msg__lissa_planner_goal__convert_to_py(void * raw_ros_message);
bool quadrotor_msgs__msg__velocity_planner_goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * quadrotor_msgs__msg__velocity_planner_goal__convert_to_py(void * raw_ros_message);
bool quadrotor_msgs__msg__qp_planner_goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * quadrotor_msgs__msg__qp_planner_goal__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool quadrotor_msgs__msg__planner_goal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("quadrotor_msgs.msg._planner_goal.PlannerGoal", full_classname_dest, 44) == 0);
  }
  quadrotor_msgs__msg__PlannerGoal * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // des_tracker
    PyObject * field = PyObject_GetAttrString(_pymsg, "des_tracker");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->des_tracker, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // init_cond
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_cond");
    if (!field) {
      return false;
    }
    if (!nav_msgs__msg__odometry__convert_from_py(field, &ros_message->init_cond)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // line_planner_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "line_planner_goal");
    if (!field) {
      return false;
    }
    if (!quadrotor_msgs__msg__line_planner_goal__convert_from_py(field, &ros_message->line_planner_goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // circle_planner_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "circle_planner_goal");
    if (!field) {
      return false;
    }
    if (!quadrotor_msgs__msg__circle_planner_goal__convert_from_py(field, &ros_message->circle_planner_goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lissajous_planner_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "lissajous_planner_goal");
    if (!field) {
      return false;
    }
    if (!quadrotor_msgs__msg__lissa_planner_goal__convert_from_py(field, &ros_message->lissajous_planner_goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity_planner_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_planner_goal");
    if (!field) {
      return false;
    }
    if (!quadrotor_msgs__msg__velocity_planner_goal__convert_from_py(field, &ros_message->velocity_planner_goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // qp_planner_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "qp_planner_goal");
    if (!field) {
      return false;
    }
    if (!quadrotor_msgs__msg__qp_planner_goal__convert_from_py(field, &ros_message->qp_planner_goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * quadrotor_msgs__msg__planner_goal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlannerGoal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("quadrotor_msgs.msg._planner_goal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlannerGoal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  quadrotor_msgs__msg__PlannerGoal * ros_message = (quadrotor_msgs__msg__PlannerGoal *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // des_tracker
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->des_tracker.data,
      strlen(ros_message->des_tracker.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "des_tracker", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // init_cond
    PyObject * field = NULL;
    field = nav_msgs__msg__odometry__convert_to_py(&ros_message->init_cond);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_cond", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // line_planner_goal
    PyObject * field = NULL;
    field = quadrotor_msgs__msg__line_planner_goal__convert_to_py(&ros_message->line_planner_goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "line_planner_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circle_planner_goal
    PyObject * field = NULL;
    field = quadrotor_msgs__msg__circle_planner_goal__convert_to_py(&ros_message->circle_planner_goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "circle_planner_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lissajous_planner_goal
    PyObject * field = NULL;
    field = quadrotor_msgs__msg__lissa_planner_goal__convert_to_py(&ros_message->lissajous_planner_goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lissajous_planner_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_planner_goal
    PyObject * field = NULL;
    field = quadrotor_msgs__msg__velocity_planner_goal__convert_to_py(&ros_message->velocity_planner_goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_planner_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qp_planner_goal
    PyObject * field = NULL;
    field = quadrotor_msgs__msg__qp_planner_goal__convert_to_py(&ros_message->qp_planner_goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "qp_planner_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
