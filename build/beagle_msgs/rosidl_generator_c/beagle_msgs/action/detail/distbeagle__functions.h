// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from beagle_msgs:action/Distbeagle.idl
// generated code does not contain a copyright notice

#ifndef BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__FUNCTIONS_H_
#define BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "beagle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "beagle_msgs/action/detail/distbeagle__struct.h"

/// Initialize action/Distbeagle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beagle_msgs__action__Distbeagle_Goal
 * )) before or use
 * beagle_msgs__action__Distbeagle_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Goal__init(beagle_msgs__action__Distbeagle_Goal * msg);

/// Finalize action/Distbeagle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Goal__fini(beagle_msgs__action__Distbeagle_Goal * msg);

/// Create action/Distbeagle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beagle_msgs__action__Distbeagle_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_Goal *
beagle_msgs__action__Distbeagle_Goal__create();

/// Destroy action/Distbeagle message.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Goal__destroy(beagle_msgs__action__Distbeagle_Goal * msg);

/// Check for action/Distbeagle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Goal__are_equal(const beagle_msgs__action__Distbeagle_Goal * lhs, const beagle_msgs__action__Distbeagle_Goal * rhs);

/// Copy a action/Distbeagle message.
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
beagle_msgs__action__Distbeagle_Goal__copy(
  const beagle_msgs__action__Distbeagle_Goal * input,
  beagle_msgs__action__Distbeagle_Goal * output);

