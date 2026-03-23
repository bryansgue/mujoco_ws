// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadrotor_msgs:msg/BetaFlightStates.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/beta_flight_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `linear_acceleration`
// Member `angular_velocity`
// Member `linear_acceleration_filtered`
// Member `angular_acceleration_filtered`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
quadrotor_msgs__msg__BetaFlightStates__init(quadrotor_msgs__msg__BetaFlightStates * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    quadrotor_msgs__msg__BetaFlightStates__fini(msg);
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_acceleration)) {
    quadrotor_msgs__msg__BetaFlightStates__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    quadrotor_msgs__msg__BetaFlightStates__fini(msg);
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__init(&msg->quaternion)) {
    quadrotor_msgs__msg__BetaFlightStates__fini(msg);
    return false;
  }
  // linear_acceleration_filtered
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_acceleration_filtered)) {
    quadrotor_msgs__msg__BetaFlightStates__fini(msg);
    return false;
  }
  // angular_acceleration_filtered
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_acceleration_filtered)) {
    quadrotor_msgs__msg__BetaFlightStates__fini(msg);
    return false;
  }
  // motor
  return true;
}

void
quadrotor_msgs__msg__BetaFlightStates__fini(quadrotor_msgs__msg__BetaFlightStates * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // linear_acceleration
  geometry_msgs__msg__Vector3__fini(&msg->linear_acceleration);
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
  // quaternion
  geometry_msgs__msg__Quaternion__fini(&msg->quaternion);
  // linear_acceleration_filtered
  geometry_msgs__msg__Vector3__fini(&msg->linear_acceleration_filtered);
  // angular_acceleration_filtered
  geometry_msgs__msg__Vector3__fini(&msg->angular_acceleration_filtered);
  // motor
}

bool
quadrotor_msgs__msg__BetaFlightStates__are_equal(const quadrotor_msgs__msg__BetaFlightStates * lhs, const quadrotor_msgs__msg__BetaFlightStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->quaternion), &(rhs->quaternion)))
  {
    return false;
  }
  // linear_acceleration_filtered
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_acceleration_filtered), &(rhs->linear_acceleration_filtered)))
  {
    return false;
  }
  // angular_acceleration_filtered
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_acceleration_filtered), &(rhs->angular_acceleration_filtered)))
  {
    return false;
  }
  // motor
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->motor[i] != rhs->motor[i]) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__msg__BetaFlightStates__copy(
  const quadrotor_msgs__msg__BetaFlightStates * input,
  quadrotor_msgs__msg__BetaFlightStates * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->quaternion), &(output->quaternion)))
  {
    return false;
  }
  // linear_acceleration_filtered
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_acceleration_filtered), &(output->linear_acceleration_filtered)))
  {
    return false;
  }
  // angular_acceleration_filtered
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_acceleration_filtered), &(output->angular_acceleration_filtered)))
  {
    return false;
  }
  // motor
  for (size_t i = 0; i < 4; ++i) {
    output->motor[i] = input->motor[i];
  }
  return true;
}

quadrotor_msgs__msg__BetaFlightStates *
quadrotor_msgs__msg__BetaFlightStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__BetaFlightStates * msg = (quadrotor_msgs__msg__BetaFlightStates *)allocator.allocate(sizeof(quadrotor_msgs__msg__BetaFlightStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__msg__BetaFlightStates));
  bool success = quadrotor_msgs__msg__BetaFlightStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__msg__BetaFlightStates__destroy(quadrotor_msgs__msg__BetaFlightStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__msg__BetaFlightStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__msg__BetaFlightStates__Sequence__init(quadrotor_msgs__msg__BetaFlightStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__BetaFlightStates * data = NULL;

  if (size) {
    data = (quadrotor_msgs__msg__BetaFlightStates *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__msg__BetaFlightStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__msg__BetaFlightStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__msg__BetaFlightStates__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
quadrotor_msgs__msg__BetaFlightStates__Sequence__fini(quadrotor_msgs__msg__BetaFlightStates__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      quadrotor_msgs__msg__BetaFlightStates__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

quadrotor_msgs__msg__BetaFlightStates__Sequence *
quadrotor_msgs__msg__BetaFlightStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__BetaFlightStates__Sequence * array = (quadrotor_msgs__msg__BetaFlightStates__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__msg__BetaFlightStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__msg__BetaFlightStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__msg__BetaFlightStates__Sequence__destroy(quadrotor_msgs__msg__BetaFlightStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__msg__BetaFlightStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__msg__BetaFlightStates__Sequence__are_equal(const quadrotor_msgs__msg__BetaFlightStates__Sequence * lhs, const quadrotor_msgs__msg__BetaFlightStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__msg__BetaFlightStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__msg__BetaFlightStates__Sequence__copy(
  const quadrotor_msgs__msg__BetaFlightStates__Sequence * input,
  quadrotor_msgs__msg__BetaFlightStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__msg__BetaFlightStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__msg__BetaFlightStates * data =
      (quadrotor_msgs__msg__BetaFlightStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__msg__BetaFlightStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__msg__BetaFlightStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__msg__BetaFlightStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
