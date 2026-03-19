// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lidar_imu_init:msg/States.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lidar_imu_init/msg/detail/states__rosidl_typesupport_introspection_c.h"
#include "lidar_imu_init/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lidar_imu_init/msg/detail/states__functions.h"
#include "lidar_imu_init/msg/detail/states__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rot_end`
// Member `pos_end`
// Member `vel_end`
// Member `bias_gyr`
// Member `bias_acc`
// Member `gravity`
// Member `cov`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lidar_imu_init__msg__States__init(message_memory);
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_fini_function(void * message_memory)
{
  lidar_imu_init__msg__States__fini(message_memory);
}

size_t lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__rot_end(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__rot_end(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__rot_end(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__rot_end(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__rot_end(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__rot_end(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__rot_end(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__rot_end(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__pos_end(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__pos_end(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__pos_end(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__pos_end(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__pos_end(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__pos_end(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__pos_end(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__pos_end(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__vel_end(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__vel_end(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__vel_end(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__vel_end(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__vel_end(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__vel_end(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__vel_end(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__vel_end(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__bias_gyr(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__bias_gyr(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__bias_gyr(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__bias_gyr(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__bias_gyr(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__bias_gyr(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__bias_gyr(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__bias_gyr(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__bias_acc(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__bias_acc(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__bias_acc(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__bias_acc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__bias_acc(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__bias_acc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__bias_acc(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__bias_acc(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__gravity(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__gravity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__gravity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__gravity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__gravity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__gravity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__gravity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__gravity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__cov(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__cov(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__cov(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__cov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__cov(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__cov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__cov(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__cov(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_imu_init__msg__States, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rot_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_imu_init__msg__States, rot_end),  // bytes offset in struct
    NULL,  // default value
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__rot_end,  // size() function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__rot_end,  // get_const(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__rot_end,  // get(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__rot_end,  // fetch(index, &value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__rot_end,  // assign(index, value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__rot_end  // resize(index) function pointer
  },
  {
    "pos_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_imu_init__msg__States, pos_end),  // bytes offset in struct
    NULL,  // default value
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__pos_end,  // size() function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__pos_end,  // get_const(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__pos_end,  // get(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__pos_end,  // fetch(index, &value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__pos_end,  // assign(index, value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__pos_end  // resize(index) function pointer
  },
  {
    "vel_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_imu_init__msg__States, vel_end),  // bytes offset in struct
    NULL,  // default value
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__vel_end,  // size() function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__vel_end,  // get_const(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__vel_end,  // get(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__vel_end,  // fetch(index, &value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__vel_end,  // assign(index, value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__vel_end  // resize(index) function pointer
  },
  {
    "bias_gyr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_imu_init__msg__States, bias_gyr),  // bytes offset in struct
    NULL,  // default value
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__bias_gyr,  // size() function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__bias_gyr,  // get_const(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__bias_gyr,  // get(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__bias_gyr,  // fetch(index, &value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__bias_gyr,  // assign(index, value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__bias_gyr  // resize(index) function pointer
  },
  {
    "bias_acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_imu_init__msg__States, bias_acc),  // bytes offset in struct
    NULL,  // default value
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__bias_acc,  // size() function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__bias_acc,  // get_const(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__bias_acc,  // get(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__bias_acc,  // fetch(index, &value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__bias_acc,  // assign(index, value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__bias_acc  // resize(index) function pointer
  },
  {
    "gravity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_imu_init__msg__States, gravity),  // bytes offset in struct
    NULL,  // default value
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__gravity,  // size() function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__gravity,  // get_const(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__gravity,  // get(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__gravity,  // fetch(index, &value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__gravity,  // assign(index, value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__gravity  // resize(index) function pointer
  },
  {
    "cov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lidar_imu_init__msg__States, cov),  // bytes offset in struct
    NULL,  // default value
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__size_function__States__cov,  // size() function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_const_function__States__cov,  // get_const(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__get_function__States__cov,  // get(index) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__fetch_function__States__cov,  // fetch(index, &value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__assign_function__States__cov,  // assign(index, value) function pointer
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__resize_function__States__cov  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_message_members = {
  "lidar_imu_init__msg",  // message namespace
  "States",  // message name
  8,  // number of fields
  sizeof(lidar_imu_init__msg__States),
  lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_message_member_array,  // message members
  lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_init_function,  // function to initialize message memory (memory has to be allocated)
  lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_message_type_support_handle = {
  0,
  &lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lidar_imu_init
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lidar_imu_init, msg, States)() {
  lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_message_type_support_handle.typesupport_identifier) {
    lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lidar_imu_init__msg__States__rosidl_typesupport_introspection_c__States_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
