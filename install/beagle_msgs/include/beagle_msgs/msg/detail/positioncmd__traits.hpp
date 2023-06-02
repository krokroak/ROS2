// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from beagle_msgs:msg/Positioncmd.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__TRAITS_HPP_
#define BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__TRAITS_HPP_

#include "beagle_msgs/msg/detail/positioncmd__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const beagle_msgs::msg::Positioncmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linecount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linecount: ";
    value_to_yaml(msg.linecount, out);
    out << "\n";
  }

  // member: movecount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movecount: ";
    value_to_yaml(msg.movecount, out);
    out << "\n";
  }

  // member: nodecount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nodecount: ";
    value_to_yaml(msg.nodecount, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const beagle_msgs::msg::Positioncmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<beagle_msgs::msg::Positioncmd>()
{
  return "beagle_msgs::msg::Positioncmd";
}

template<>
inline const char * name<beagle_msgs::msg::Positioncmd>()
{
  return "beagle_msgs/msg/Positioncmd";
}

template<>
struct has_fixed_size<beagle_msgs::msg::Positioncmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<beagle_msgs::msg::Positioncmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<beagle_msgs::msg::Positioncmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__TRAITS_HPP_
