// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quadrotor_msgs:msg/PlannerGoal.idl
// generated code does not contain a copyright notice
#include "quadrotor_msgs/msg/detail/planner_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `des_tracker`
#include "rosidl_runtime_c/string_functions.h"
// Member `init_cond`
#include "nav_msgs/msg/detail/odometry__functions.h"
// Member `line_planner_goal`
#include "quadrotor_msgs/msg/detail/line_planner_goal__functions.h"
// Member `circle_planner_goal`
#include "quadrotor_msgs/msg/detail/circle_planner_goal__functions.h"
// Member `lissajous_planner_goal`
#include "quadrotor_msgs/msg/detail/lissa_planner_goal__functions.h"
// Member `velocity_planner_goal`
#include "quadrotor_msgs/msg/detail/velocity_planner_goal__functions.h"
// Member `qp_planner_goal`
#include "quadrotor_msgs/msg/detail/qp_planner_goal__functions.h"

bool
quadrotor_msgs__msg__PlannerGoal__init(quadrotor_msgs__msg__PlannerGoal * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    quadrotor_msgs__msg__PlannerGoal__fini(msg);
    return false;
  }
  // des_tracker
  if (!rosidl_runtime_c__String__init(&msg->des_tracker)) {
    quadrotor_msgs__msg__PlannerGoal__fini(msg);
    return false;
  }
  // init_cond
  if (!nav_msgs__msg__Odometry__init(&msg->init_cond)) {
    quadrotor_msgs__msg__PlannerGoal__fini(msg);
    return false;
  }
  // line_planner_goal
  if (!quadrotor_msgs__msg__LinePlannerGoal__init(&msg->line_planner_goal)) {
    quadrotor_msgs__msg__PlannerGoal__fini(msg);
    return false;
  }
  // circle_planner_goal
  if (!quadrotor_msgs__msg__CirclePlannerGoal__init(&msg->circle_planner_goal)) {
    quadrotor_msgs__msg__PlannerGoal__fini(msg);
    return false;
  }
  // lissajous_planner_goal
  if (!quadrotor_msgs__msg__LissaPlannerGoal__init(&msg->lissajous_planner_goal)) {
    quadrotor_msgs__msg__PlannerGoal__fini(msg);
    return false;
  }
  // velocity_planner_goal
  if (!quadrotor_msgs__msg__VelocityPlannerGoal__init(&msg->velocity_planner_goal)) {
    quadrotor_msgs__msg__PlannerGoal__fini(msg);
    return false;
  }
  // qp_planner_goal
  if (!quadrotor_msgs__msg__QpPlannerGoal__init(&msg->qp_planner_goal)) {
    quadrotor_msgs__msg__PlannerGoal__fini(msg);
    return false;
  }
  return true;
}

void
quadrotor_msgs__msg__PlannerGoal__fini(quadrotor_msgs__msg__PlannerGoal * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // des_tracker
  rosidl_runtime_c__String__fini(&msg->des_tracker);
  // init_cond
  nav_msgs__msg__Odometry__fini(&msg->init_cond);
  // line_planner_goal
  quadrotor_msgs__msg__LinePlannerGoal__fini(&msg->line_planner_goal);
  // circle_planner_goal
  quadrotor_msgs__msg__CirclePlannerGoal__fini(&msg->circle_planner_goal);
  // lissajous_planner_goal
  quadrotor_msgs__msg__LissaPlannerGoal__fini(&msg->lissajous_planner_goal);
  // velocity_planner_goal
  quadrotor_msgs__msg__VelocityPlannerGoal__fini(&msg->velocity_planner_goal);
  // qp_planner_goal
  quadrotor_msgs__msg__QpPlannerGoal__fini(&msg->qp_planner_goal);
}

bool
quadrotor_msgs__msg__PlannerGoal__are_equal(const quadrotor_msgs__msg__PlannerGoal * lhs, const quadrotor_msgs__msg__PlannerGoal * rhs)
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
  // des_tracker
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->des_tracker), &(rhs->des_tracker)))
  {
    return false;
  }
  // init_cond
  if (!nav_msgs__msg__Odometry__are_equal(
      &(lhs->init_cond), &(rhs->init_cond)))
  {
    return false;
  }
  // line_planner_goal
  if (!quadrotor_msgs__msg__LinePlannerGoal__are_equal(
      &(lhs->line_planner_goal), &(rhs->line_planner_goal)))
  {
    return false;
  }
  // circle_planner_goal
  if (!quadrotor_msgs__msg__CirclePlannerGoal__are_equal(
      &(lhs->circle_planner_goal), &(rhs->circle_planner_goal)))
  {
    return false;
  }
  // lissajous_planner_goal
  if (!quadrotor_msgs__msg__LissaPlannerGoal__are_equal(
      &(lhs->lissajous_planner_goal), &(rhs->lissajous_planner_goal)))
  {
    return false;
  }
  // velocity_planner_goal
  if (!quadrotor_msgs__msg__VelocityPlannerGoal__are_equal(
      &(lhs->velocity_planner_goal), &(rhs->velocity_planner_goal)))
  {
    return false;
  }
  // qp_planner_goal
  if (!quadrotor_msgs__msg__QpPlannerGoal__are_equal(
      &(lhs->qp_planner_goal), &(rhs->qp_planner_goal)))
  {
    return false;
  }
  return true;
}

