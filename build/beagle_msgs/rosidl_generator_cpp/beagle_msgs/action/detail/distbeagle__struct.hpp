// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from beagle_msgs:action/Distbeagle.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__STRUCT_HPP_
#define BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__beagle_msgs__action__Distbeagle_Goal __attribute__((deprecated))
#else
# define DEPRECATED__beagle_msgs__action__Distbeagle_Goal __declspec(deprecated)
#endif

namespace beagle_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Distbeagle_Goal_
{
  using Type = Distbeagle_Goal_<ContainerAllocator>;

  explicit Distbeagle_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_dist = 0.0f;
      this->plus_arrow = 0l;
      this->minus_arrow = 0l;
    }
  }

  explicit Distbeagle_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_dist = 0.0f;
      this->plus_arrow = 0l;
      this->minus_arrow = 0l;
    }
  }

  // field types and members
  using _lidar_dist_type =
    float;
  _lidar_dist_type lidar_dist;
  using _plus_arrow_type =
    int32_t;
  _plus_arrow_type plus_arrow;
  using _minus_arrow_type =
    int32_t;
  _minus_arrow_type minus_arrow;

  // setters for named parameter idiom
  Type & set__lidar_dist(
    const float & _arg)
  {
    this->lidar_dist = _arg;
    return *this;
  }
  Type & set__plus_arrow(
    const int32_t & _arg)
  {
    this->plus_arrow = _arg;
    return *this;
  }
  Type & set__minus_arrow(
    const int32_t & _arg)
  {
    this->minus_arrow = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_Goal
    std::shared_ptr<beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_Goal
    std::shared_ptr<beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distbeagle_Goal_ & other) const
  {
    if (this->lidar_dist != other.lidar_dist) {
      return false;
    }
    if (this->plus_arrow != other.plus_arrow) {
      return false;
    }
    if (this->minus_arrow != other.minus_arrow) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distbeagle_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distbeagle_Goal_

// alias to use template instance with default allocator
using Distbeagle_Goal =
  beagle_msgs::action::Distbeagle_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace beagle_msgs


#ifndef _WIN32
# define DEPRECATED__beagle_msgs__action__Distbeagle_Result __attribute__((deprecated))
#else
# define DEPRECATED__beagle_msgs__action__Distbeagle_Result __declspec(deprecated)
#endif

namespace beagle_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Distbeagle_Result_
{
  using Type = Distbeagle_Result_<ContainerAllocator>;

  explicit Distbeagle_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count_node_bot_1 = 0l;
      this->count_node_bot_2 = 0l;
    }
  }

  explicit Distbeagle_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count_node_bot_1 = 0l;
      this->count_node_bot_2 = 0l;
    }
  }

  // field types and members
  using _count_node_bot_1_type =
    int32_t;
  _count_node_bot_1_type count_node_bot_1;
  using _count_node_bot_2_type =
    int32_t;
  _count_node_bot_2_type count_node_bot_2;

  // setters for named parameter idiom
  Type & set__count_node_bot_1(
    const int32_t & _arg)
  {
    this->count_node_bot_1 = _arg;
    return *this;
  }
  Type & set__count_node_bot_2(
    const int32_t & _arg)
  {
    this->count_node_bot_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beagle_msgs::action::Distbeagle_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const beagle_msgs::action::Distbeagle_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_Result
    std::shared_ptr<beagle_msgs::action::Distbeagle_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_Result
    std::shared_ptr<beagle_msgs::action::Distbeagle_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distbeagle_Result_ & other) const
  {
    if (this->count_node_bot_1 != other.count_node_bot_1) {
      return false;
    }
    if (this->count_node_bot_2 != other.count_node_bot_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distbeagle_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distbeagle_Result_

// alias to use template instance with default allocator
using Distbeagle_Result =
  beagle_msgs::action::Distbeagle_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace beagle_msgs


#ifndef _WIN32
# define DEPRECATED__beagle_msgs__action__Distbeagle_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__beagle_msgs__action__Distbeagle_Feedback __declspec(deprecated)
#endif

namespace beagle_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Distbeagle_Feedback_
{
  using Type = Distbeagle_Feedback_<ContainerAllocator>;

  explicit Distbeagle_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->between_beagle12 = 0l;
    }
  }

  explicit Distbeagle_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->between_beagle12 = 0l;
    }
  }

  // field types and members
  using _between_beagle12_type =
    int32_t;
  _between_beagle12_type between_beagle12;

  // setters for named parameter idiom
  Type & set__between_beagle12(
    const int32_t & _arg)
  {
    this->between_beagle12 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_Feedback
    std::shared_ptr<beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_Feedback
    std::shared_ptr<beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distbeagle_Feedback_ & other) const
  {
    if (this->between_beagle12 != other.between_beagle12) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distbeagle_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distbeagle_Feedback_

// alias to use template instance with default allocator
using Distbeagle_Feedback =
  beagle_msgs::action::Distbeagle_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace beagle_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "beagle_msgs/action/detail/distbeagle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__beagle_msgs__action__Distbeagle_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__beagle_msgs__action__Distbeagle_SendGoal_Request __declspec(deprecated)
#endif

namespace beagle_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Distbeagle_SendGoal_Request_
{
  using Type = Distbeagle_SendGoal_Request_<ContainerAllocator>;

  explicit Distbeagle_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Distbeagle_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const beagle_msgs::action::Distbeagle_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_SendGoal_Request
    std::shared_ptr<beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_SendGoal_Request
    std::shared_ptr<beagle_msgs::action::Distbeagle_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distbeagle_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distbeagle_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distbeagle_SendGoal_Request_

// alias to use template instance with default allocator
using Distbeagle_SendGoal_Request =
  beagle_msgs::action::Distbeagle_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace beagle_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__beagle_msgs__action__Distbeagle_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__beagle_msgs__action__Distbeagle_SendGoal_Response __declspec(deprecated)
#endif

namespace beagle_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Distbeagle_SendGoal_Response_
{
  using Type = Distbeagle_SendGoal_Response_<ContainerAllocator>;

  explicit Distbeagle_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Distbeagle_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_SendGoal_Response
    std::shared_ptr<beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_SendGoal_Response
    std::shared_ptr<beagle_msgs::action::Distbeagle_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distbeagle_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distbeagle_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distbeagle_SendGoal_Response_

// alias to use template instance with default allocator
using Distbeagle_SendGoal_Response =
  beagle_msgs::action::Distbeagle_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace beagle_msgs

namespace beagle_msgs
{

namespace action
{

struct Distbeagle_SendGoal
{
  using Request = beagle_msgs::action::Distbeagle_SendGoal_Request;
  using Response = beagle_msgs::action::Distbeagle_SendGoal_Response;
};

}  // namespace action

}  // namespace beagle_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__beagle_msgs__action__Distbeagle_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__beagle_msgs__action__Distbeagle_GetResult_Request __declspec(deprecated)
#endif

namespace beagle_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Distbeagle_GetResult_Request_
{
  using Type = Distbeagle_GetResult_Request_<ContainerAllocator>;

  explicit Distbeagle_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Distbeagle_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_GetResult_Request
    std::shared_ptr<beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_GetResult_Request
    std::shared_ptr<beagle_msgs::action::Distbeagle_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distbeagle_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distbeagle_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distbeagle_GetResult_Request_

// alias to use template instance with default allocator
using Distbeagle_GetResult_Request =
  beagle_msgs::action::Distbeagle_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace beagle_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "beagle_msgs/action/detail/distbeagle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__beagle_msgs__action__Distbeagle_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__beagle_msgs__action__Distbeagle_GetResult_Response __declspec(deprecated)
#endif

namespace beagle_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Distbeagle_GetResult_Response_
{
  using Type = Distbeagle_GetResult_Response_<ContainerAllocator>;

  explicit Distbeagle_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Distbeagle_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    beagle_msgs::action::Distbeagle_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const beagle_msgs::action::Distbeagle_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_GetResult_Response
    std::shared_ptr<beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_GetResult_Response
    std::shared_ptr<beagle_msgs::action::Distbeagle_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distbeagle_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distbeagle_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distbeagle_GetResult_Response_

// alias to use template instance with default allocator
using Distbeagle_GetResult_Response =
  beagle_msgs::action::Distbeagle_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace beagle_msgs

namespace beagle_msgs
{

namespace action
{

struct Distbeagle_GetResult
{
  using Request = beagle_msgs::action::Distbeagle_GetResult_Request;
  using Response = beagle_msgs::action::Distbeagle_GetResult_Response;
};

}  // namespace action

}  // namespace beagle_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "beagle_msgs/action/detail/distbeagle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__beagle_msgs__action__Distbeagle_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__beagle_msgs__action__Distbeagle_FeedbackMessage __declspec(deprecated)
#endif

namespace beagle_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Distbeagle_FeedbackMessage_
{
  using Type = Distbeagle_FeedbackMessage_<ContainerAllocator>;

  explicit Distbeagle_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Distbeagle_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const beagle_msgs::action::Distbeagle_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_FeedbackMessage
    std::shared_ptr<beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beagle_msgs__action__Distbeagle_FeedbackMessage
    std::shared_ptr<beagle_msgs::action::Distbeagle_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Distbeagle_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Distbeagle_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Distbeagle_FeedbackMessage_

// alias to use template instance with default allocator
using Distbeagle_FeedbackMessage =
  beagle_msgs::action::Distbeagle_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace beagle_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace beagle_msgs
{

namespace action
{

struct Distbeagle
{
  /// The goal message defined in the action definition.
  using Goal = beagle_msgs::action::Distbeagle_Goal;
  /// The result message defined in the action definition.
  using Result = beagle_msgs::action::Distbeagle_Result;
  /// The feedback message defined in the action definition.
  using Feedback = beagle_msgs::action::Distbeagle_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = beagle_msgs::action::Distbeagle_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = beagle_msgs::action::Distbeagle_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = beagle_msgs::action::Distbeagle_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Distbeagle Distbeagle;

}  // namespace action

}  // namespace beagle_msgs

#endif  // BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__STRUCT_HPP_
