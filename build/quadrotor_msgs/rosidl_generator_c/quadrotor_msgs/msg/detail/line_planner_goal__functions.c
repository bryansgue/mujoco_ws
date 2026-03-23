// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadrotor_msgs:msg/LinePlannerGoal.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/line_planner_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `t_start`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
quadrotor_msgs__msg__LinePlannerGoal__init(quadrotor_msgs__msg__LinePlannerGoal * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // yaw
  // v_des
  // a_des
  // relative
  // t_start
  if (!builtin_interfaces__msg__Time__init(&msg->t_start)) {
    quadrotor_msgs__msg__LinePlannerGoal__fini(msg);
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__init(&msg->duration)) {
    quadrotor_msgs__msg__LinePlannerGoal__fini(msg);
    return false;
  }
  return true;
}

void
quadrotor_msgs__msg__LinePlannerGoal__fini(quadrotor_msgs__msg__LinePlannerGoal * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // yaw
  // v_des
  // a_des
  // relative
  // t_start
  builtin_interfaces__msg__Time__fini(&msg->t_start);
  // duration
  builtin_interfaces__msg__Duration__fini(&msg->duration);
}

bool
quadrotor_msgs__msg__LinePlannerGoal__are_equal(const quadrotor_msgs__msg__LinePlannerGoal * lhs, const quadrotor_msgs__msg__LinePlannerGoal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // v_des
  if (lhs->v_des != rhs->v_des) {
    return false;
  }
  // a_des
  if (lhs->a_des != rhs->a_des) {
    return false;
  }
  // relative
  if (lhs->relative != rhs->relative) {
    return false;
  }
  // t_start
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->t_start), &(rhs->t_start)))
  {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__msg__LinePlannerGoal__copy(
  const quadrotor_msgs__msg__LinePlannerGoal * input,
  quadrotor_msgs__msg__LinePlannerGoal * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // yaw
  output->yaw = input->yaw;
  // v_des
  output->v_des = input->v_des;
  // a_des
  output->a_des = input->a_des;
  // relative
  output->relative = input->relative;
  // t_start
  if (!builtin_interfaces__msg__Time__copy(
      &(input->t_start), &(output->t_start)))
  {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  return true;
}

quadrotor_msgs__msg__LinePlannerGoal *
quadrotor_msgs__msg__LinePlannerGoal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__LinePlannerGoal * msg = (quadrotor_msgs__msg__LinePlannerGoal *)allocator.allocate(sizeof(quadrotor_msgs__msg__LinePlannerGoal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__msg__LinePlannerGoal));
  bool success = quadrotor_msgs__msg__LinePlannerGoal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__msg__LinePlannerGoal__destroy(quadrotor_msgs__msg__LinePlannerGoal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__msg__LinePlannerGoal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__msg__LinePlannerGoal__Sequence__init(quadrotor_msgs__msg__LinePlannerGoal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__LinePlannerGoal * data = NULL;

  if (size) {
    data = (quadrotor_msgs__msg__LinePlannerGoal *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__msg__LinePlannerGoal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__msg__LinePlannerGoal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__msg__LinePlannerGoal__fini(&data[i - 1]);
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
quadrotor_msgs__msg__LinePlannerGoal__Sequence__fini(quadrotor_msgs__msg__LinePlannerGoal__Sequence * array)
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
      quadrotor_msgs__msg__LinePlannerGoal__fini(&array->data[i]);
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

quadrotor_msgs__msg__LinePlannerGoal__Sequence *
quadrotor_msgs__msg__LinePlannerGoal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__LinePlannerGoal__Sequence * array = (quadrotor_msgs__msg__LinePlannerGoal__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__msg__LinePlannerGoal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__msg__LinePlannerGoal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__msg__LinePlannerGoal__Sequence__destroy(quadrotor_msgs__msg__LinePlannerGoal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__msg__LinePlannerGoal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__msg__LinePlannerGoal__Sequence__are_equal(const quadrotor_msgs__msg__LinePlannerGoal__Sequence * lhs, const quadrotor_msgs__msg__LinePlannerGoal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__msg__LinePlannerGoal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__msg__LinePlannerGoal__Sequence__copy(
  const quadrotor_msgs__msg__LinePlannerGoal__Sequence * input,
  quadrotor_msgs__msg__LinePlannerGoal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__msg__LinePlannerGoal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__msg__LinePlannerGoal * data =
      (quadrotor_msgs__msg__LinePlannerGoal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__msg__LinePlannerGoal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__msg__LinePlannerGoal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__msg__LinePlannerGoal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
