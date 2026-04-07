#include "CollisionPublisher.h"

#include <mujoco/mujoco.h>

#include <algorithm>
#include <cstring>
#include <iostream>

namespace MujocoRosUtils
{

// ─────────────────────────────────────────────────────────────────────────────
// Registration
// ─────────────────────────────────────────────────────────────────────────────
void CollisionPublisher::RegisterPlugin()
{
  mjpPlugin plugin;
  mjp_defaultPlugin(&plugin);

  plugin.name = "MujocoRosUtils::CollisionPublisher";

  // mjPLUGIN_PASSIVE runs every step without needing a <sensor> element.
  // data->ncon is available after the collision detection phase (mjSTAGE_VEL).
  plugin.capabilityflags |= mjPLUGIN_PASSIVE;

  // Required no-op callbacks to avoid "nstate/nsensordata is null" engine errors.
  plugin.nstate      = +[](const mjModel *, int) { return 0; };
  plugin.nsensordata = +[](const mjModel *, int, int) { return 0; };

  static const char * attributes[] = {"topic", "publish_rate"};
  plugin.nattribute = int(sizeof(attributes) / sizeof(attributes[0]));
  plugin.attributes = attributes;

  plugin.init = +[](const mjModel * m, mjData * d, int plugin_id)
  {
    auto * inst = CollisionPublisher::Create(m, d, plugin_id);
    if(!inst) return -1;
    d->plugin_data[plugin_id] = reinterpret_cast<uintptr_t>(inst);
    return 0;
  };

  plugin.destroy = +[](mjData * d, int plugin_id)
  {
    delete reinterpret_cast<CollisionPublisher *>(d->plugin_data[plugin_id]);
    d->plugin_data[plugin_id] = 0;
  };

  plugin.reset = +[](const mjModel * m, double *, void * plugin_data, int plugin_id)
  { reinterpret_cast<CollisionPublisher *>(plugin_data)->reset(m, plugin_id); };

  plugin.compute = +[](const mjModel * m, mjData * d, int plugin_id, int)
  { reinterpret_cast<CollisionPublisher *>(d->plugin_data[plugin_id])->compute(m, d, plugin_id); };

  mjp_registerPlugin(&plugin);
}

// ─────────────────────────────────────────────────────────────────────────────
// Factory
// ─────────────────────────────────────────────────────────────────────────────
CollisionPublisher * CollisionPublisher::Create(const mjModel * m, mjData * d, int plugin_id)
{
  // Topic name (default: /quadrotor/collision)
  std::string topic = "/quadrotor/collision";
  if(const char * c = mj_getPluginConfig(m, plugin_id, "topic"); c && std::strlen(c) > 0)
    topic = c;

  // Publish rate in Hz (default: 100)
  mjtNum publish_rate = 100.0;
  if(const char * c = mj_getPluginConfig(m, plugin_id, "publish_rate"); c && std::strlen(c) > 0)
    publish_rate = strtod(c, nullptr);

  return new CollisionPublisher(m, d, topic, publish_rate);
}

// ─────────────────────────────────────────────────────────────────────────────
// Constructor
// ─────────────────────────────────────────────────────────────────────────────
CollisionPublisher::CollisionPublisher(const mjModel * m, mjData *, const std::string & topic, mjtNum publish_rate)
: topic_(topic)
{
  publish_skip_ = std::max(static_cast<int>(1.0 / (publish_rate * m->opt.timestep)), 1);

  if(!rclcpp::ok())
  {
    rclcpp::init(0, nullptr);
  }

  // Use global namespace so the topic resolves exactly as configured.
  rclcpp::NodeOptions options;
  options.arguments({"--ros-args", "-r", "__ns:=/"});

  nh_ = rclcpp::Node::make_shared("mujoco_collision_publisher", options);

  pub_ = nh_->create_publisher<std_msgs::msg::Bool>(topic_, 10);

  std::cout << "[CollisionPublisher] Initialized. Publishing on '" << topic_
            << "' at ~" << publish_rate << " Hz (every " << publish_skip_ << " sim steps)."
            << std::endl;
}

// ─────────────────────────────────────────────────────────────────────────────
// Reset
// ─────────────────────────────────────────────────────────────────────────────
void CollisionPublisher::reset(const mjModel *, int)
{
  sim_cnt_ = 0;
}

// ─────────────────────────────────────────────────────────────────────────────
// Compute  — called every simulation step
// ─────────────────────────────────────────────────────────────────────────────
void CollisionPublisher::compute(const mjModel *, mjData * d, int)
{
  ++sim_cnt_;
  if(sim_cnt_ % publish_skip_ != 0) return;

  std_msgs::msg::Bool msg;
  // data->ncon is the number of active contacts detected by MuJoCo.
  // Any value > 0 means there is at least one real physical contact.
  msg.data = (d->ncon > 0);

  pub_->publish(msg);
}

} // namespace MujocoRosUtils
