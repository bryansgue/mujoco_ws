// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from quadrotor_msgs:msg/VelocityPlannerGoal.idl
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
#include "quadrotor_msgs/msg/detail/velocity_planner_goal__struct.h"
#include "quadrotor_msgs/msg/detail/velocity_planner_goal__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool quadrotor_msgs__msg__velocity_planner_goal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("quadrotor_msgs.msg._velocity_planner_goal.VelocityPlannerGoal", full_classname_dest, 61) == 0);
  }
  quadrotor_msgs__msg__VelocityPlannerGoal * ros_message = _ros_message;
  {  // vx
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vz = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vyaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "vyaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vyaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // use_position_gains
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_position_gains");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_position_gains = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * quadrotor_msgs__msg__velocity_planner_goal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VelocityPlannerGoal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("quadrotor_msgs.msg._velocity_planner_goal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VelocityPlannerGoal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  quadrotor_msgs__msg__VelocityPlannerGoal * ros_message = (quadrotor_msgs__msg__VelocityPlannerGoal *)raw_ros_message;
  {  // vx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vyaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vyaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vyaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_position_gains
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_position_gains ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_position_gains", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
