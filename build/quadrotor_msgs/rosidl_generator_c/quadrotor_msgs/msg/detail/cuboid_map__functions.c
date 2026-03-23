// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadrotor_msgs:msg/CuboidMap.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/cuboid_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pos`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `scale`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `connectivity`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
quadrotor_msgs__msg__CuboidMap__init(quadrotor_msgs__msg__CuboidMap * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    quadrotor_msgs__msg__CuboidMap__fini(msg);
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->pos, 0)) {
    quadrotor_msgs__msg__CuboidMap__fini(msg);
    return false;
  }
  // scale
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->scale, 0)) {
    quadrotor_msgs__msg__CuboidMap__fini(msg);
    return false;
  }
  // connectivity
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->connectivity, 0)) {
    quadrotor_msgs__msg__CuboidMap__fini(msg);
    return false;
  }
  return true;
}

void
quadrotor_msgs__msg__CuboidMap__fini(quadrotor_msgs__msg__CuboidMap * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pos
  geometry_msgs__msg__Point__Sequence__fini(&msg->pos);
  // scale
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->scale);
  // connectivity
  rosidl_runtime_c__boolean__Sequence__fini(&msg->connectivity);
}

bool
quadrotor_msgs__msg__CuboidMap__are_equal(const quadrotor_msgs__msg__CuboidMap * lhs, const quadrotor_msgs__msg__CuboidMap * rhs)
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
  // pos
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // scale
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->scale), &(rhs->scale)))
  {
    return false;
  }
  // connectivity
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->connectivity), &(rhs->connectivity)))
  {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__msg__CuboidMap__copy(
  const quadrotor_msgs__msg__CuboidMap * input,
  quadrotor_msgs__msg__CuboidMap * output)
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
  // pos
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // scale
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->scale), &(output->scale)))
  {
    return false;
  }
  // connectivity
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->connectivity), &(output->connectivity)))
  {
    return false;
  }
  return true;
}

quadrotor_msgs__msg__CuboidMap *
quadrotor_msgs__msg__CuboidMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__CuboidMap * msg = (quadrotor_msgs__msg__CuboidMap *)allocator.allocate(sizeof(quadrotor_msgs__msg__CuboidMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__msg__CuboidMap));
  bool success = quadrotor_msgs__msg__CuboidMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__msg__CuboidMap__destroy(quadrotor_msgs__msg__CuboidMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__msg__CuboidMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__msg__CuboidMap__Sequence__init(quadrotor_msgs__msg__CuboidMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__CuboidMap * data = NULL;

  if (size) {
    data = (quadrotor_msgs__msg__CuboidMap *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__msg__CuboidMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__msg__CuboidMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__msg__CuboidMap__fini(&data[i - 1]);
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
quadrotor_msgs__msg__CuboidMap__Sequence__fini(quadrotor_msgs__msg__CuboidMap__Sequence * array)
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
      quadrotor_msgs__msg__CuboidMap__fini(&array->data[i]);
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

quadrotor_msgs__msg__CuboidMap__Sequence *
quadrotor_msgs__msg__CuboidMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__CuboidMap__Sequence * array = (quadrotor_msgs__msg__CuboidMap__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__msg__CuboidMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__msg__CuboidMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__msg__CuboidMap__Sequence__destroy(quadrotor_msgs__msg__CuboidMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__msg__CuboidMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__msg__CuboidMap__Sequence__are_equal(const quadrotor_msgs__msg__CuboidMap__Sequence * lhs, const quadrotor_msgs__msg__CuboidMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__msg__CuboidMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__msg__CuboidMap__Sequence__copy(
  const quadrotor_msgs__msg__CuboidMap__Sequence * input,
  quadrotor_msgs__msg__CuboidMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__msg__CuboidMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__msg__CuboidMap * data =
      (quadrotor_msgs__msg__CuboidMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__msg__CuboidMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__msg__CuboidMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__msg__CuboidMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
