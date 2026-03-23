// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadrotor_msgs:msg/FMCommand.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/fm_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `moments`
// Member `angular_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `aux`
#include "quadrotor_msgs/msg/detail/aux_command__functions.h"

bool
quadrotor_msgs__msg__FMCommand__init(quadrotor_msgs__msg__FMCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    quadrotor_msgs__msg__FMCommand__fini(msg);
    return false;
  }
  // mpc_flag
  // thrust
  // roll
  // pitch
  // yaw
  // moments
  if (!geometry_msgs__msg__Vector3__init(&msg->moments)) {
    quadrotor_msgs__msg__FMCommand__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    quadrotor_msgs__msg__FMCommand__fini(msg);
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__init(&msg->quaternion)) {
    quadrotor_msgs__msg__FMCommand__fini(msg);
    return false;
  }
  // kr
  // kom
  // aux
  if (!quadrotor_msgs__msg__AuxCommand__init(&msg->aux)) {
    quadrotor_msgs__msg__FMCommand__fini(msg);
    return false;
  }
  return true;
}

void
quadrotor_msgs__msg__FMCommand__fini(quadrotor_msgs__msg__FMCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mpc_flag
  // thrust
  // roll
  // pitch
  // yaw
  // moments
  geometry_msgs__msg__Vector3__fini(&msg->moments);
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
  // quaternion
  geometry_msgs__msg__Quaternion__fini(&msg->quaternion);
  // kr
  // kom
  // aux
  quadrotor_msgs__msg__AuxCommand__fini(&msg->aux);
}

bool
quadrotor_msgs__msg__FMCommand__are_equal(const quadrotor_msgs__msg__FMCommand * lhs, const quadrotor_msgs__msg__FMCommand * rhs)
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
  // mpc_flag
  if (lhs->mpc_flag != rhs->mpc_flag) {
    return false;
  }
  // thrust
  if (lhs->thrust != rhs->thrust) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // moments
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->moments), &(rhs->moments)))
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
  // kr
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->kr[i] != rhs->kr[i]) {
      return false;
    }
  }
  // kom
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->kom[i] != rhs->kom[i]) {
      return false;
    }
  }
  // aux
  if (!quadrotor_msgs__msg__AuxCommand__are_equal(
      &(lhs->aux), &(rhs->aux)))
  {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__msg__FMCommand__copy(
  const quadrotor_msgs__msg__FMCommand * input,
  quadrotor_msgs__msg__FMCommand * output)
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
  // mpc_flag
  output->mpc_flag = input->mpc_flag;
  // thrust
  output->thrust = input->thrust;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // moments
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->moments), &(output->moments)))
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
  // kr
  for (size_t i = 0; i < 3; ++i) {
    output->kr[i] = input->kr[i];
  }
  // kom
  for (size_t i = 0; i < 3; ++i) {
    output->kom[i] = input->kom[i];
  }
  // aux
  if (!quadrotor_msgs__msg__AuxCommand__copy(
      &(input->aux), &(output->aux)))
  {
    return false;
  }
  return true;
}

quadrotor_msgs__msg__FMCommand *
quadrotor_msgs__msg__FMCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__FMCommand * msg = (quadrotor_msgs__msg__FMCommand *)allocator.allocate(sizeof(quadrotor_msgs__msg__FMCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__msg__FMCommand));
  bool success = quadrotor_msgs__msg__FMCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__msg__FMCommand__destroy(quadrotor_msgs__msg__FMCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__msg__FMCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__msg__FMCommand__Sequence__init(quadrotor_msgs__msg__FMCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__FMCommand * data = NULL;

  if (size) {
    data = (quadrotor_msgs__msg__FMCommand *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__msg__FMCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__msg__FMCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__msg__FMCommand__fini(&data[i - 1]);
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
quadrotor_msgs__msg__FMCommand__Sequence__fini(quadrotor_msgs__msg__FMCommand__Sequence * array)
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
      quadrotor_msgs__msg__FMCommand__fini(&array->data[i]);
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

quadrotor_msgs__msg__FMCommand__Sequence *
quadrotor_msgs__msg__FMCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__FMCommand__Sequence * array = (quadrotor_msgs__msg__FMCommand__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__msg__FMCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__msg__FMCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__msg__FMCommand__Sequence__destroy(quadrotor_msgs__msg__FMCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__msg__FMCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__msg__FMCommand__Sequence__are_equal(const quadrotor_msgs__msg__FMCommand__Sequence * lhs, const quadrotor_msgs__msg__FMCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__msg__FMCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__msg__FMCommand__Sequence__copy(
  const quadrotor_msgs__msg__FMCommand__Sequence * input,
  quadrotor_msgs__msg__FMCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__msg__FMCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__msg__FMCommand * data =
      (quadrotor_msgs__msg__FMCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__msg__FMCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__msg__FMCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__msg__FMCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
