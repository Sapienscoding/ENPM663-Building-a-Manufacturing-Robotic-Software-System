// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:srv/GetPreAssemblyPoses.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__GET_PRE_ASSEMBLY_POSES__STRUCT_HPP_
#define ARIAC_MSGS__SRV__DETAIL__GET_PRE_ASSEMBLY_POSES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__srv__GetPreAssemblyPoses_Request __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__srv__GetPreAssemblyPoses_Request __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPreAssemblyPoses_Request_
{
  using Type = GetPreAssemblyPoses_Request_<ContainerAllocator>;

  explicit GetPreAssemblyPoses_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
    }
  }

  explicit GetPreAssemblyPoses_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
    }
  }

  // field types and members
  using _order_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _order_id_type order_id;

  // setters for named parameter idiom
  Type & set__order_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->order_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__srv__GetPreAssemblyPoses_Request
    std::shared_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__srv__GetPreAssemblyPoses_Request
    std::shared_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPreAssemblyPoses_Request_ & other) const
  {
    if (this->order_id != other.order_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPreAssemblyPoses_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPreAssemblyPoses_Request_

// alias to use template instance with default allocator
using GetPreAssemblyPoses_Request =
  ariac_msgs::srv::GetPreAssemblyPoses_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ariac_msgs


// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/part_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__srv__GetPreAssemblyPoses_Response __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__srv__GetPreAssemblyPoses_Response __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPreAssemblyPoses_Response_
{
  using Type = GetPreAssemblyPoses_Response_<ContainerAllocator>;

  explicit GetPreAssemblyPoses_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid_id = false;
      this->agv_at_station = false;
    }
  }

  explicit GetPreAssemblyPoses_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid_id = false;
      this->agv_at_station = false;
    }
  }

  // field types and members
  using _valid_id_type =
    bool;
  _valid_id_type valid_id;
  using _agv_at_station_type =
    bool;
  _agv_at_station_type agv_at_station;
  using _parts_type =
    std::vector<ariac_msgs::msg::PartPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::PartPose_<ContainerAllocator>>>;
  _parts_type parts;

  // setters for named parameter idiom
  Type & set__valid_id(
    const bool & _arg)
  {
    this->valid_id = _arg;
    return *this;
  }
  Type & set__agv_at_station(
    const bool & _arg)
  {
    this->agv_at_station = _arg;
    return *this;
  }
  Type & set__parts(
    const std::vector<ariac_msgs::msg::PartPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::PartPose_<ContainerAllocator>>> & _arg)
  {
    this->parts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__srv__GetPreAssemblyPoses_Response
    std::shared_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__srv__GetPreAssemblyPoses_Response
    std::shared_ptr<ariac_msgs::srv::GetPreAssemblyPoses_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPreAssemblyPoses_Response_ & other) const
  {
    if (this->valid_id != other.valid_id) {
      return false;
    }
    if (this->agv_at_station != other.agv_at_station) {
      return false;
    }
    if (this->parts != other.parts) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPreAssemblyPoses_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPreAssemblyPoses_Response_

// alias to use template instance with default allocator
using GetPreAssemblyPoses_Response =
  ariac_msgs::srv::GetPreAssemblyPoses_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ariac_msgs

namespace ariac_msgs
{

namespace srv
{

struct GetPreAssemblyPoses
{
  using Request = ariac_msgs::srv::GetPreAssemblyPoses_Request;
  using Response = ariac_msgs::srv::GetPreAssemblyPoses_Response;
};

}  // namespace srv

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__GET_PRE_ASSEMBLY_POSES__STRUCT_HPP_
