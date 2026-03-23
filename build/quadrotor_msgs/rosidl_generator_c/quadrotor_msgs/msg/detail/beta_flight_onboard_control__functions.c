// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadrotor_msgs:msg/BetaFlightOnboardControl.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/beta_flight_onboard_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `angular_velocity_desired`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `quaternion_desired`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
quadrotor_msgs__msg__BetaFlightOnboardControl__init(quadrotor_msgs__msg__BetaFlightOnboardControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    quadrotor_msgs__msg__BetaFlightOnboardControl__fini(msg);
    return false;
  }
  // angular_velocity_desired
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity_desired)) {
    quadrotor_msgs__msg__BetaFlightOnboardControl__fini(msg);
    return false;
  }
  // quaternion_desired
  if (!geometry_msgs__msg__Quaternion__init(&msg->quaternion_desired)) {
    quadrotor_msgs__msg__BetaFlightOnboardControl__fini(msg);
    return false;
  }
  // thrust_desired
  // active_offboard
  // active_attitude
  // active_acro
  return true;
}

void
quadrotor_msgs__msg__BetaFlightOnboardControl__fini(quadrotor_msgs__msg__BetaFlightOnboardControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // angular_velocity_desired
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity_desired);
  // quaternion_desired
  geometry_msgs__msg__Quaternion__fini(&msg->quaternion_desired);
  // thrust_desired
  // active_offboard
  // active_attitude
  // active_acro
}

bool
quadrotor_msgs__msg__BetaFlightOnboardControl__are_equal(const quadrotor_msgs__msg__BetaFlightOnboardControl * lhs, const quadrotor_msgs__msg__BetaFlightOnboardControl * rhs)
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
  // angular_velocity_desired
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity_desired), &(rhs->angular_velocity_desired)))
  {
    return false;
  }
  // quaternion_desired
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->quaternion_desired), &(rhs->quaternion_desired)))
  {
    return false;
  }
  // thrust_desired
  if (lhs->thrust_desired != rhs->thrust_desired) {
    return false;
  }
  // active_offboard
  if (lhs->active_offboard != rhs->active_offboard) {
    return false;
  }
  // active_attitude
  if (lhs->active_attitude != rhs->active_attitude) {
    return false;
  }
  // active_acro
  if (lhs->active_acro != rhs->active_acro) {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__msg__BetaFlightOnboardControl__copy(
  const quadrotor_msgs__msg__BetaFlightOnboardControl * input,
  quadrotor_msgs__msg__BetaFlightOnboardControl * output)
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
  // angular_velocity_desired
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity_desired), &(output->angular_velocity_desired)))
  {
    return false;
  }
  // quaternion_desired
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->quaternion_desired), &(output->quaternion_desired)))
  {
    return false;
  }
  // thrust_desired
  output->thrust_desired = input->thrust_desired;
  // active_offboard
  output->active_offboard = input->active_offboard;
  // active_attitude
  output->active_attitude = input->active_attitude;
  // active_acro
  output->active_acro = input->active_acro;
  return true;
}

quadrotor_msgs__msg__BetaFlightOnboardControl *
quadrotor_msgs__msg__BetaFlightOnboardControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__BetaFlightOnboardControl * msg = (quadrotor_msgs__msg__BetaFlightOnboardControl *)allocator.allocate(sizeof(quadrotor_msgs__msg__BetaFlightOnboardControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__msg__BetaFlightOnboardControl));
  bool success = quadrotor_msgs__msg__BetaFlightOnboardControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__msg__BetaFlightOnboardControl__destroy(quadrotor_msgs__msg__BetaFlightOnboardControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__msg__BetaFlightOnboardControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence__init(quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__BetaFlightOnboardControl * data = NULL;

  if (size) {
    data = (quadrotor_msgs__msg__BetaFlightOnboardControl *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__msg__BetaFlightOnboardControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__msg__BetaFlightOnboardControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__msg__BetaFlightOnboardControl__fini(&data[i - 1]);
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
quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence__fini(quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence * array)
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
      quadrotor_msgs__msg__BetaFlightOnboardControl__fini(&array->data[i]);
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

quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence *
quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence * array = (quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence__destroy(quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence__are_equal(const quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence * lhs, const quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__msg__BetaFlightOnboardControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence__copy(
  const quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence * input,
  quadrotor_msgs__msg__BetaFlightOnboardControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__msg__BetaFlightOnboardControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__msg__BetaFlightOnboardControl * data =
      (quadrotor_msgs__msg__BetaFlightOnboardControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__msg__BetaFlightOnboardControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__msg__BetaFlightOnboardControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__msg__BetaFlightOnboardControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
