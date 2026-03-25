#include "PathVisualizer.h"

#include <mujoco/mujoco.h>

#include <cstring>

namespace MujocoRosUtils
{

// ---------- Registration ----------
void PathVisualizer::RegisterPlugin()
{
  mjpPlugin plugin;
  mjp_defaultPlugin(&plugin);
  plugin.name = "MujocoRosUtils::PathVisualizer";
  plugin.capabilityflags |= mjPLUGIN_SENSOR;
  plugin.needstage = mjSTAGE_VEL;

  static const char * attributes[] = {"topic", "marker_prefix", "num_markers"};
  plugin.nattribute = 3;
  plugin.attributes = attributes;

  plugin.nstate = +[](const mjModel *, int) { return 0; };
  plugin.nsensordata = +[](const mjModel *, int, int) { return 0; };

  plugin.init = +[](const mjModel * m, mjData * d, int id)
  {
    auto * inst = PathVisualizer::Create(m, d, id);
    if(!inst) return -1;
    d->plugin_data[id] = reinterpret_cast<uintptr_t>(inst);
    return 0;
  };

  plugin.destroy = +[](mjData * d, int id)
  {
    delete reinterpret_cast<PathVisualizer *>(d->plugin_data[id]);
    d->plugin_data[id] = 0;
  };

  plugin.reset = +[](const mjModel * m, double *, void * plugin_data, int id)
  { reinterpret_cast<PathVisualizer *>(plugin_data)->reset(m, id); };

  plugin.compute = +[](const mjModel * m, mjData * d, int id, int)
  { reinterpret_cast<PathVisualizer *>(d->plugin_data[id])->compute(m, d, id); };

  mjp_registerPlugin(&plugin);
}

// ---------- Factory ----------
PathVisualizer * PathVisualizer::Create(const mjModel * m, mjData * d, int plugin_id)
{
  const char * topic_cfg = mj_getPluginConfig(m, plugin_id, "topic");
  std::string topic = (topic_cfg && strlen(topic_cfg) > 0) ? topic_cfg : "/quadrotor/mpc_prediction";

  const char * prefix_cfg = mj_getPluginConfig(m, plugin_id, "marker_prefix");
  std::string prefix = (prefix_cfg && strlen(prefix_cfg) > 0) ? prefix_cfg : "mpc_marker_";

  const char * num_cfg = mj_getPluginConfig(m, plugin_id, "num_markers");
  int num_markers = (num_cfg && strlen(num_cfg) > 0) ? std::atoi(num_cfg) : 20;

  // Find mocap bodies with matching prefix
  std::vector<int> mocap_ids;
  for(int i = 0; i < num_markers; ++i)
  {
    std::string name = prefix + std::to_string(i);
    int bid = mj_name2id(m, mjOBJ_BODY, name.c_str());
    if(bid < 0)
    {
      printf("[PathVisualizer] Warning: mocap body '%s' not found. Using %d markers.\n", name.c_str(), i);
      break;
    }
    if(m->body_mocapid[bid] < 0)
    {
      printf("[PathVisualizer] Warning: body '%s' is not mocap. Skipping.\n", name.c_str());
      continue;
    }
    mocap_ids.push_back(bid);
  }

  if(mocap_ids.empty())
  {
    printf("[PathVisualizer] ERROR: no mocap bodies found with prefix '%s'. Plugin disabled.\n", prefix.c_str());
    // Still create instance (won't crash), just won't render
  }

  printf("[PathVisualizer] Created: topic='%s', %zu mocap markers.\n", topic.c_str(), mocap_ids.size());
  return new PathVisualizer(m, d, topic, mocap_ids, static_cast<int>(mocap_ids.size()));
}

// ---------- Constructor ----------
PathVisualizer::PathVisualizer(const mjModel *,
                               mjData *,
                               const std::string & topic,
                               const std::vector<int> & mocap_ids,
                               int num_markers)
: mocap_ids_(mocap_ids), num_markers_(num_markers)
{
  if(!rclcpp::ok())
  {
    rclcpp::init(0, nullptr);
  }

  nh_ = rclcpp::Node::make_shared("path_visualizer");
  sub_ = nh_->create_subscription<nav_msgs::msg::Path>(
      topic, 10, std::bind(&PathVisualizer::path_callback, this, std::placeholders::_1));

  executor_ = std::make_shared<rclcpp::executors::SingleThreadedExecutor>();
  executor_->add_node(nh_);

  printf("[PathVisualizer] Subscribing to '%s'\n", topic.c_str());
}

// ---------- Callback ----------
void PathVisualizer::path_callback(const nav_msgs::msg::Path::SharedPtr msg)
{
  std::vector<std::array<double, 3>> pts;
  pts.reserve(msg->poses.size());
  for(const auto & ps : msg->poses)
  {
    pts.push_back({ps.pose.position.x, ps.pose.position.y, ps.pose.position.z});
  }

  std::lock_guard<std::mutex> lock(path_mutex_);
  path_points_ = std::move(pts);
}

// ---------- Reset ----------
void PathVisualizer::reset(const mjModel *, int) {}

// ---------- Compute ----------
void PathVisualizer::compute(const mjModel * m, mjData * d, int)
{
  if(executor_) executor_->spin_once(std::chrono::seconds(0));

  std::lock_guard<std::mutex> lock(path_mutex_);

  const int n_pts = static_cast<int>(path_points_.size());
  const int n_markers = static_cast<int>(mocap_ids_.size());

  if(n_markers == 0) return;

  // Hide position for unused markers (move far away)
  constexpr double HIDDEN_Z = -100.0;

  for(int i = 0; i < n_markers; ++i)
  {
    int mocap_id = m->body_mocapid[mocap_ids_[i]];
    if(mocap_id < 0) continue;

    if(n_pts == 0)
    {
      // No path received yet: hide all markers
      d->mocap_pos[3 * mocap_id + 2] = HIDDEN_Z;
      continue;
    }

    // Distribute markers evenly along the received path
    // If path has 50 points and we have 20 markers:
    //   marker_i maps to path point i * (50-1) / (20-1)
    int path_idx;
    if(n_markers == 1)
      path_idx = 0;
    else
      path_idx = i * (n_pts - 1) / (n_markers - 1);

    path_idx = std::min(path_idx, n_pts - 1);

    d->mocap_pos[3 * mocap_id + 0] = path_points_[path_idx][0];
    d->mocap_pos[3 * mocap_id + 1] = path_points_[path_idx][1];
    d->mocap_pos[3 * mocap_id + 2] = path_points_[path_idx][2];
  }
}

} // namespace MujocoRosUtils
