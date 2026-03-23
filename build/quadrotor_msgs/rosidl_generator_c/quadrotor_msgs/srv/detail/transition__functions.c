// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadrotor_msgs:srv/Transition.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/srv/detail/transition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `tracker`
#include "rosidl_runtime_c/string_functions.h"
// Member `planner_goal`
#include "quadrotor_msgs/msg/detail/planner_goal__functions.h"

bool
quadrotor_msgs__srv__Transition_Request__init(quadrotor_msgs__srv__Transition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // tracker
  if (!rosidl_runtime_c__String__init(&msg->tracker)) {
    quadrotor_msgs__srv__Transition_Request__fini(msg);
    return false;
  }
  // planner_goal
  if (!quadrotor_msgs__msg__PlannerGoal__init(&msg->planner_goal)) {
    quadrotor_msgs__srv__Transition_Request__fini(msg);
    return false;
  }
  return true;
}

void
quadrotor_msgs__srv__Transition_Request__fini(quadrotor_msgs__srv__Transition_Request * msg)
{
  if (!msg) {
    return;
  }
  // tracker
  rosidl_runtime_c__String__fini(&msg->tracker);
  // planner_goal
  quadrotor_msgs__msg__PlannerGoal__fini(&msg->planner_goal);
}

bool
quadrotor_msgs__srv__Transition_Request__are_equal(const quadrotor_msgs__srv__Transition_Request * lhs, const quadrotor_msgs__srv__Transition_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tracker
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tracker), &(rhs->tracker)))
  {
    return false;
  }
  // planner_goal
  if (!quadrotor_msgs__msg__PlannerGoal__are_equal(
      &(lhs->planner_goal), &(rhs->planner_goal)))
  {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__srv__Transition_Request__copy(
  const quadrotor_msgs__srv__Transition_Request * input,
  quadrotor_msgs__srv__Transition_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // tracker
  if (!rosidl_runtime_c__String__copy(
      &(input->tracker), &(output->tracker)))
  {
    return false;
  }
  // planner_goal
  if (!quadrotor_msgs__msg__PlannerGoal__copy(
      &(input->planner_goal), &(output->planner_goal)))
  {
    return false;
  }
  return true;
}

quadrotor_msgs__srv__Transition_Request *
quadrotor_msgs__srv__Transition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__Transition_Request * msg = (quadrotor_msgs__srv__Transition_Request *)allocator.allocate(sizeof(quadrotor_msgs__srv__Transition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__srv__Transition_Request));
  bool success = quadrotor_msgs__srv__Transition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__srv__Transition_Request__destroy(quadrotor_msgs__srv__Transition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__srv__Transition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__srv__Transition_Request__Sequence__init(quadrotor_msgs__srv__Transition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__Transition_Request * data = NULL;

  if (size) {
    data = (quadrotor_msgs__srv__Transition_Request *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__srv__Transition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__srv__Transition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__srv__Transition_Request__fini(&data[i - 1]);
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
quadrotor_msgs__srv__Transition_Request__Sequence__fini(quadrotor_msgs__srv__Transition_Request__Sequence * array)
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
      quadrotor_msgs__srv__Transition_Request__fini(&array->data[i]);
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

quadrotor_msgs__srv__Transition_Request__Sequence *
quadrotor_msgs__srv__Transition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__Transition_Request__Sequence * array = (quadrotor_msgs__srv__Transition_Request__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__srv__Transition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__srv__Transition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__srv__Transition_Request__Sequence__destroy(quadrotor_msgs__srv__Transition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__srv__Transition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__srv__Transition_Request__Sequence__are_equal(const quadrotor_msgs__srv__Transition_Request__Sequence * lhs, const quadrotor_msgs__srv__Transition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__srv__Transition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__srv__Transition_Request__Sequence__copy(
  const quadrotor_msgs__srv__Transition_Request__Sequence * input,
  quadrotor_msgs__srv__Transition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__srv__Transition_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__srv__Transition_Request * data =
      (quadrotor_msgs__srv__Transition_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__srv__Transition_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__srv__Transition_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__srv__Transition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
quadrotor_msgs__srv__Transition_Response__init(quadrotor_msgs__srv__Transition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    quadrotor_msgs__srv__Transition_Response__fini(msg);
    return false;
  }
  return true;
}

void
quadrotor_msgs__srv__Transition_Response__fini(quadrotor_msgs__srv__Transition_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
quadrotor_msgs__srv__Transition_Response__are_equal(const quadrotor_msgs__srv__Transition_Response * lhs, const quadrotor_msgs__srv__Transition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__srv__Transition_Response__copy(
  const quadrotor_msgs__srv__Transition_Response * input,
  quadrotor_msgs__srv__Transition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

quadrotor_msgs__srv__Transition_Response *
quadrotor_msgs__srv__Transition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__Transition_Response * msg = (quadrotor_msgs__srv__Transition_Response *)allocator.allocate(sizeof(quadrotor_msgs__srv__Transition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__srv__Transition_Response));
  bool success = quadrotor_msgs__srv__Transition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__srv__Transition_Response__destroy(quadrotor_msgs__srv__Transition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__srv__Transition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__srv__Transition_Response__Sequence__init(quadrotor_msgs__srv__Transition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__Transition_Response * data = NULL;

  if (size) {
    data = (quadrotor_msgs__srv__Transition_Response *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__srv__Transition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__srv__Transition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__srv__Transition_Response__fini(&data[i - 1]);
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
quadrotor_msgs__srv__Transition_Response__Sequence__fini(quadrotor_msgs__srv__Transition_Response__Sequence * array)
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
      quadrotor_msgs__srv__Transition_Response__fini(&array->data[i]);
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

quadrotor_msgs__srv__Transition_Response__Sequence *
quadrotor_msgs__srv__Transition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__srv__Transition_Response__Sequence * array = (quadrotor_msgs__srv__Transition_Response__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__srv__Transition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__srv__Transition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__srv__Transition_Response__Sequence__destroy(quadrotor_msgs__srv__Transition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__srv__Transition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__srv__Transition_Response__Sequence__are_equal(const quadrotor_msgs__srv__Transition_Response__Sequence * lhs, const quadrotor_msgs__srv__Transition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__srv__Transition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__srv__Transition_Response__Sequence__copy(
  const quadrotor_msgs__srv__Transition_Response__Sequence * input,
  quadrotor_msgs__srv__Transition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__srv__Transition_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__srv__Transition_Response * data =
      (quadrotor_msgs__srv__Transition_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__srv__Transition_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__srv__Transition_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__srv__Transition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
