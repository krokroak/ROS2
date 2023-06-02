// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beagle_msgs:action/Distbeagle.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__BUILDER_HPP_
#define BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__BUILDER_HPP_

#include "beagle_msgs/action/detail/distbeagle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace beagle_msgs
{

namespace action
{

namespace builder
{

class Init_Distbeagle_Goal_minus_arrow
{
public:
  explicit Init_Distbeagle_Goal_minus_arrow(::beagle_msgs::action::Distbeagle_Goal & msg)
  : msg_(msg)
  {}
  ::beagle_msgs::action::Distbeagle_Goal minus_arrow(::beagle_msgs::action::Distbeagle_Goal::_minus_arrow_type arg)
  {
    msg_.minus_arrow = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_Goal msg_;
};

class Init_Distbeagle_Goal_plus_arrow
{
public:
  explicit Init_Distbeagle_Goal_plus_arrow(::beagle_msgs::action::Distbeagle_Goal & msg)
  : msg_(msg)
  {}
  Init_Distbeagle_Goal_minus_arrow plus_arrow(::beagle_msgs::action::Distbeagle_Goal::_plus_arrow_type arg)
  {
    msg_.plus_arrow = std::move(arg);
    return Init_Distbeagle_Goal_minus_arrow(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_Goal msg_;
};

class Init_Distbeagle_Goal_lidar_dist
{
public:
  Init_Distbeagle_Goal_lidar_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distbeagle_Goal_plus_arrow lidar_dist(::beagle_msgs::action::Distbeagle_Goal::_lidar_dist_type arg)
  {
    msg_.lidar_dist = std::move(arg);
    return Init_Distbeagle_Goal_plus_arrow(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::action::Distbeagle_Goal>()
{
  return beagle_msgs::action::builder::Init_Distbeagle_Goal_lidar_dist();
}

}  // namespace beagle_msgs


namespace beagle_msgs
{

namespace action
{

namespace builder
{

class Init_Distbeagle_Result_count_node_bot_2
{
public:
  explicit Init_Distbeagle_Result_count_node_bot_2(::beagle_msgs::action::Distbeagle_Result & msg)
  : msg_(msg)
  {}
  ::beagle_msgs::action::Distbeagle_Result count_node_bot_2(::beagle_msgs::action::Distbeagle_Result::_count_node_bot_2_type arg)
  {
    msg_.count_node_bot_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_Result msg_;
};

class Init_Distbeagle_Result_count_node_bot_1
{
public:
  Init_Distbeagle_Result_count_node_bot_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distbeagle_Result_count_node_bot_2 count_node_bot_1(::beagle_msgs::action::Distbeagle_Result::_count_node_bot_1_type arg)
  {
    msg_.count_node_bot_1 = std::move(arg);
    return Init_Distbeagle_Result_count_node_bot_2(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::action::Distbeagle_Result>()
{
  return beagle_msgs::action::builder::Init_Distbeagle_Result_count_node_bot_1();
}

}  // namespace beagle_msgs


namespace beagle_msgs
{

namespace action
{

namespace builder
{

class Init_Distbeagle_Feedback_between_beagle12
{
public:
  Init_Distbeagle_Feedback_between_beagle12()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beagle_msgs::action::Distbeagle_Feedback between_beagle12(::beagle_msgs::action::Distbeagle_Feedback::_between_beagle12_type arg)
  {
    msg_.between_beagle12 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::action::Distbeagle_Feedback>()
{
  return beagle_msgs::action::builder::Init_Distbeagle_Feedback_between_beagle12();
}

}  // namespace beagle_msgs


namespace beagle_msgs
{

namespace action
{

namespace builder
{

class Init_Distbeagle_SendGoal_Request_goal
{
public:
  explicit Init_Distbeagle_SendGoal_Request_goal(::beagle_msgs::action::Distbeagle_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::beagle_msgs::action::Distbeagle_SendGoal_Request goal(::beagle_msgs::action::Distbeagle_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_SendGoal_Request msg_;
};

class Init_Distbeagle_SendGoal_Request_goal_id
{
public:
  Init_Distbeagle_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distbeagle_SendGoal_Request_goal goal_id(::beagle_msgs::action::Distbeagle_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Distbeagle_SendGoal_Request_goal(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::action::Distbeagle_SendGoal_Request>()
{
  return beagle_msgs::action::builder::Init_Distbeagle_SendGoal_Request_goal_id();
}

}  // namespace beagle_msgs


namespace beagle_msgs
{

namespace action
{

namespace builder
{

class Init_Distbeagle_SendGoal_Response_stamp
{
public:
  explicit Init_Distbeagle_SendGoal_Response_stamp(::beagle_msgs::action::Distbeagle_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::beagle_msgs::action::Distbeagle_SendGoal_Response stamp(::beagle_msgs::action::Distbeagle_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_SendGoal_Response msg_;
};

class Init_Distbeagle_SendGoal_Response_accepted
{
public:
  Init_Distbeagle_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distbeagle_SendGoal_Response_stamp accepted(::beagle_msgs::action::Distbeagle_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Distbeagle_SendGoal_Response_stamp(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::action::Distbeagle_SendGoal_Response>()
{
  return beagle_msgs::action::builder::Init_Distbeagle_SendGoal_Response_accepted();
}

}  // namespace beagle_msgs


namespace beagle_msgs
{

namespace action
{

namespace builder
{

class Init_Distbeagle_GetResult_Request_goal_id
{
public:
  Init_Distbeagle_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beagle_msgs::action::Distbeagle_GetResult_Request goal_id(::beagle_msgs::action::Distbeagle_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::action::Distbeagle_GetResult_Request>()
{
  return beagle_msgs::action::builder::Init_Distbeagle_GetResult_Request_goal_id();
}

}  // namespace beagle_msgs


namespace beagle_msgs
{

namespace action
{

namespace builder
{

class Init_Distbeagle_GetResult_Response_result
{
public:
  explicit Init_Distbeagle_GetResult_Response_result(::beagle_msgs::action::Distbeagle_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::beagle_msgs::action::Distbeagle_GetResult_Response result(::beagle_msgs::action::Distbeagle_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_GetResult_Response msg_;
};

class Init_Distbeagle_GetResult_Response_status
{
public:
  Init_Distbeagle_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distbeagle_GetResult_Response_result status(::beagle_msgs::action::Distbeagle_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Distbeagle_GetResult_Response_result(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::action::Distbeagle_GetResult_Response>()
{
  return beagle_msgs::action::builder::Init_Distbeagle_GetResult_Response_status();
}

}  // namespace beagle_msgs


namespace beagle_msgs
{

namespace action
{

namespace builder
{

class Init_Distbeagle_FeedbackMessage_feedback
{
public:
  explicit Init_Distbeagle_FeedbackMessage_feedback(::beagle_msgs::action::Distbeagle_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::beagle_msgs::action::Distbeagle_FeedbackMessage feedback(::beagle_msgs::action::Distbeagle_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_FeedbackMessage msg_;
};

class Init_Distbeagle_FeedbackMessage_goal_id
{
public:
  Init_Distbeagle_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Distbeagle_FeedbackMessage_feedback goal_id(::beagle_msgs::action::Distbeagle_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Distbeagle_FeedbackMessage_feedback(msg_);
  }

private:
  ::beagle_msgs::action::Distbeagle_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::beagle_msgs::action::Distbeagle_FeedbackMessage>()
{
  return beagle_msgs::action::builder::Init_Distbeagle_FeedbackMessage_goal_id();
}

}  // namespace beagle_msgs

#endif  // BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__BUILDER_HPP_
