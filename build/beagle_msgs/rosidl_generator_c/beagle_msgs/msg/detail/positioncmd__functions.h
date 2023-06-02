// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from beagle_msgs:msg/Positioncmd.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__FUNCTIONS_H_
#define BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "beagle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "beagle_msgs/msg/detail/positioncmd__struct.h"

/// Initialize msg/Positioncmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beagle_msgs__msg__Positioncmd
 * )) before or use
 * beagle_msgs__msg__Positioncmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__msg__Positioncmd__init(beagle_msgs__msg__Positioncmd * msg);

/// Finalize msg/Positioncmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__msg__Positioncmd__fini(beagle_msgs__msg__Positioncmd * msg);

/// Create msg/Positioncmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beagle_msgs__msg__Positioncmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__msg__Positioncmd *
beagle_msgs__msg__Positioncmd__create();

/// Destroy msg/Positioncmd message.
/**
 * It calls
 * beagle_msgs__msg__Positioncmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__msg__Positioncmd__destroy(beagle_msgs__msg__Positioncmd * msg);

/// Check for msg/Positioncmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__msg__Positioncmd__are_equal(const beagle_msgs__msg__Positioncmd * lhs, const beagle_msgs__msg__Positioncmd * rhs);

/// Copy a msg/Positioncmd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__msg__Positioncmd__copy(
  const beagle_msgs__msg__Positioncmd * input,
  beagle_msgs__msg__Positioncmd * output);

/// Initialize array of msg/Positioncmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * beagle_msgs__msg__Positioncmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__msg__Positioncmd__Sequence__init(beagle_msgs__msg__Positioncmd__Sequence * array, size_t size);

/// Finalize array of msg/Positioncmd messages.
/**
 * It calls
 * beagle_msgs__msg__Positioncmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__msg__Positioncmd__Sequence__fini(beagle_msgs__msg__Positioncmd__Sequence * array);

/// Create array of msg/Positioncmd messages.
/**
 * It allocates the memory for the array and calls
 * beagle_msgs__msg__Positioncmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__msg__Positioncmd__Sequence *
beagle_msgs__msg__Positioncmd__Sequence__create(size_t size);

/// Destroy array of msg/Positioncmd messages.
/**
 * It calls
 * beagle_msgs__msg__Positioncmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__msg__Positioncmd__Sequence__destroy(beagle_msgs__msg__Positioncmd__Sequence * array);

/// Check for msg/Positioncmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__msg__Positioncmd__Sequence__are_equal(const beagle_msgs__msg__Positioncmd__Sequence * lhs, const beagle_msgs__msg__Positioncmd__Sequence * rhs);

/// Copy an array of msg/Positioncmd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__msg__Positioncmd__Sequence__copy(
  const beagle_msgs__msg__Positioncmd__Sequence * input,
  beagle_msgs__msg__Positioncmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEAGLE_MSGS__MSG__DETAIL__POSITIONCMD__FUNCTIONS_H_
