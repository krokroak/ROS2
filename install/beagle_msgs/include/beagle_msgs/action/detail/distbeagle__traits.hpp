// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from beagle_msgs:action/Distbeagle.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__TRAITS_HPP_
#define BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__TRAITS_HPP_

#include "beagle_msgs/action/detail/distbeagle__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const beagle_msgs::action::Distbeagle_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lidar_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar_dist: ";
    value_to_yaml(msg.lidar_dist, out);
    out << "\n";
  }

  // member: plus_arrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plus_arrow: ";
    value_to_yaml(msg.plus_arrow, out);
    out << "\n";
  }

  // member: minus_arrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minus_arrow: ";
    value_to_yaml(msg.minus_arrow, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const beagle_msgs::action::Distbeagle_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<beagle_msgs::action::Distbeagle_Goal>()
{
  return "beagle_msgs::action::Distbeagle_Goal";
}

template<>
inline const char * name<beagle_msgs::action::Distbeagle_Goal>()
{
  return "beagle_msgs/action/Distbeagle_Goal";
}

template<>
struct has_fixed_size<beagle_msgs::action::Distbeagle_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<beagle_msgs::action::Distbeagle_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<beagle_msgs::action::Distbeagle_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const beagle_msgs::action::Distbeagle_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: count_node_bot_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count_node_bot_1: ";
    value_to_yaml(msg.count_node_bot_1, out);
    out << "\n";
  }

  // member: count_node_bot_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count_node_bot_2: ";
    value_to_yaml(msg.count_node_bot_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const beagle_msgs::action::Distbeagle_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<beagle_msgs::action::Distbeagle_Result>()
{
  return "beagle_msgs::action::Distbeagle_Result";
}

template<>
inline const char * name<beagle_msgs::action::Distbeagle_Result>()
{
  return "beagle_msgs/action/Distbeagle_Result";
}

template<>
struct has_fixed_size<beagle_msgs::action::Distbeagle_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<beagle_msgs::action::Distbeagle_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<beagle_msgs::action::Distbeagle_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const beagle_msgs::action::Distbeagle_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: between_beagle12
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "between_beagle12: ";
    value_to_yaml(msg.between_beagle12, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const beagle_msgs::action::Distbeagle_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<beagle_msgs::action::Distbeagle_Feedback>()
{
  return "beagle_msgs::action::Distbeagle_Feedback";
}

template<>
inline const char * name<beagle_msgs::action::Distbeagle_Feedback>()
{
  return "beagle_msgs/action/Distbeagle_Feedback";
}

template<>
struct has_fixed_size<beagle_msgs::action::Distbeagle_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<beagle_msgs::action::Distbeagle_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<beagle_msgs::action::Distbeagle_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "beagle_msgs/action/detail/distbeagle__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const beagle_msgs::action::Distbeagle_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const beagle_msgs::action::Distbeagle_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<beagle_msgs::action::Distbeagle_SendGoal_Request>()
{
  return "beagle_msgs::action::Distbeagle_SendGoal_Request";
}

template<>
inline const char * name<beagle_msgs::action::Distbeagle_SendGoal_Request>()
{
  return "beagle_msgs/action/Distbeagle_SendGoal_Request";
}

template<>
struct has_fixed_size<beagle_msgs::action::Distbeagle_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<beagle_msgs::action::Distbeagle_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<beagle_msgs::action::Distbeagle_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<beagle_msgs::action::Distbeagle_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<beagle_msgs::action::Distbeagle_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const beagle_msgs::action::Distbeagle_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const beagle_msgs::action::Distbeagle_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<beagle_msgs::action::Distbeagle_SendGoal_Response>()
{
  return "beagle_msgs::action::Distbeagle_SendGoal_Response";
}

template<>
inline const char * name<beagle_msgs::action::Distbeagle_SendGoal_Response>()
{
  return "beagle_msgs/action/Distbeagle_SendGoal_Response";
}

template<>
struct has_fixed_size<beagle_msgs::action::Distbeagle_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<beagle_msgs::action::Distbeagle_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<beagle_msgs::action::Distbeagle_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<beagle_msgs::action::Distbeagle_SendGoal>()
{
  return "beagle_msgs::action::Distbeagle_SendGoal";
}

template<>
inline const char * name<beagle_msgs::action::Distbeagle_SendGoal>()
{
  return "beagle_msgs/action/Distbeagle_SendGoal";
}

template<>
struct has_fixed_size<beagle_msgs::action::Distbeagle_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<beagle_msgs::action::Distbeagle_SendGoal_Request>::value &&
    has_fixed_size<beagle_msgs::action::Distbeagle_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<beagle_msgs::action::Distbeagle_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<beagle_msgs::action::Distbeagle_SendGoal_Request>::value &&
    has_bounded_size<beagle_msgs::action::Distbeagle_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<beagle_msgs::action::Distbeagle_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<beagle_msgs::action::Distbeagle_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<beagle_msgs::action::Distbeagle_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const beagle_msgs::action::Distbeagle_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const beagle_msgs::action::Distbeagle_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<beagle_msgs::action::Distbeagle_GetResult_Request>()
{
  return "beagle_msgs::action::Distbeagle_GetResult_Request";
}

template<>
inline const char * name<beagle_msgs::action::Distbeagle_GetResult_Request>()
{
  return "beagle_msgs/action/Distbeagle_GetResult_Request";
}

template<>
struct has_fixed_size<beagle_msgs::action::Distbeagle_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<beagle_msgs::action::Distbeagle_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<beagle_msgs::action::Distbeagle_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "beagle_msgs/action/detail/distbeagle__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const beagle_msgs::action::Distbeagle_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const beagle_msgs::action::Distbeagle_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<beagle_msgs::action::Distbeagle_GetResult_Response>()
{
  return "beagle_msgs::action::Distbeagle_GetResult_Response";
}

template<>
inline const char * name<beagle_msgs::action::Distbeagle_GetResult_Response>()
{
  return "beagle_msgs/action/Distbeagle_GetResult_Response";
}

template<>
struct has_fixed_size<beagle_msgs::action::Distbeagle_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<beagle_msgs::action::Distbeagle_Result>::value> {};

template<>
struct has_bounded_size<beagle_msgs::action::Distbeagle_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<beagle_msgs::action::Distbeagle_Result>::value> {};

template<>
struct is_message<beagle_msgs::action::Distbeagle_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<beagle_msgs::action::Distbeagle_GetResult>()
{
  return "beagle_msgs::action::Distbeagle_GetResult";
}

template<>
inline const char * name<beagle_msgs::action::Distbeagle_GetResult>()
{
  return "beagle_msgs/action/Distbeagle_GetResult";
}

template<>
struct has_fixed_size<beagle_msgs::action::Distbeagle_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<beagle_msgs::action::Distbeagle_GetResult_Request>::value &&
    has_fixed_size<beagle_msgs::action::Distbeagle_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<beagle_msgs::action::Distbeagle_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<beagle_msgs::action::Distbeagle_GetResult_Request>::value &&
    has_bounded_size<beagle_msgs::action::Distbeagle_GetResult_Response>::value
  >
{
};

template<>
struct is_service<beagle_msgs::action::Distbeagle_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<beagle_msgs::action::Distbeagle_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<beagle_msgs::action::Distbeagle_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "beagle_msgs/action/detail/distbeagle__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const beagle_msgs::action::Distbeagle_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const beagle_msgs::action::Distbeagle_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<beagle_msgs::action::Distbeagle_FeedbackMessage>()
{
  return "beagle_msgs::action::Distbeagle_FeedbackMessage";
}

template<>
inline const char * name<beagle_msgs::action::Distbeagle_FeedbackMessage>()
{
  return "beagle_msgs/action/Distbeagle_FeedbackMessage";
}

template<>
struct has_fixed_size<beagle_msgs::action::Distbeagle_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<beagle_msgs::action::Distbeagle_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<beagle_msgs::action::Distbeagle_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<beagle_msgs::action::Distbeagle_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<beagle_msgs::action::Distbeagle_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<beagle_msgs::action::Distbeagle>
  : std::true_type
{
};

template<>
struct is_action_goal<beagle_msgs::action::Distbeagle_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<beagle_msgs::action::Distbeagle_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<beagle_msgs::action::Distbeagle_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__TRAITS_HPP_
