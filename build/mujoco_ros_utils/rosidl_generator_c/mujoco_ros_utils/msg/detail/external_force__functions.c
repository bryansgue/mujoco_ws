// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mujoco_ros_utils:msg/ExternalForce.idl
// generated code does not contain a copyright notice
#include "mujoco_ros_utils/msg/detail/external_force__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `pos`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `force`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
mujoco_ros_utils__msg__ExternalForce__init(mujoco_ros_utils__msg__ExternalForce * msg)
{
  if (!msg) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__init(&msg->duration)) {
    mujoco_ros_utils__msg__ExternalForce__fini(msg);
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__init(&msg->pos)) {
    mujoco_ros_utils__msg__ExternalForce__fini(msg);
    return false;
  }
  // force
  if (!geometry_msgs__msg__Vector3__init(&msg->force)) {
    mujoco_ros_utils__msg__ExternalForce__fini(msg);
    return false;
  }
  return true;
}

void
mujoco_ros_utils__msg__ExternalForce__fini(mujoco_ros_utils__msg__ExternalForce * msg)
{
  if (!msg) {
    return;
  }
  // duration
  builtin_interfaces__msg__Duration__fini(&msg->duration);
  // pos
  geometry_msgs__msg__Point__fini(&msg->pos);
  // force
  geometry_msgs__msg__Vector3__fini(&msg->force);
}

bool
mujoco_ros_utils__msg__ExternalForce__are_equal(const mujoco_ros_utils__msg__ExternalForce * lhs, const mujoco_ros_utils__msg__ExternalForce * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->force), &(rhs->force)))
  {
    return false;
  }
  return true;
}

bool
mujoco_ros_utils__msg__ExternalForce__copy(
  const mujoco_ros_utils__msg__ExternalForce * input,
  mujoco_ros_utils__msg__ExternalForce * output)
{
  if (!input || !output) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->force), &(output->force)))
  {
    return false;
  }
  return true;
}

mujoco_ros_utils__msg__ExternalForce *
mujoco_ros_utils__msg__ExternalForce__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mujoco_ros_utils__msg__ExternalForce * msg = (mujoco_ros_utils__msg__ExternalForce *)allocator.allocate(sizeof(mujoco_ros_utils__msg__ExternalForce), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mujoco_ros_utils__msg__ExternalForce));
  bool success = mujoco_ros_utils__msg__ExternalForce__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mujoco_ros_utils__msg__ExternalForce__destroy(mujoco_ros_utils__msg__ExternalForce * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mujoco_ros_utils__msg__ExternalForce__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mujoco_ros_utils__msg__ExternalForce__Sequence__init(mujoco_ros_utils__msg__ExternalForce__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mujoco_ros_utils__msg__ExternalForce * data = NULL;

  if (size) {
    data = (mujoco_ros_utils__msg__ExternalForce *)allocator.zero_allocate(size, sizeof(mujoco_ros_utils__msg__ExternalForce), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mujoco_ros_utils__msg__ExternalForce__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mujoco_ros_utils__msg__ExternalForce__fini(&data[i - 1]);
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
mujoco_ros_utils__msg__ExternalForce__Sequence__fini(mujoco_ros_utils__msg__ExternalForce__Sequence * array)
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
      mujoco_ros_utils__msg__ExternalForce__fini(&array->data[i]);
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

mujoco_ros_utils__msg__ExternalForce__Sequence *
mujoco_ros_utils__msg__ExternalForce__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mujoco_ros_utils__msg__ExternalForce__Sequence * array = (mujoco_ros_utils__msg__ExternalForce__Sequence *)allocator.allocate(sizeof(mujoco_ros_utils__msg__ExternalForce__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mujoco_ros_utils__msg__ExternalForce__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mujoco_ros_utils__msg__ExternalForce__Sequence__destroy(mujoco_ros_utils__msg__ExternalForce__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mujoco_ros_utils__msg__ExternalForce__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mujoco_ros_utils__msg__ExternalForce__Sequence__are_equal(const mujoco_ros_utils__msg__ExternalForce__Sequence * lhs, const mujoco_ros_utils__msg__ExternalForce__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mujoco_ros_utils__msg__ExternalForce__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mujoco_ros_utils__msg__ExternalForce__Sequence__copy(
  const mujoco_ros_utils__msg__ExternalForce__Sequence * input,
  mujoco_ros_utils__msg__ExternalForce__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mujoco_ros_utils__msg__ExternalForce);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mujoco_ros_utils__msg__ExternalForce * data =
      (mujoco_ros_utils__msg__ExternalForce *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mujoco_ros_utils__msg__ExternalForce__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mujoco_ros_utils__msg__ExternalForce__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mujoco_ros_utils__msg__ExternalForce__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
