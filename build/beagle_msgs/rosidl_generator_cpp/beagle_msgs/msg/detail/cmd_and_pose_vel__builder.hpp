// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beagle_msgs:msg/CmdAndPoseVel.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__BUILDER_HPP_
#define BEAGLE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__BUILDER_HPP_

#include "beagle_msgs/msg/detail/cmd_and_pose_vel__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace beagle_msgs
{

namespace msg
{

namespace builder
{

class Init_CmdAndPoseVel_nodecount
{
public:
  explicit Init_CmdAndPoseVel_nodecount(::beagle_msgs::msg::CmdAndPoseVel & msg)
  : msg_(msg)
  {}
  ::beagle_msgs::msg::CmdAndPoseVel nodecount(::beagle_msgs::msg::CmdAndPoseVel::_nodecount_type arg)
  {
    msg_.nodecount = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::msg::CmdAndPoseVel msg_;
};

class Init_CmdAndPoseVel_movecount
{
public:
  explicit Init_CmdAndPoseVel_movecount(::beagle_msgs::msg::CmdAndPoseVel & msg)
  : msg_(msg)
  {}
  Init_CmdAndPoseVel_nodecount movecount(::beagle_msgs::msg::CmdAndPoseVel::_movecount_type arg)
  {
    msg_.movecount = std::move(arg);
    return Init_CmdAndPoseVel_nodecount(msg_);
  }

private:
  ::beagle_msgs::msg::CmdAndPoseVel msg_;
};

class Init_CmdAndPoseVel_linecount
{
public:
  Init_CmdAndPoseVel_linecount()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdAndPoseVel_movecount linecount(::beagle_msgs::msg::CmdAndPoseVel::_linecount_type arg)
  {
    msg_.linecount = std::move(arg);
    return Init_CmdAndPoseVel_movecount(msg_);
  }

private:
  ::beagle_msgs::msg::CmdAndPoseVel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::msg::CmdAndPoseVel>()
{
  return beagle_msgs::msg::builder::Init_CmdAndPoseVel_linecount();
}

}  // namespace beagle_msgs

#endif  // BEAGLE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__BUILDER_HPP_