/// Initialize array of action/Distbeagle messages.
/**
 * It allocates the memory for the number of elements and calls
 * beagle_msgs__action__Distbeagle_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Goal__Sequence__init(beagle_msgs__action__Distbeagle_Goal__Sequence * array, size_t size);

/// Finalize array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Goal__Sequence__fini(beagle_msgs__action__Distbeagle_Goal__Sequence * array);

/// Create array of action/Distbeagle messages.
/**
 * It allocates the memory for the array and calls
 * beagle_msgs__action__Distbeagle_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_Goal__Sequence *
beagle_msgs__action__Distbeagle_Goal__Sequence__create(size_t size);

/// Destroy array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Goal__Sequence__destroy(beagle_msgs__action__Distbeagle_Goal__Sequence * array);

/// Check for action/Distbeagle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Goal__Sequence__are_equal(const beagle_msgs__action__Distbeagle_Goal__Sequence * lhs, const beagle_msgs__action__Distbeagle_Goal__Sequence * rhs);

/// Copy an array of action/Distbeagle messages.
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
beagle_msgs__action__Distbeagle_Goal__Sequence__copy(
  const beagle_msgs__action__Distbeagle_Goal__Sequence * input,
  beagle_msgs__action__Distbeagle_Goal__Sequence * output);

/// Initialize action/Distbeagle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beagle_msgs__action__Distbeagle_Result
 * )) before or use
 * beagle_msgs__action__Distbeagle_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Result__init(beagle_msgs__action__Distbeagle_Result * msg);

/// Finalize action/Distbeagle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Result__fini(beagle_msgs__action__Distbeagle_Result * msg);

/// Create action/Distbeagle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beagle_msgs__action__Distbeagle_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_Result *
beagle_msgs__action__Distbeagle_Result__create();

/// Destroy action/Distbeagle message.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Result__destroy(beagle_msgs__action__Distbeagle_Result * msg);

/// Check for action/Distbeagle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Result__are_equal(const beagle_msgs__action__Distbeagle_Result * lhs, const beagle_msgs__action__Distbeagle_Result * rhs);

/// Copy a action/Distbeagle message.
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
beagle_msgs__action__Distbeagle_Result__copy(
  const beagle_msgs__action__Distbeagle_Result * input,
  beagle_msgs__action__Distbeagle_Result * output);

/// Initialize array of action/Distbeagle messages.
/**
 * It allocates the memory for the number of elements and calls
 * beagle_msgs__action__Distbeagle_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Result__Sequence__init(beagle_msgs__action__Distbeagle_Result__Sequence * array, size_t size);

/// Finalize array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Result__Sequence__fini(beagle_msgs__action__Distbeagle_Result__Sequence * array);

/// Create array of action/Distbeagle messages.
/**
 * It allocates the memory for the array and calls
 * beagle_msgs__action__Distbeagle_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_Result__Sequence *
beagle_msgs__action__Distbeagle_Result__Sequence__create(size_t size);

/// Destroy array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Result__Sequence__destroy(beagle_msgs__action__Distbeagle_Result__Sequence * array);

/// Check for action/Distbeagle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Result__Sequence__are_equal(const beagle_msgs__action__Distbeagle_Result__Sequence * lhs, const beagle_msgs__action__Distbeagle_Result__Sequence * rhs);

/// Copy an array of action/Distbeagle messages.
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
beagle_msgs__action__Distbeagle_Result__Sequence__copy(
  const beagle_msgs__action__Distbeagle_Result__Sequence * input,
  beagle_msgs__action__Distbeagle_Result__Sequence * output);

/// Initialize action/Distbeagle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beagle_msgs__action__Distbeagle_Feedback
 * )) before or use
 * beagle_msgs__action__Distbeagle_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Feedback__init(beagle_msgs__action__Distbeagle_Feedback * msg);

/// Finalize action/Distbeagle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Feedback__fini(beagle_msgs__action__Distbeagle_Feedback * msg);

/// Create action/Distbeagle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beagle_msgs__action__Distbeagle_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_Feedback *
beagle_msgs__action__Distbeagle_Feedback__create();

/// Destroy action/Distbeagle message.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Feedback__destroy(beagle_msgs__action__Distbeagle_Feedback * msg);

/// Check for action/Distbeagle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Feedback__are_equal(const beagle_msgs__action__Distbeagle_Feedback * lhs, const beagle_msgs__action__Distbeagle_Feedback * rhs);

/// Copy a action/Distbeagle message.
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
beagle_msgs__action__Distbeagle_Feedback__copy(
  const beagle_msgs__action__Distbeagle_Feedback * input,
  beagle_msgs__action__Distbeagle_Feedback * output);

/// Initialize array of action/Distbeagle messages.
/**
 * It allocates the memory for the number of elements and calls
 * beagle_msgs__action__Distbeagle_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Feedback__Sequence__init(beagle_msgs__action__Distbeagle_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Feedback__Sequence__fini(beagle_msgs__action__Distbeagle_Feedback__Sequence * array);

/// Create array of action/Distbeagle messages.
/**
 * It allocates the memory for the array and calls
 * beagle_msgs__action__Distbeagle_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_Feedback__Sequence *
beagle_msgs__action__Distbeagle_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_Feedback__Sequence__destroy(beagle_msgs__action__Distbeagle_Feedback__Sequence * array);

/// Check for action/Distbeagle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_Feedback__Sequence__are_equal(const beagle_msgs__action__Distbeagle_Feedback__Sequence * lhs, const beagle_msgs__action__Distbeagle_Feedback__Sequence * rhs);

/// Copy an array of action/Distbeagle messages.
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
beagle_msgs__action__Distbeagle_Feedback__Sequence__copy(
  const beagle_msgs__action__Distbeagle_Feedback__Sequence * input,
  beagle_msgs__action__Distbeagle_Feedback__Sequence * output);

/// Initialize action/Distbeagle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beagle_msgs__action__Distbeagle_SendGoal_Request
 * )) before or use
 * beagle_msgs__action__Distbeagle_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_SendGoal_Request__init(beagle_msgs__action__Distbeagle_SendGoal_Request * msg);

/// Finalize action/Distbeagle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_SendGoal_Request__fini(beagle_msgs__action__Distbeagle_SendGoal_Request * msg);

/// Create action/Distbeagle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beagle_msgs__action__Distbeagle_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_SendGoal_Request *
beagle_msgs__action__Distbeagle_SendGoal_Request__create();

/// Destroy action/Distbeagle message.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_SendGoal_Request__destroy(beagle_msgs__action__Distbeagle_SendGoal_Request * msg);

/// Check for action/Distbeagle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_SendGoal_Request__are_equal(const beagle_msgs__action__Distbeagle_SendGoal_Request * lhs, const beagle_msgs__action__Distbeagle_SendGoal_Request * rhs);

/// Copy a action/Distbeagle message.
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
beagle_msgs__action__Distbeagle_SendGoal_Request__copy(
  const beagle_msgs__action__Distbeagle_SendGoal_Request * input,
  beagle_msgs__action__Distbeagle_SendGoal_Request * output);

/// Initialize array of action/Distbeagle messages.
/**
 * It allocates the memory for the number of elements and calls
 * beagle_msgs__action__Distbeagle_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__init(beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__fini(beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * array);

/// Create array of action/Distbeagle messages.
/**
 * It allocates the memory for the array and calls
 * beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence *
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__destroy(beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * array);

/// Check for action/Distbeagle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__are_equal(const beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * lhs, const beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Distbeagle messages.
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
beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence__copy(
  const beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * input,
  beagle_msgs__action__Distbeagle_SendGoal_Request__Sequence * output);

/// Initialize action/Distbeagle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beagle_msgs__action__Distbeagle_SendGoal_Response
 * )) before or use
 * beagle_msgs__action__Distbeagle_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_SendGoal_Response__init(beagle_msgs__action__Distbeagle_SendGoal_Response * msg);

/// Finalize action/Distbeagle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_SendGoal_Response__fini(beagle_msgs__action__Distbeagle_SendGoal_Response * msg);

/// Create action/Distbeagle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beagle_msgs__action__Distbeagle_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_SendGoal_Response *
beagle_msgs__action__Distbeagle_SendGoal_Response__create();

/// Destroy action/Distbeagle message.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_SendGoal_Response__destroy(beagle_msgs__action__Distbeagle_SendGoal_Response * msg);

/// Check for action/Distbeagle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_SendGoal_Response__are_equal(const beagle_msgs__action__Distbeagle_SendGoal_Response * lhs, const beagle_msgs__action__Distbeagle_SendGoal_Response * rhs);

/// Copy a action/Distbeagle message.
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
beagle_msgs__action__Distbeagle_SendGoal_Response__copy(
  const beagle_msgs__action__Distbeagle_SendGoal_Response * input,
  beagle_msgs__action__Distbeagle_SendGoal_Response * output);

/// Initialize array of action/Distbeagle messages.
/**
 * It allocates the memory for the number of elements and calls
 * beagle_msgs__action__Distbeagle_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__init(beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__fini(beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * array);

/// Create array of action/Distbeagle messages.
/**
 * It allocates the memory for the array and calls
 * beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence *
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__destroy(beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * array);

/// Check for action/Distbeagle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__are_equal(const beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * lhs, const beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Distbeagle messages.
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
beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence__copy(
  const beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * input,
  beagle_msgs__action__Distbeagle_SendGoal_Response__Sequence * output);

/// Initialize action/Distbeagle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beagle_msgs__action__Distbeagle_GetResult_Request
 * )) before or use
 * beagle_msgs__action__Distbeagle_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_GetResult_Request__init(beagle_msgs__action__Distbeagle_GetResult_Request * msg);

/// Finalize action/Distbeagle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_GetResult_Request__fini(beagle_msgs__action__Distbeagle_GetResult_Request * msg);

/// Create action/Distbeagle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beagle_msgs__action__Distbeagle_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_GetResult_Request *
beagle_msgs__action__Distbeagle_GetResult_Request__create();

/// Destroy action/Distbeagle message.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_GetResult_Request__destroy(beagle_msgs__action__Distbeagle_GetResult_Request * msg);

/// Check for action/Distbeagle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_GetResult_Request__are_equal(const beagle_msgs__action__Distbeagle_GetResult_Request * lhs, const beagle_msgs__action__Distbeagle_GetResult_Request * rhs);

/// Copy a action/Distbeagle message.
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
beagle_msgs__action__Distbeagle_GetResult_Request__copy(
  const beagle_msgs__action__Distbeagle_GetResult_Request * input,
  beagle_msgs__action__Distbeagle_GetResult_Request * output);

/// Initialize array of action/Distbeagle messages.
/**
 * It allocates the memory for the number of elements and calls
 * beagle_msgs__action__Distbeagle_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__init(beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__fini(beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * array);

/// Create array of action/Distbeagle messages.
/**
 * It allocates the memory for the array and calls
 * beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence *
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__destroy(beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * array);

/// Check for action/Distbeagle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__are_equal(const beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * lhs, const beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Distbeagle messages.
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
beagle_msgs__action__Distbeagle_GetResult_Request__Sequence__copy(
  const beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * input,
  beagle_msgs__action__Distbeagle_GetResult_Request__Sequence * output);

/// Initialize action/Distbeagle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beagle_msgs__action__Distbeagle_GetResult_Response
 * )) before or use
 * beagle_msgs__action__Distbeagle_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_GetResult_Response__init(beagle_msgs__action__Distbeagle_GetResult_Response * msg);

/// Finalize action/Distbeagle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_GetResult_Response__fini(beagle_msgs__action__Distbeagle_GetResult_Response * msg);

/// Create action/Distbeagle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beagle_msgs__action__Distbeagle_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_GetResult_Response *
beagle_msgs__action__Distbeagle_GetResult_Response__create();

/// Destroy action/Distbeagle message.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_GetResult_Response__destroy(beagle_msgs__action__Distbeagle_GetResult_Response * msg);

/// Check for action/Distbeagle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_GetResult_Response__are_equal(const beagle_msgs__action__Distbeagle_GetResult_Response * lhs, const beagle_msgs__action__Distbeagle_GetResult_Response * rhs);

/// Copy a action/Distbeagle message.
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
beagle_msgs__action__Distbeagle_GetResult_Response__copy(
  const beagle_msgs__action__Distbeagle_GetResult_Response * input,
  beagle_msgs__action__Distbeagle_GetResult_Response * output);

/// Initialize array of action/Distbeagle messages.
/**
 * It allocates the memory for the number of elements and calls
 * beagle_msgs__action__Distbeagle_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__init(beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__fini(beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * array);

/// Create array of action/Distbeagle messages.
/**
 * It allocates the memory for the array and calls
 * beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence *
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__destroy(beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * array);

/// Check for action/Distbeagle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__are_equal(const beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * lhs, const beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Distbeagle messages.
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
beagle_msgs__action__Distbeagle_GetResult_Response__Sequence__copy(
  const beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * input,
  beagle_msgs__action__Distbeagle_GetResult_Response__Sequence * output);

/// Initialize action/Distbeagle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beagle_msgs__action__Distbeagle_FeedbackMessage
 * )) before or use
 * beagle_msgs__action__Distbeagle_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_FeedbackMessage__init(beagle_msgs__action__Distbeagle_FeedbackMessage * msg);

/// Finalize action/Distbeagle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_FeedbackMessage__fini(beagle_msgs__action__Distbeagle_FeedbackMessage * msg);

/// Create action/Distbeagle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beagle_msgs__action__Distbeagle_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_FeedbackMessage *
beagle_msgs__action__Distbeagle_FeedbackMessage__create();

/// Destroy action/Distbeagle message.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_FeedbackMessage__destroy(beagle_msgs__action__Distbeagle_FeedbackMessage * msg);

/// Check for action/Distbeagle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_FeedbackMessage__are_equal(const beagle_msgs__action__Distbeagle_FeedbackMessage * lhs, const beagle_msgs__action__Distbeagle_FeedbackMessage * rhs);

/// Copy a action/Distbeagle message.
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
beagle_msgs__action__Distbeagle_FeedbackMessage__copy(
  const beagle_msgs__action__Distbeagle_FeedbackMessage * input,
  beagle_msgs__action__Distbeagle_FeedbackMessage * output);

/// Initialize array of action/Distbeagle messages.
/**
 * It allocates the memory for the number of elements and calls
 * beagle_msgs__action__Distbeagle_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__init(beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__fini(beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * array);

/// Create array of action/Distbeagle messages.
/**
 * It allocates the memory for the array and calls
 * beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence *
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Distbeagle messages.
/**
 * It calls
 * beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
void
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__destroy(beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * array);

/// Check for action/Distbeagle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beagle_msgs
bool
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__are_equal(const beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * lhs, const beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Distbeagle messages.
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
beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence__copy(
  const beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * input,
  beagle_msgs__action__Distbeagle_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEAGLE_MSGS__ACTION__DETAIL__DISTBEAGLE__FUNCTIONS_H_
