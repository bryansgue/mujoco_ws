// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadrotor_msgs:msg/LissaPlannerGoal.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
quadrotor_msgs__msg__LissaPlannerGoal__init(quadrotor_msgs__msg__LissaPlannerGoal * msg)
{
  if (!msg) {
    return false;
  }
  // x_amp
  // y_amp
  // z_amp
  // yaw_amp
  // x_num_periods
  // y_num_periods
  // z_num_periods
  // yaw_num_periods
  // period
  // num_cycles
  // ramp_time
  return true;
}

void
quadrotor_msgs__msg__LissaPlannerGoal__fini(quadrotor_msgs__msg__LissaPlannerGoal * msg)
{
  if (!msg) {
    return;
  }
  // x_amp
  // y_amp
  // z_amp
  // yaw_amp
  // x_num_periods
  // y_num_periods
  // z_num_periods
  // yaw_num_periods
  // period
  // num_cycles
  // ramp_time
}

bool
quadrotor_msgs__msg__LissaPlannerGoal__are_equal(const quadrotor_msgs__msg__LissaPlannerGoal * lhs, const quadrotor_msgs__msg__LissaPlannerGoal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_amp
  if (lhs->x_amp != rhs->x_amp) {
    return false;
  }
  // y_amp
  if (lhs->y_amp != rhs->y_amp) {
    return false;
  }
  // z_amp
  if (lhs->z_amp != rhs->z_amp) {
    return false;
  }
  // yaw_amp
  if (lhs->yaw_amp != rhs->yaw_amp) {
    return false;
  }
  // x_num_periods
  if (lhs->x_num_periods != rhs->x_num_periods) {
    return false;
  }
  // y_num_periods
  if (lhs->y_num_periods != rhs->y_num_periods) {
    return false;
  }
  // z_num_periods
  if (lhs->z_num_periods != rhs->z_num_periods) {
    return false;
  }
  // yaw_num_periods
  if (lhs->yaw_num_periods != rhs->yaw_num_periods) {
    return false;
  }
  // period
  if (lhs->period != rhs->period) {
    return false;
  }
  // num_cycles
  if (lhs->num_cycles != rhs->num_cycles) {
    return false;
  }
  // ramp_time
  if (lhs->ramp_time != rhs->ramp_time) {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__msg__LissaPlannerGoal__copy(
  const quadrotor_msgs__msg__LissaPlannerGoal * input,
  quadrotor_msgs__msg__LissaPlannerGoal * output)
{
  if (!input || !output) {
    return false;
  }
  // x_amp
  output->x_amp = input->x_amp;
  // y_amp
  output->y_amp = input->y_amp;
  // z_amp
  output->z_amp = input->z_amp;
  // yaw_amp
  output->yaw_amp = input->yaw_amp;
  // x_num_periods
  output->x_num_periods = input->x_num_periods;
  // y_num_periods
  output->y_num_periods = input->y_num_periods;
  // z_num_periods
  output->z_num_periods = input->z_num_periods;
  // yaw_num_periods
  output->yaw_num_periods = input->yaw_num_periods;
  // period
  output->period = input->period;
  // num_cycles
  output->num_cycles = input->num_cycles;
  // ramp_time
  output->ramp_time = input->ramp_time;
  return true;
}

quadrotor_msgs__msg__LissaPlannerGoal *
quadrotor_msgs__msg__LissaPlannerGoal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__LissaPlannerGoal * msg = (quadrotor_msgs__msg__LissaPlannerGoal *)allocator.allocate(sizeof(quadrotor_msgs__msg__LissaPlannerGoal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__msg__LissaPlannerGoal));
  bool success = quadrotor_msgs__msg__LissaPlannerGoal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__msg__LissaPlannerGoal__destroy(quadrotor_msgs__msg__LissaPlannerGoal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__msg__LissaPlannerGoal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__msg__LissaPlannerGoal__Sequence__init(quadrotor_msgs__msg__LissaPlannerGoal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__LissaPlannerGoal * data = NULL;

  if (size) {
    data = (quadrotor_msgs__msg__LissaPlannerGoal *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__msg__LissaPlannerGoal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__msg__LissaPlannerGoal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__msg__LissaPlannerGoal__fini(&data[i - 1]);
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
quadrotor_msgs__msg__LissaPlannerGoal__Sequence__fini(quadrotor_msgs__msg__LissaPlannerGoal__Sequence * array)
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
      quadrotor_msgs__msg__LissaPlannerGoal__fini(&array->data[i]);
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

quadrotor_msgs__msg__LissaPlannerGoal__Sequence *
quadrotor_msgs__msg__LissaPlannerGoal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__LissaPlannerGoal__Sequence * array = (quadrotor_msgs__msg__LissaPlannerGoal__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__msg__LissaPlannerGoal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__msg__LissaPlannerGoal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__msg__LissaPlannerGoal__Sequence__destroy(quadrotor_msgs__msg__LissaPlannerGoal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__msg__LissaPlannerGoal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__msg__LissaPlannerGoal__Sequence__are_equal(const quadrotor_msgs__msg__LissaPlannerGoal__Sequence * lhs, const quadrotor_msgs__msg__LissaPlannerGoal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__msg__LissaPlannerGoal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__msg__LissaPlannerGoal__Sequence__copy(
  const quadrotor_msgs__msg__LissaPlannerGoal__Sequence * input,
  quadrotor_msgs__msg__LissaPlannerGoal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__msg__LissaPlannerGoal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__msg__LissaPlannerGoal * data =
      (quadrotor_msgs__msg__LissaPlannerGoal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__msg__LissaPlannerGoal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__msg__LissaPlannerGoal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__msg__LissaPlannerGoal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
