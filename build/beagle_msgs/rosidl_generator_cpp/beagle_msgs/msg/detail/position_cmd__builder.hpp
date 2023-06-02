// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beagle_msgs:msg/PositionCmd.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__MSG__DETAIL__POSITION_CMD__BUILDER_HPP_
#define BEAGLE_MSGS__MSG__DETAIL__POSITION_CMD__BUILDER_HPP_

#include "beagle_msgs/msg/detail/position_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace beagle_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionCmd_nodecount
{
public:
  explicit Init_PositionCmd_nodecount(::beagle_msgs::msg::PositionCmd & msg)
  : msg_(msg)
  {}
  ::beagle_msgs::msg::PositionCmd nodecount(::beagle_msgs::msg::PositionCmd::_nodecount_type arg)
  {
    msg_.nodecount = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::msg::PositionCmd msg_;
};

class Init_PositionCmd_movecount
{
public:
  explicit Init_PositionCmd_movecount(::beagle_msgs::msg::PositionCmd & msg)
  : msg_(msg)
  {}
  Init_PositionCmd_nodecount movecount(::beagle_msgs::msg::PositionCmd::_movecount_type arg)
  {
    msg_.movecount = std::move(arg);
    return Init_PositionCmd_nodecount(msg_);
  }

private:
  ::beagle_msgs::msg::PositionCmd msg_;
};

class Init_PositionCmd_linecount
{
public:
  Init_PositionCmd_linecount()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionCmd_movecount linecount(::beagle_msgs::msg::PositionCmd::_linecount_type arg)
  {
    msg_.linecount = std::move(arg);
    return Init_PositionCmd_movecount(msg_);
  }

private:
  ::beagle_msgs::msg::PositionCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::msg::PositionCmd>()
{
  return beagle_msgs::msg::builder::Init_PositionCmd_linecount();
}

}  // namespace beagle_msgs

#endif  // BEAGLE_MSGS__MSG__DETAIL__POSITION_CMD__BUILDER_HPP_
