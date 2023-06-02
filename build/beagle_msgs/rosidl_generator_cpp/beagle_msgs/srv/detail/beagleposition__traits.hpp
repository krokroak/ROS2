// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from beagle_msgs:srv/Beagleposition.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__TRAITS_HPP_
#define BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__TRAITS_HPP_

#include "beagle_msgs/srv/detail/beagleposition__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const beagle_msgs::srv::Beagleposition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dice_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dice_label: ";
    value_to_yaml(msg.dice_label, out);
    out << "\n";
  }

  // member: user_fir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_fir: ";
    value_to_yaml(msg.user_fir, out);
    out << "\n";
  }

  // member: user_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_sec: ";
    value_to_yaml(msg.user_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const beagle_msgs::srv::Beagleposition_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<beagle_msgs::srv::Beagleposition_Request>()
{
  return "beagle_msgs::srv::Beagleposition_Request";
}

template<>
inline const char * name<beagle_msgs::srv::Beagleposition_Request>()
{
  return "beagle_msgs/srv/Beagleposition_Request";
}

template<>
struct has_fixed_size<beagle_msgs::srv::Beagleposition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<beagle_msgs::srv::Beagleposition_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<beagle_msgs::srv::Beagleposition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const beagle_msgs::srv::Beagleposition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: move_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_point: ";
    value_to_yaml(msg.move_point, out);
    out << "\n";
  }

  // member: beagle_event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beagle_event: ";
    value_to_yaml(msg.beagle_event, out);
    out << "\n";
  }

  // member: beagle_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beagle_position: ";
    value_to_yaml(msg.beagle_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const beagle_msgs::srv::Beagleposition_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<beagle_msgs::srv::Beagleposition_Response>()
{
  return "beagle_msgs::srv::Beagleposition_Response";
}

template<>
inline const char * name<beagle_msgs::srv::Beagleposition_Response>()
{
  return "beagle_msgs/srv/Beagleposition_Response";
}

template<>
struct has_fixed_size<beagle_msgs::srv::Beagleposition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<beagle_msgs::srv::Beagleposition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<beagle_msgs::srv::Beagleposition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<beagle_msgs::srv::Beagleposition>()
{
  return "beagle_msgs::srv::Beagleposition";
}

template<>
inline const char * name<beagle_msgs::srv::Beagleposition>()
{
  return "beagle_msgs/srv/Beagleposition";
}

template<>
struct has_fixed_size<beagle_msgs::srv::Beagleposition>
  : std::integral_constant<
    bool,
    has_fixed_size<beagle_msgs::srv::Beagleposition_Request>::value &&
    has_fixed_size<beagle_msgs::srv::Beagleposition_Response>::value
  >
{
};

template<>
struct has_bounded_size<beagle_msgs::srv::Beagleposition>
  : std::integral_constant<
    bool,
    has_bounded_size<beagle_msgs::srv::Beagleposition_Request>::value &&
    has_bounded_size<beagle_msgs::srv::Beagleposition_Response>::value
  >
{
};

template<>
struct is_service<beagle_msgs::srv::Beagleposition>
  : std::true_type
{
};

template<>
struct is_service_request<beagle_msgs::srv::Beagleposition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<beagle_msgs::srv::Beagleposition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BEAGLE_MSGS__SRV__DETAIL__BEAGLEPOSITION__TRAITS_HPP_
