// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:srv/GetPreAssemblyPoses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/srv/detail/get_pre_assembly_poses__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/srv/detail/get_pre_assembly_poses__functions.h"
#include "ariac_msgs/srv/detail/get_pre_assembly_poses__struct.h"


// Include directives for member types
// Member `order_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__srv__GetPreAssemblyPoses_Request__init(message_memory);
}

void GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_fini_function(void * message_memory)
{
  ariac_msgs__srv__GetPreAssemblyPoses_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_message_member_array[1] = {
  {
    "order_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__GetPreAssemblyPoses_Request, order_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_message_members = {
  "ariac_msgs__srv",  // message namespace
  "GetPreAssemblyPoses_Request",  // message name
  1,  // number of fields
  sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Request),
  GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_message_member_array,  // message members
  GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_message_type_support_handle = {
  0,
  &GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, GetPreAssemblyPoses_Request)() {
  if (!GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_message_type_support_handle.typesupport_identifier) {
    GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPreAssemblyPoses_Request__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ariac_msgs/srv/detail/get_pre_assembly_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ariac_msgs/srv/detail/get_pre_assembly_poses__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/get_pre_assembly_poses__struct.h"


// Include directives for member types
// Member `parts`
#include "ariac_msgs/msg/part_pose.h"
// Member `parts`
#include "ariac_msgs/msg/detail/part_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__srv__GetPreAssemblyPoses_Response__init(message_memory);
}

void GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_fini_function(void * message_memory)
{
  ariac_msgs__srv__GetPreAssemblyPoses_Response__fini(message_memory);
}

size_t GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__size_function__PartPose__parts(
  const void * untyped_member)
{
  const ariac_msgs__msg__PartPose__Sequence * member =
    (const ariac_msgs__msg__PartPose__Sequence *)(untyped_member);
  return member->size;
}

const void * GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__get_const_function__PartPose__parts(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__msg__PartPose__Sequence * member =
    (const ariac_msgs__msg__PartPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__get_function__PartPose__parts(
  void * untyped_member, size_t index)
{
  ariac_msgs__msg__PartPose__Sequence * member =
    (ariac_msgs__msg__PartPose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__resize_function__PartPose__parts(
  void * untyped_member, size_t size)
{
  ariac_msgs__msg__PartPose__Sequence * member =
    (ariac_msgs__msg__PartPose__Sequence *)(untyped_member);
  ariac_msgs__msg__PartPose__Sequence__fini(member);
  return ariac_msgs__msg__PartPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_message_member_array[3] = {
  {
    "valid_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__GetPreAssemblyPoses_Response, valid_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "agv_at_station",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__GetPreAssemblyPoses_Response, agv_at_station),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__GetPreAssemblyPoses_Response, parts),  // bytes offset in struct
    NULL,  // default value
    GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__size_function__PartPose__parts,  // size() function pointer
    GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__get_const_function__PartPose__parts,  // get_const(index) function pointer
    GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__get_function__PartPose__parts,  // get(index) function pointer
    GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__resize_function__PartPose__parts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_message_members = {
  "ariac_msgs__srv",  // message namespace
  "GetPreAssemblyPoses_Response",  // message name
  3,  // number of fields
  sizeof(ariac_msgs__srv__GetPreAssemblyPoses_Response),
  GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_message_member_array,  // message members
  GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_message_type_support_handle = {
  0,
  &GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, GetPreAssemblyPoses_Response)() {
  GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, PartPose)();
  if (!GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_message_type_support_handle.typesupport_identifier) {
    GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPreAssemblyPoses_Response__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ariac_msgs/srv/detail/get_pre_assembly_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ariac_msgs__srv__detail__get_pre_assembly_poses__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_service_members = {
  "ariac_msgs__srv",  // service namespace
  "GetPreAssemblyPoses",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ariac_msgs__srv__detail__get_pre_assembly_poses__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Request_message_type_support_handle,
  NULL  // response message
  // ariac_msgs__srv__detail__get_pre_assembly_poses__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_Response_message_type_support_handle
};

static rosidl_service_type_support_t ariac_msgs__srv__detail__get_pre_assembly_poses__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_service_type_support_handle = {
  0,
  &ariac_msgs__srv__detail__get_pre_assembly_poses__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, GetPreAssemblyPoses_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, GetPreAssemblyPoses_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, GetPreAssemblyPoses)() {
  if (!ariac_msgs__srv__detail__get_pre_assembly_poses__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_service_type_support_handle.typesupport_identifier) {
    ariac_msgs__srv__detail__get_pre_assembly_poses__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ariac_msgs__srv__detail__get_pre_assembly_poses__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, GetPreAssemblyPoses_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, GetPreAssemblyPoses_Response)()->data;
  }

  return &ariac_msgs__srv__detail__get_pre_assembly_poses__rosidl_typesupport_introspection_c__GetPreAssemblyPoses_service_type_support_handle;
}
