// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from quadrotor_msgs:msg/BetaFlightOnboardControl.idl
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
#include "quadrotor_msgs/msg/detail/beta_flight_onboard_control__struct.h"
#include "quadrotor_msgs/msg/detail/beta_flight_onboard_control__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__quaternion__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__quaternion__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool quadrotor_msgs__msg__beta_flight_onboard_control__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("quadrotor_msgs.msg._beta_flight_onboard_control.BetaFlightOnboardControl", full_classname_dest, 72) == 0);
  }
  quadrotor_msgs__msg__BetaFlightOnboardControl * ros_message = _ros_message;
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
  {  // angular_velocity_desired
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity_desired");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->angular_velocity_desired)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // quaternion_desired
    PyObject * field = PyObject_GetAttrString(_pymsg, "quaternion_desired");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__quaternion__convert_from_py(field, &ros_message->quaternion_desired)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // thrust_desired
    PyObject * field = PyObject_GetAttrString(_pymsg, "thrust_desired");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thrust_desired = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // active_offboard
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_offboard");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->active_offboard = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // active_attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_attitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->active_attitude = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // active_acro
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_acro");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->active_acro = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * quadrotor_msgs__msg__beta_flight_onboard_control__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BetaFlightOnboardControl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("quadrotor_msgs.msg._beta_flight_onboard_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BetaFlightOnboardControl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  quadrotor_msgs__msg__BetaFlightOnboardControl * ros_message = (quadrotor_msgs__msg__BetaFlightOnboardControl *)raw_ros_message;
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
  {  // angular_velocity_desired
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->angular_velocity_desired);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity_desired", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quaternion_desired
    PyObject * field = NULL;
    field = geometry_msgs__msg__quaternion__convert_to_py(&ros_message->quaternion_desired);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "quaternion_desired", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thrust_desired
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thrust_desired);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thrust_desired", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_offboard
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->active_offboard);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_offboard", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_attitude
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->active_attitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_acro
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->active_acro);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_acro", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
