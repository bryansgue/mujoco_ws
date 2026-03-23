#pragma once

#include <quadrotor_msgs/msg/trpy_command.hpp>
#include <rclcpp/rclcpp.hpp>

#include <mujoco/mjdata.h>
#include <mujoco/mjmodel.h>
#include <mujoco/mjtnum.h>

#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>
#include <limits>
#include <memory>
#include <std_srvs/srv/set_bool.hpp>
#include <string>

namespace MujocoRosUtils
{

class LowLevelMode
{
public:
  static void RegisterPlugin();
  static LowLevelMode * Create(const mjModel * m, mjData * d, int plugin_id);

public:
  LowLevelMode(LowLevelMode &&) = default;
  LowLevelMode(const LowLevelMode &) = delete;
  LowLevelMode & operator=(const LowLevelMode &) = delete;

  void reset(const mjModel * m, int plugin_id);
  void compute(const mjModel * m, mjData * d, int plugin_id);

protected:
  LowLevelMode(const mjModel * m,
               mjData * d,
               int id_fz,
               int id_tx,
               int id_ty,
               int id_tz,
               std::string topic_name,
               double control_hz,
               int body_id,
               std::string body_name);

  // Callbacks
  void trpy_callback(const quadrotor_msgs::msg::TRPYCommand::SharedPtr msg);
  void trpy_payload_callback(const quadrotor_msgs::msg::TRPYCommand::SharedPtr msg);

  // Service Callback
  void activate_payload_callback(const std::shared_ptr<std_srvs::srv::SetBool::Request> request,
                                 std::shared_ptr<std_srvs::srv::SetBool::Response> response);

protected:
  // Actuator and Body IDs
  int id_fz_ = -1, id_tx_ = -1, id_ty_ = -1, id_tz_ = -1;
  int body_id_ = -1;
  std::string body_name_;

  // Controller State
  bool use_nmpc_payload_ = false;

  // Command Variables (direct force/torque)
  double commanded_thrust_ = 0.0;
  Eigen::Vector3d commanded_torque_ = Eigen::Vector3d::Zero();

  // Simulation Timing
  double ctrl_dt_ = 0.0;
  double next_ctrl_time_ = 0.0;

  // ROS 2
  rclcpp::Node::SharedPtr nh_;
  rclcpp::executors::SingleThreadedExecutor::SharedPtr executor_;
  rclcpp::Subscription<quadrotor_msgs::msg::TRPYCommand>::SharedPtr sub_trpy_cmd_;
  rclcpp::Subscription<quadrotor_msgs::msg::TRPYCommand>::SharedPtr sub_trpy_payload_cmd_;
  rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr srv_activate_payload_;
};

} // namespace MujocoRosUtils
