// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lidar_imu_init:msg/States.idl
// generated code does not contain a copyright notice

#ifndef LIDAR_IMU_INIT__MSG__DETAIL__STATES__TRAITS_HPP_
#define LIDAR_IMU_INIT__MSG__DETAIL__STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lidar_imu_init/msg/detail/states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace lidar_imu_init
{

namespace msg
{

inline void to_flow_style_yaml(
  const States & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rot_end
  {
    if (msg.rot_end.size() == 0) {
      out << "rot_end: []";
    } else {
      out << "rot_end: [";
      size_t pending_items = msg.rot_end.size();
      for (auto item : msg.rot_end) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pos_end
  {
    if (msg.pos_end.size() == 0) {
      out << "pos_end: []";
    } else {
      out << "pos_end: [";
      size_t pending_items = msg.pos_end.size();
      for (auto item : msg.pos_end) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel_end
  {
    if (msg.vel_end.size() == 0) {
      out << "vel_end: []";
    } else {
      out << "vel_end: [";
      size_t pending_items = msg.vel_end.size();
      for (auto item : msg.vel_end) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bias_gyr
  {
    if (msg.bias_gyr.size() == 0) {
      out << "bias_gyr: []";
    } else {
      out << "bias_gyr: [";
      size_t pending_items = msg.bias_gyr.size();
      for (auto item : msg.bias_gyr) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bias_acc
  {
    if (msg.bias_acc.size() == 0) {
      out << "bias_acc: []";
    } else {
      out << "bias_acc: [";
      size_t pending_items = msg.bias_acc.size();
      for (auto item : msg.bias_acc) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gravity
  {
    if (msg.gravity.size() == 0) {
      out << "gravity: []";
    } else {
      out << "gravity: [";
      size_t pending_items = msg.gravity.size();
      for (auto item : msg.gravity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cov
  {
    if (msg.cov.size() == 0) {
      out << "cov: []";
    } else {
      out << "cov: [";
      size_t pending_items = msg.cov.size();
      for (auto item : msg.cov) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const States & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: rot_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rot_end.size() == 0) {
      out << "rot_end: []\n";
    } else {
      out << "rot_end:\n";
      for (auto item : msg.rot_end) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pos_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_end.size() == 0) {
      out << "pos_end: []\n";
    } else {
      out << "pos_end:\n";
      for (auto item : msg.pos_end) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel_end.size() == 0) {
      out << "vel_end: []\n";
    } else {
      out << "vel_end:\n";
      for (auto item : msg.vel_end) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bias_gyr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias_gyr.size() == 0) {
      out << "bias_gyr: []\n";
    } else {
      out << "bias_gyr:\n";
      for (auto item : msg.bias_gyr) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bias_acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias_acc.size() == 0) {
      out << "bias_acc: []\n";
    } else {
      out << "bias_acc:\n";
      for (auto item : msg.bias_acc) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gravity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gravity.size() == 0) {
      out << "gravity: []\n";
    } else {
      out << "gravity:\n";
      for (auto item : msg.gravity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cov.size() == 0) {
      out << "cov: []\n";
    } else {
      out << "cov:\n";
      for (auto item : msg.cov) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const States & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace lidar_imu_init

namespace rosidl_generator_traits
{

[[deprecated("use lidar_imu_init::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lidar_imu_init::msg::States & msg,
  std::ostream & out, size_t indentation = 0)
{
  lidar_imu_init::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lidar_imu_init::msg::to_yaml() instead")]]
inline std::string to_yaml(const lidar_imu_init::msg::States & msg)
{
  return lidar_imu_init::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lidar_imu_init::msg::States>()
{
  return "lidar_imu_init::msg::States";
}

template<>
inline const char * name<lidar_imu_init::msg::States>()
{
  return "lidar_imu_init/msg/States";
}

template<>
struct has_fixed_size<lidar_imu_init::msg::States>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lidar_imu_init::msg::States>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lidar_imu_init::msg::States>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIDAR_IMU_INIT__MSG__DETAIL__STATES__TRAITS_HPP_
