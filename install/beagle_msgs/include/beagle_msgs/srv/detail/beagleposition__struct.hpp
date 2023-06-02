// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from beagle_msgs:srv/Beagleposition.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__STRUCT_HPP_
#define BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__beagle_msgs__srv__Beagleposition_Request __attribute__((deprecated))
#else
# define DEPRECATED__beagle_msgs__srv__Beagleposition_Request __declspec(deprecated)
#endif

namespace beagle_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Beagleposition_Request_
{
  using Type = Beagleposition_Request_<ContainerAllocator>;

  explicit Beagleposition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dice_label = "";
      this->user_fir = 0ll;
      this->user_sec = 0ll;
    }
  }

  explicit Beagleposition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dice_label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dice_label = "";
      this->user_fir = 0ll;
      this->user_sec = 0ll;
    }
  }

  // field types and members
  using _dice_label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dice_label_type dice_label;
  using _user_fir_type =
    int64_t;
  _user_fir_type user_fir;
  using _user_sec_type =
    int64_t;
  _user_sec_type user_sec;

  // setters for named parameter idiom
  Type & set__dice_label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dice_label = _arg;
    return *this;
  }
  Type & set__user_fir(
    const int64_t & _arg)
  {
    this->user_fir = _arg;
    return *this;
  }
  Type & set__user_sec(
    const int64_t & _arg)
  {
    this->user_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beagle_msgs__srv__Beagleposition_Request
    std::shared_ptr<beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beagle_msgs__srv__Beagleposition_Request
    std::shared_ptr<beagle_msgs::srv::Beagleposition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Beagleposition_Request_ & other) const
  {
    if (this->dice_label != other.dice_label) {
      return false;
    }
    if (this->user_fir != other.user_fir) {
      return false;
    }
    if (this->user_sec != other.user_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const Beagleposition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Beagleposition_Request_

// alias to use template instance with default allocator
using Beagleposition_Request =
  beagle_msgs::srv::Beagleposition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace beagle_msgs


#ifndef _WIN32
# define DEPRECATED__beagle_msgs__srv__Beagleposition_Response __attribute__((deprecated))
#else
# define DEPRECATED__beagle_msgs__srv__Beagleposition_Response __declspec(deprecated)
#endif

namespace beagle_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Beagleposition_Response_
{
  using Type = Beagleposition_Response_<ContainerAllocator>;

  explicit Beagleposition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_point = 0ll;
      this->beagle_event = 0l;
      this->beagle_position = 0l;
    }
  }

  explicit Beagleposition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move_point = 0ll;
      this->beagle_event = 0l;
      this->beagle_position = 0l;
    }
  }

  // field types and members
  using _move_point_type =
    int64_t;
  _move_point_type move_point;
  using _beagle_event_type =
    int32_t;
  _beagle_event_type beagle_event;
  using _beagle_position_type =
    int32_t;
  _beagle_position_type beagle_position;

  // setters for named parameter idiom
  Type & set__move_point(
    const int64_t & _arg)
  {
    this->move_point = _arg;
    return *this;
  }
  Type & set__beagle_event(
    const int32_t & _arg)
  {
    this->beagle_event = _arg;
    return *this;
  }
  Type & set__beagle_position(
    const int32_t & _arg)
  {
    this->beagle_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beagle_msgs__srv__Beagleposition_Response
    std::shared_ptr<beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beagle_msgs__srv__Beagleposition_Response
    std::shared_ptr<beagle_msgs::srv::Beagleposition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Beagleposition_Response_ & other) const
  {
    if (this->move_point != other.move_point) {
      return false;
    }
    if (this->beagle_event != other.beagle_event) {
      return false;
    }
    if (this->beagle_position != other.beagle_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const Beagleposition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Beagleposition_Response_

// alias to use template instance with default allocator
using Beagleposition_Response =
  beagle_msgs::srv::Beagleposition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace beagle_msgs

namespace beagle_msgs
{

namespace srv
{

struct Beagleposition
{
  using Request = beagle_msgs::srv::Beagleposition_Request;
  using Response = beagle_msgs::srv::Beagleposition_Response;
};

}  // namespace srv

}  // namespace beagle_msgs

#endif  // BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__STRUCT_HPP_
