// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ariac_msgs:msg/AssemblyStationState.idl
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
#include "ariac_msgs/msg/detail/assembly_station_state__struct.h"
#include "ariac_msgs/msg/detail/assembly_station_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ariac_msgs__msg__assembly_station_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("ariac_msgs.msg._assembly_station_state.AssemblyStationState", full_classname_dest, 59) == 0);
  }
  ariac_msgs__msg__AssemblyStationState * ros_message = _ros_message;
  {  // battery_attached
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_attached");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->battery_attached = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sensor_attached
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_attached");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sensor_attached = (Py_True == field);
    Py_DECREF(field);
  }
  {  // regulator_attached
    PyObject * field = PyObject_GetAttrString(_pymsg, "regulator_attached");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->regulator_attached = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pump_attached
    PyObject * field = PyObject_GetAttrString(_pymsg, "pump_attached");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pump_attached = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ariac_msgs__msg__assembly_station_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AssemblyStationState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ariac_msgs.msg._assembly_station_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AssemblyStationState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ariac_msgs__msg__AssemblyStationState * ros_message = (ariac_msgs__msg__AssemblyStationState *)raw_ros_message;
  {  // battery_attached
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->battery_attached ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_attached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_attached
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sensor_attached ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_attached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // regulator_attached
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->regulator_attached ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "regulator_attached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pump_attached
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pump_attached ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pump_attached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
