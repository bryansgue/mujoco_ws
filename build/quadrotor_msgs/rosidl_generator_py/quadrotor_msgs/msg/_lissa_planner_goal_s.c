// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from quadrotor_msgs:msg/LissaPlannerGoal.idl
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
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__struct.h"
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool quadrotor_msgs__msg__lissa_planner_goal__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("quadrotor_msgs.msg._lissa_planner_goal.LissaPlannerGoal", full_classname_dest, 55) == 0);
  }
  quadrotor_msgs__msg__LissaPlannerGoal * ros_message = _ros_message;
  {  // x_amp
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_amp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_amp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_amp
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_amp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_amp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_amp
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_amp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_amp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_amp
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_amp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_amp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_num_periods
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_num_periods");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_num_periods = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_num_periods
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_num_periods");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_num_periods = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_num_periods
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_num_periods");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_num_periods = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_num_periods
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_num_periods");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_num_periods = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // period
    PyObject * field = PyObject_GetAttrString(_pymsg, "period");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->period = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_cycles
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_cycles");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->num_cycles = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ramp_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "ramp_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ramp_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * quadrotor_msgs__msg__lissa_planner_goal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LissaPlannerGoal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("quadrotor_msgs.msg._lissa_planner_goal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LissaPlannerGoal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  quadrotor_msgs__msg__LissaPlannerGoal * ros_message = (quadrotor_msgs__msg__LissaPlannerGoal *)raw_ros_message;
  {  // x_amp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_amp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_amp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_amp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_amp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_amp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_amp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_amp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_amp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_amp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_amp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_amp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_num_periods
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_num_periods);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_num_periods", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_num_periods
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_num_periods);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_num_periods", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_num_periods
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_num_periods);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_num_periods", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_num_periods
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_num_periods);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_num_periods", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->period);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_cycles
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->num_cycles);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_cycles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ramp_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ramp_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ramp_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