bool
quadrotor_msgs__msg__PlannerGoal__copy(
  const quadrotor_msgs__msg__PlannerGoal * input,
  quadrotor_msgs__msg__PlannerGoal * output)
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
  // des_tracker
  if (!rosidl_runtime_c__String__copy(
      &(input->des_tracker), &(output->des_tracker)))
  {
    return false;
  }
  // init_cond
  if (!nav_msgs__msg__Odometry__copy(
      &(input->init_cond), &(output->init_cond)))
  {
    return false;
  }
  // line_planner_goal
  if (!quadrotor_msgs__msg__LinePlannerGoal__copy(
      &(input->line_planner_goal), &(output->line_planner_goal)))
  {
    return false;
  }
  // circle_planner_goal
  if (!quadrotor_msgs__msg__CirclePlannerGoal__copy(
      &(input->circle_planner_goal), &(output->circle_planner_goal)))
  {
    return false;
  }
  // lissajous_planner_goal
  if (!quadrotor_msgs__msg__LissaPlannerGoal__copy(
      &(input->lissajous_planner_goal), &(output->lissajous_planner_goal)))
  {
    return false;
  }
  // velocity_planner_goal
  if (!quadrotor_msgs__msg__VelocityPlannerGoal__copy(
      &(input->velocity_planner_goal), &(output->velocity_planner_goal)))
  {
    return false;
  }
  // qp_planner_goal
  if (!quadrotor_msgs__msg__QpPlannerGoal__copy(
      &(input->qp_planner_goal), &(output->qp_planner_goal)))
  {
    return false;
  }
  return true;
}

quadrotor_msgs__msg__PlannerGoal *
quadrotor_msgs__msg__PlannerGoal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__PlannerGoal * msg = (quadrotor_msgs__msg__PlannerGoal *)allocator.allocate(sizeof(quadrotor_msgs__msg__PlannerGoal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quadrotor_msgs__msg__PlannerGoal));
  bool success = quadrotor_msgs__msg__PlannerGoal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quadrotor_msgs__msg__PlannerGoal__destroy(quadrotor_msgs__msg__PlannerGoal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quadrotor_msgs__msg__PlannerGoal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quadrotor_msgs__msg__PlannerGoal__Sequence__init(quadrotor_msgs__msg__PlannerGoal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__PlannerGoal * data = NULL;

  if (size) {
    data = (quadrotor_msgs__msg__PlannerGoal *)allocator.zero_allocate(size, sizeof(quadrotor_msgs__msg__PlannerGoal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quadrotor_msgs__msg__PlannerGoal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quadrotor_msgs__msg__PlannerGoal__fini(&data[i - 1]);
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
quadrotor_msgs__msg__PlannerGoal__Sequence__fini(quadrotor_msgs__msg__PlannerGoal__Sequence * array)
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
      quadrotor_msgs__msg__PlannerGoal__fini(&array->data[i]);
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

quadrotor_msgs__msg__PlannerGoal__Sequence *
quadrotor_msgs__msg__PlannerGoal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quadrotor_msgs__msg__PlannerGoal__Sequence * array = (quadrotor_msgs__msg__PlannerGoal__Sequence *)allocator.allocate(sizeof(quadrotor_msgs__msg__PlannerGoal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quadrotor_msgs__msg__PlannerGoal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quadrotor_msgs__msg__PlannerGoal__Sequence__destroy(quadrotor_msgs__msg__PlannerGoal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quadrotor_msgs__msg__PlannerGoal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quadrotor_msgs__msg__PlannerGoal__Sequence__are_equal(const quadrotor_msgs__msg__PlannerGoal__Sequence * lhs, const quadrotor_msgs__msg__PlannerGoal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quadrotor_msgs__msg__PlannerGoal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quadrotor_msgs__msg__PlannerGoal__Sequence__copy(
  const quadrotor_msgs__msg__PlannerGoal__Sequence * input,
  quadrotor_msgs__msg__PlannerGoal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quadrotor_msgs__msg__PlannerGoal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quadrotor_msgs__msg__PlannerGoal * data =
      (quadrotor_msgs__msg__PlannerGoal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quadrotor_msgs__msg__PlannerGoal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quadrotor_msgs__msg__PlannerGoal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quadrotor_msgs__msg__PlannerGoal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
