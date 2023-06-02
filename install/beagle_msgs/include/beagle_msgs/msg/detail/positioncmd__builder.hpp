// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beagle_msgs:msg/Positioncmd.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__BUILDER_HPP_
#define BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__BUILDER_HPP_

#include "beagle_msgs/msg/detail/positioncmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace beagle_msgs
{

namespace msg
{

namespace builder
{

class Init_Positioncmd_nodecount
{
public:
  explicit Init_Positioncmd_nodecount(::beagle_msgs::msg::Positioncmd & msg)
  : msg_(msg)
  {}
  ::beagle_msgs::msg::Positioncmd nodecount(::beagle_msgs::msg::Positioncmd::_nodecount_type arg)
  {
    msg_.nodecount = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::msg::Positioncmd msg_;
};

class Init_Positioncmd_movecount
{
public:
  explicit Init_Positioncmd_movecount(::beagle_msgs::msg::Positioncmd & msg)
  : msg_(msg)
  {}
  Init_Positioncmd_nodecount movecount(::beagle_msgs::msg::Positioncmd::_movecount_type arg)
  {
    msg_.movecount = std::move(arg);
    return Init_Positioncmd_nodecount(msg_);
  }

private:
  ::beagle_msgs::msg::Positioncmd msg_;
};

class Init_Positioncmd_linecount
{
public:
  Init_Positioncmd_linecount()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Positioncmd_movecount linecount(::beagle_msgs::msg::Positioncmd::_linecount_type arg)
  {
    msg_.linecount = std::move(arg);
    return Init_Positioncmd_movecount(msg_);
  }

private:
  ::beagle_msgs::msg::Positioncmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::msg::Positioncmd>()
{
  return beagle_msgs::msg::builder::Init_Positioncmd_linecount();
}

}  // namespace beagle_msgs

#endif  // BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__BUILDER_HPP_
