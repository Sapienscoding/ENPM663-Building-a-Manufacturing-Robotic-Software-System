// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/HumanState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/human_state__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/human_state__functions.h"
#include "ariac_msgs/msg/detail/human_state__struct.h"


// Include directives for member types
// Member `human_position`
// Member `robot_position`
#include "geometry_msgs/msg/point.h"
// Member `human_position`
// Member `robot_position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `human_velocity`
// Member `robot_velocity`
#include "geometry_msgs/msg/vector3.h"
// Member `human_velocity`
// Member `robot_velocity`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HumanState__rosidl_typesupport_introspection_c__HumanState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__HumanState__init(message_memory);
}

void HumanState__rosidl_typesupport_introspection_c__HumanState_fini_function(void * message_memory)
{
  ariac_msgs__msg__HumanState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HumanState__rosidl_typesupport_introspection_c__HumanState_message_member_array[4] = {
  {
    "human_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__HumanState, human_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__HumanState, robot_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "human_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__HumanState, human_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__HumanState, robot_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HumanState__rosidl_typesupport_introspection_c__HumanState_message_members = {
  "ariac_msgs__msg",  // message namespace
  "HumanState",  // message name
  4,  // number of fields
  sizeof(ariac_msgs__msg__HumanState),
  HumanState__rosidl_typesupport_introspection_c__HumanState_message_member_array,  // message members
  HumanState__rosidl_typesupport_introspection_c__HumanState_init_function,  // function to initialize message memory (memory has to be allocated)
  HumanState__rosidl_typesupport_introspection_c__HumanState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HumanState__rosidl_typesupport_introspection_c__HumanState_message_type_support_handle = {
  0,
  &HumanState__rosidl_typesupport_introspection_c__HumanState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, HumanState)() {
  HumanState__rosidl_typesupport_introspection_c__HumanState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  HumanState__rosidl_typesupport_introspection_c__HumanState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  HumanState__rosidl_typesupport_introspection_c__HumanState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  HumanState__rosidl_typesupport_introspection_c__HumanState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!HumanState__rosidl_typesupport_introspection_c__HumanState_message_type_support_handle.typesupport_identifier) {
    HumanState__rosidl_typesupport_introspection_c__HumanState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HumanState__rosidl_typesupport_introspection_c__HumanState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
