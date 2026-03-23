#pragma once

#include <quadrotor_msgs/msg/so3_command.hpp>
#include <rclcpp/rclcpp.hpp>

#include <mujoco/mjdata.h>
#include <mujoco/mjmodel.h>
#include <mujoco/mjtnum.h>

#include <eigen3/Eigen/Dense>
#include <limits>
#include <memory>
#include <string>

namespace MujocoRosUtils
{

class So3Mode
{
public:
  static void RegisterPlugin();
  static So3Mode * Create(const mjModel * m, mjData * d, int plugin_id);

public:
  So3Mode(So3Mode &&) = default;
  So3Mode(const So3Mode &) = delete;
  So3Mode & operator=(const So3Mode &) = delete;

  void reset(const mjModel * m, int plugin_id);
  void compute(const mjModel * m, mjData * d, int plugin_id);

protected:
  So3Mode(const mjModel * m,
          mjData * d,
          int id_fz,
          int id_tx,
          int id_ty,
          int id_tz,
          std::string topic_name,
          double control_hz,
          int body_id,
          std::string body_name);

  // Callbacks (keep the same structure: two inputs)
  void so3_callback(const quadrotor_msgs::msg::SO3Command::SharedPtr msg);
  void so3_payload_callback(const quadrotor_msgs::msg::SO3Command::SharedPtr msg);

protected:
  // Actuator and Body IDs
  int id_fz_ = -1, id_tx_ = -1, id_ty_ = -1, id_tz_ = -1;
  int body_id_ = -1;
  std::string body_name_;

  // Command Variables (direct force/torque)
  double commanded_force_z_ = 0.0;
  Eigen::Vector3d commanded_torque_ = Eigen::Vector3d::Zero();

  // Simulation Timing
  double ctrl_dt_ = 0.0;
  double next_ctrl_time_ = 0.0;

  // ROS 2
  rclcpp::Node::SharedPtr nh_;
  rclcpp::executors::SingleThreadedExecutor::SharedPtr executor_;
  rclcpp::Subscription<quadrotor_msgs::msg::SO3Command>::SharedPtr sub_so3_cmd_;
  rclcpp::Subscription<quadrotor_msgs::msg::SO3Command>::SharedPtr sub_so3_payload_cmd_;
};

} // namespace MujocoRosUtils
