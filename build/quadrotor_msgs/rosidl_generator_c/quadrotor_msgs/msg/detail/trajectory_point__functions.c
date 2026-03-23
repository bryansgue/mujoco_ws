// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadrotor_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
// Member `position_quad`
// Member `velocity_quad`
// Member `acceleration_quad`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `velocity`
// Member `acceleration`
// Member `jerk`
// Member `snap`
// Member `angular_velocity`
// Member `angular_velocity_dot`
// Member `moments`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
quadrotor_msgs__msg__TrajectoryPoint__init(quadrotor_msgs__msg__TrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->acceleration)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__init(&msg->jerk)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // snap
  if (!geometry_msgs__msg__Vector3__init(&msg->snap)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__init(&msg->quaternion)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // force
  // rpm
  // forces
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // angular_velocity_dot
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity_dot)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // moments
  if (!geometry_msgs__msg__Vector3__init(&msg->moments)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // position_quad
  if (!geometry_msgs__msg__Point__init(&msg->position_quad)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // velocity_quad
  if (!geometry_msgs__msg__Point__init(&msg->velocity_quad)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  // acceleration_quad
  if (!geometry_msgs__msg__Point__init(&msg->acceleration_quad)) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
    return false;
  }
  return true;
}

void
quadrotor_msgs__msg__TrajectoryPoint__fini(quadrotor_msgs__msg__TrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // acceleration
  geometry_msgs__msg__Vector3__fini(&msg->acceleration);
  // jerk
  geometry_msgs__msg__Vector3__fini(&msg->jerk);
  // snap
  geometry_msgs__msg__Vector3__fini(&msg->snap);
  // quaternion
  geometry_msgs__msg__Quaternion__fini(&msg->quaternion);
  // force
  // rpm
  // forces
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
  // angular_velocity_dot
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity_dot);
  // moments
  geometry_msgs__msg__Vector3__fini(&msg->moments);
  // position_quad
  geometry_msgs__msg__Point__fini(&msg->position_quad);
  // velocity_quad
  geometry_msgs__msg__Point__fini(&msg->velocity_quad);
  // acceleration_quad
  geometry_msgs__msg__Point__fini(&msg->acceleration_quad);
}

bool
quadrotor_msgs__msg__TrajectoryPoint__are_equal(const quadrotor_msgs__msg__TrajectoryPoint * lhs, const quadrotor_msgs__msg__TrajectoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->jerk), &(rhs->jerk)))
  {
    return false;
  }
  // snap
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->snap), &(rhs->snap)))
  {
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->quaternion), &(rhs->quaternion)))
  {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  // rpm
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->rpm[i] != rhs->rpm[i]) {
      return false;
    }
  }
  // forces
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->forces[i] != rhs->forces[i]) {
      return false;
    }
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // angular_velocity_dot
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity_dot), &(rhs->angular_velocity_dot)))
  {
    return false;
  }
  // moments
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->moments), &(rhs->moments)))
  {
    return false;
  }
  // position_quad
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position_quad), &(rhs->position_quad)))
  {
    return false;
  }
  // velocity_quad
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->velocity_quad), &(rhs->velocity_quad)))
  {
    return false;
  }
  // acceleration_quad
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->acceleration_quad), &(rhs->acceleration_quad)))
  {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__msg__TrajectoryPoint__copy(
  const quadrotor_msgs__msg__TrajectoryPoint * input,
  quadrotor_msgs__msg__TrajectoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // jerk
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->jerk), &(output->jerk)))
  {
    return false;
  }
  // snap
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->snap), &(output->snap)))
  {
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->quaternion), &(output->quaternion)))
  {
    return false;
  }
  // force
  output->force = input->force;
  // rpm
  for (size_t i = 0; i < 4; ++i) {
    output->rpm[i] = input->rpm[i];
  }
  // forces
  for (size_t i = 0; i < 4; ++i) {
    output->forces[i] = input->forces[i];
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // angular_velocity_dot
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity_dot), &(output->angular_velocity_dot)))
  {
    return false;
  }
  // moments
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->moments), &(output->moments)))
  {
    return false;
  }
  // position_quad
  if (!geometry_msgs__msg__Point__copy(
      &(input->position_quad), &(output->position_quad)))
  {
    return false;
  }
  // velocity_quad
  if (!geometry_msgs__msg__Point__copy(
      &(input->velocity_quad), &(output->velocity_quad)))
  {
    return false;
  }
  // acceleration_quad
  if (!geometry_msgs__msg__Point__copy(
      &(input->acceleration_quad), &(output->acceleration_quad)))
  {
    return false;
  }
  return true;
}

quadrotor_msgs__msg__TrajectoryPoint *
quadrotor_msgs__msg__TrajectoryPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__TrajectoryPoint * msg = (quadrotor_msgs__msg__TrajectoryPoint *)allocator.allocate(sizeof(quadrotor_msgs__msg__TrajectoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__msg__TrajectoryPoint));
  bool success = quadrotor_msgs__msg__TrajectoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__msg__TrajectoryPoint__destroy(quadrotor_msgs__msg__TrajectoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__msg__TrajectoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__msg__TrajectoryPoint__Sequence__init(quadrotor_msgs__msg__TrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__TrajectoryPoint * data = NULL;

  if (size) {
    data = (quadrotor_msgs__msg__TrajectoryPoint *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__msg__TrajectoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__msg__TrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__msg__TrajectoryPoint__fini(&data[i - 1]);
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
quadrotor_msgs__msg__TrajectoryPoint__Sequence__fini(quadrotor_msgs__msg__TrajectoryPoint__Sequence * array)
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
      quadrotor_msgs__msg__TrajectoryPoint__fini(&array->data[i]);
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

quadrotor_msgs__msg__TrajectoryPoint__Sequence *
quadrotor_msgs__msg__TrajectoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__TrajectoryPoint__Sequence * array = (quadrotor_msgs__msg__TrajectoryPoint__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__msg__TrajectoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__msg__TrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__msg__TrajectoryPoint__Sequence__destroy(quadrotor_msgs__msg__TrajectoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__msg__TrajectoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__msg__TrajectoryPoint__Sequence__are_equal(const quadrotor_msgs__msg__TrajectoryPoint__Sequence * lhs, const quadrotor_msgs__msg__TrajectoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__msg__TrajectoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__msg__TrajectoryPoint__Sequence__copy(
  const quadrotor_msgs__msg__TrajectoryPoint__Sequence * input,
  quadrotor_msgs__msg__TrajectoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__msg__TrajectoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__msg__TrajectoryPoint * data =
      (quadrotor_msgs__msg__TrajectoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__msg__TrajectoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__msg__TrajectoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__msg__TrajectoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
