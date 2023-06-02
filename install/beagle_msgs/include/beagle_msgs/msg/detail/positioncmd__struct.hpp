// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from beagle_msgs:msg/Positioncmd.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__STRUCT_HPP_
#define BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__beagle_msgs__msg__Positioncmd __attribute__((deprecated))
#else
# define DEPRECATED__beagle_msgs__msg__Positioncmd __declspec(deprecated)
#endif

namespace beagle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Positioncmd_
{
  using Type = Positioncmd_<ContainerAllocator>;

  explicit Positioncmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linecount = 0.0f;
      this->movecount = 0.0f;
      this->nodecount = 0.0f;
    }
  }

  explicit Positioncmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linecount = 0.0f;
      this->movecount = 0.0f;
      this->nodecount = 0.0f;
    }
  }

  // field types and members
  using _linecount_type =
    float;
  _linecount_type linecount;
  using _movecount_type =
    float;
  _movecount_type movecount;
  using _nodecount_type =
    float;
  _nodecount_type nodecount;

  // setters for named parameter idiom
  Type & set__linecount(
    const float & _arg)
  {
    this->linecount = _arg;
    return *this;
  }
  Type & set__movecount(
    const float & _arg)
  {
    this->movecount = _arg;
    return *this;
  }
  Type & set__nodecount(
    const float & _arg)
  {
    this->nodecount = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beagle_msgs::msg::Positioncmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const beagle_msgs::msg::Positioncmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beagle_msgs::msg::Positioncmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beagle_msgs::msg::Positioncmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::msg::Positioncmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::msg::Positioncmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::msg::Positioncmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::msg::Positioncmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beagle_msgs::msg::Positioncmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beagle_msgs::msg::Positioncmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beagle_msgs__msg__Positioncmd
    std::shared_ptr<beagle_msgs::msg::Positioncmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beagle_msgs__msg__Positioncmd
    std::shared_ptr<beagle_msgs::msg::Positioncmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Positioncmd_ & other) const
  {
    if (this->linecount != other.linecount) {
      return false;
    }
    if (this->movecount != other.movecount) {
      return false;
    }
    if (this->nodecount != other.nodecount) {
      return false;
    }
    return true;
  }
  bool operator!=(const Positioncmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Positioncmd_

// alias to use template instance with default allocator
using Positioncmd =
  beagle_msgs::msg::Positioncmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace beagle_msgs

#endif  // BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__STRUCT_HPP_
