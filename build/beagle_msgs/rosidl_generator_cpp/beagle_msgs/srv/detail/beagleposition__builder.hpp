// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beagle_msgs:srv/Beagleposition.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__BUILDER_HPP_
#define BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__BUILDER_HPP_

#include "beagle_msgs/srv/detail/beagleposition__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace beagle_msgs
{

namespace srv
{

namespace builder
{

class Init_Beagleposition_Request_user_sec
{
public:
  explicit Init_Beagleposition_Request_user_sec(::beagle_msgs::srv::Beagleposition_Request & msg)
  : msg_(msg)
  {}
  ::beagle_msgs::srv::Beagleposition_Request user_sec(::beagle_msgs::srv::Beagleposition_Request::_user_sec_type arg)
  {
    msg_.user_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::srv::Beagleposition_Request msg_;
};

class Init_Beagleposition_Request_user_fir
{
public:
  explicit Init_Beagleposition_Request_user_fir(::beagle_msgs::srv::Beagleposition_Request & msg)
  : msg_(msg)
  {}
  Init_Beagleposition_Request_user_sec user_fir(::beagle_msgs::srv::Beagleposition_Request::_user_fir_type arg)
  {
    msg_.user_fir = std::move(arg);
    return Init_Beagleposition_Request_user_sec(msg_);
  }

private:
  ::beagle_msgs::srv::Beagleposition_Request msg_;
};

class Init_Beagleposition_Request_dice_label
{
public:
  Init_Beagleposition_Request_dice_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Beagleposition_Request_user_fir dice_label(::beagle_msgs::srv::Beagleposition_Request::_dice_label_type arg)
  {
    msg_.dice_label = std::move(arg);
    return Init_Beagleposition_Request_user_fir(msg_);
  }

private:
  ::beagle_msgs::srv::Beagleposition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::srv::Beagleposition_Request>()
{
  return beagle_msgs::srv::builder::Init_Beagleposition_Request_dice_label();
}

}  // namespace beagle_msgs


namespace beagle_msgs
{

namespace srv
{

namespace builder
{

class Init_Beagleposition_Response_beagle_position
{
public:
  explicit Init_Beagleposition_Response_beagle_position(::beagle_msgs::srv::Beagleposition_Response & msg)
  : msg_(msg)
  {}
  ::beagle_msgs::srv::Beagleposition_Response beagle_position(::beagle_msgs::srv::Beagleposition_Response::_beagle_position_type arg)
  {
    msg_.beagle_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::srv::Beagleposition_Response msg_;
};

class Init_Beagleposition_Response_beagle_event
{
public:
  explicit Init_Beagleposition_Response_beagle_event(::beagle_msgs::srv::Beagleposition_Response & msg)
  : msg_(msg)
  {}
  Init_Beagleposition_Response_beagle_position beagle_event(::beagle_msgs::srv::Beagleposition_Response::_beagle_event_type arg)
  {
    msg_.beagle_event = std::move(arg);
    return Init_Beagleposition_Response_beagle_position(msg_);
  }

private:
  ::beagle_msgs::srv::Beagleposition_Response msg_;
};

class Init_Beagleposition_Response_move_point
{
public:
  Init_Beagleposition_Response_move_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Beagleposition_Response_beagle_event move_point(::beagle_msgs::srv::Beagleposition_Response::_move_point_type arg)
  {
    msg_.move_point = std::move(arg);
    return Init_Beagleposition_Response_beagle_event(msg_);
  }

private:
  ::beagle_msgs::srv::Beagleposition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::srv::Beagleposition_Response>()
{
  return beagle_msgs::srv::builder::Init_Beagleposition_Response_move_point();
}

}  // namespace beagle_msgs

#endif  // BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__BUILDER_HPP_
