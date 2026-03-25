#pragma once

#include <nav_msgs/msg/path.hpp>
#include <rclcpp/rclcpp.hpp>

#include <mujoco/mjdata.h>
#include <mujoco/mjmodel.h>
#include <mujoco/mjvisualize.h>

#include <mutex>
#include <string>
#include <vector>

namespace MujocoRosUtils
{

/**
 * Plugin that subscribes to nav_msgs/Path and renders the trajectory
 * as small spheres in MuJoCo.
 *
 * Usage in XML:
 *   <!-- Add marker bodies (worldbody level) -->
 *   <body name="mpc_marker_0" mocap="true">
 *     <geom type="sphere" size="0.02" rgba="1 0 0 0.8" contype="0" conaffinity="0"/>
 *   </body>
 *   ... (repeat for N markers)
 *
 *   <!-- Plugin (in actuator section) -->
 *   <plugin name="path_viz" plugin="MujocoRosUtils::PathVisualizer" instance="path_viz">
 *     <config key="topic"        value="/quadrotor/mpc_prediction"/>
 *     <config key="marker_prefix" value="mpc_marker_"/>
 *     <config key="num_markers"  value="20"/>
 *   </plugin>
 */
class PathVisualizer
{
public:
  static void RegisterPlugin();
  static PathVisualizer * Create(const mjModel * m, mjData * d, int plugin_id);

  PathVisualizer(PathVisualizer &&) = default;

  void reset(const mjModel * m, int plugin_id);
  void compute(const mjModel * m, mjData * d, int plugin_id);

protected:
  PathVisualizer(const mjModel * m,
                 mjData * d,
                 const std::string & topic,
                 const std::vector<int> & mocap_ids,
                 int num_markers);

  void path_callback(const nav_msgs::msg::Path::SharedPtr msg);

  //! Mocap body IDs for each marker
  std::vector<int> mocap_ids_;

  //! Number of visual markers
  int num_markers_ = 0;

  //! Received path points (protected by mutex)
  std::vector<std::array<double, 3>> path_points_;
  std::mutex path_mutex_;

  //! ROS
  rclcpp::Node::SharedPtr nh_;
  rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr sub_;
  rclcpp::executors::SingleThreadedExecutor::SharedPtr executor_;
};

} // namespace MujocoRosUtils
