#pragma once

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/bool.hpp>

#include <mujoco/mjdata.h>
#include <mujoco/mjmodel.h>
#include <mujoco/mjtnum.h>

#include <string>

namespace MujocoRosUtils
{

/**
 * \brief Passive plugin that publishes std_msgs::msg::Bool on /quadrotor/collision
 *        whenever data->ncon > 0 (i.e., MuJoCo detects one or more contact points).
 *
 * XML usage (inside <worldbody> or top-level <plugin> element):
 *
 *   <plugin name="collision_pub" plugin="MujocoRosUtils::CollisionPublisher">
 *     <config key="topic"        value="/quadrotor/collision"/>
 *     <config key="publish_rate" value="100"/>
 *   </plugin>
 *
 * Attributes:
 *   topic        - Full ROS 2 topic name (default: /quadrotor/collision)
 *   publish_rate - Publish frequency in Hz (default: 100)
 */
class CollisionPublisher
{
public:
  /** \brief Register plugin with MuJoCo plugin registry. */
  static void RegisterPlugin();

  /** \brief Factory method called by MuJoCo on plugin init. */
  static CollisionPublisher * Create(const mjModel * m, mjData * d, int plugin_id);

public:
  CollisionPublisher(CollisionPublisher &&) = default;
  CollisionPublisher(const CollisionPublisher &) = delete;
  CollisionPublisher & operator=(const CollisionPublisher &) = delete;

  /** \brief Reset internal counter (called on simulation reset). */
  void reset(const mjModel * m, int plugin_id);

  /** \brief Read data->ncon and publish collision flag (called every sim step). */
  void compute(const mjModel * m, mjData * d, int plugin_id);

protected:
  CollisionPublisher(const mjModel * m,
                     mjData * d,
                     const std::string & topic,
                     mjtNum publish_rate);

protected:
  rclcpp::Node::SharedPtr nh_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr pub_;

  std::string topic_;
  int publish_skip_ = 1;
  int sim_cnt_      = 0;
};

} // namespace MujocoRosUtils
