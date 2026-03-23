#include "So3Mode.h"

#include <mujoco/mujoco.h>

#include <cstring>
#include <iostream>
#include <vector>

namespace MujocoRosUtils
{

// ---------- Helpers ----------
static inline double parse_double(const char * s, double fallback)
{
  if(!s || *s == '\0') return fallback;
  char * end = nullptr;
  const double v = std::strtod(s, &end);
  return (end == s) ? fallback : v;
}

static inline int find_actuator(const mjModel * m, const char * name)
{
  if(!name || std::strlen(name) == 0) return -1;
  return mj_name2id(m, mjOBJ_ACTUATOR, name);
}

// ---------- Registration ----------
void So3Mode::RegisterPlugin()
{
  mjpPlugin plugin;
  mjp_defaultPlugin(&plugin);

  plugin.name = "MujocoRosUtils::So3Mode";
  plugin.capabilityflags |= mjPLUGIN_ACTUATOR;
  plugin.needstage = mjSTAGE_VEL;

  static const char * attributes[] = {"topic_name",  "actuator_fz", "actuator_tx", "actuator_ty",
                                      "actuator_tz", "control_hz",  "body_name"};
  plugin.nattribute = sizeof(attributes) / sizeof(attributes[0]);
  plugin.attributes = attributes;

  plugin.nstate = +[](const mjModel *, int) { return 0; };
  plugin.nsensordata = +[](const mjModel *, int, int) { return 0; };

  plugin.init = +[](const mjModel * m, mjData * d, int id)
  {
    auto * inst = So3Mode::Create(m, d, id);
    if(!inst) return -1;
    d->plugin_data[id] = reinterpret_cast<uintptr_t>(inst);
    return 0;
  };

  plugin.destroy = +[](mjData * d, int id)
  {
    delete reinterpret_cast<So3Mode *>(d->plugin_data[id]);
    d->plugin_data[id] = 0;
  };

  plugin.compute = +[](const mjModel * m, mjData * d, int id, int)
  { reinterpret_cast<So3Mode *>(d->plugin_data[id])->compute(m, d, id); };

  plugin.reset = +[](const mjModel * m, double *, void * plugin_data, int id)
  { reinterpret_cast<So3Mode *>(plugin_data)->reset(m, id); };

  mjp_registerPlugin(&plugin);
}

// ---------- Factory ----------
So3Mode * So3Mode::Create(const mjModel * m, mjData * d, int plugin_id)
{
  int act_id = -1;
  for(int i = 0; i < m->nu; ++i)
  {
    if(m->actuator_plugin[i] == plugin_id)
    {
      act_id = i;
      break;
    }
  }

  // kept (even if unused) to preserve your style
  std::string j_name = (act_id != -1) ? mj_id2name(m, mjOBJ_JOINT, m->actuator_trnid[act_id * 2]) : "unnamed";
  (void)j_name;

  const char * t_cfg = mj_getPluginConfig(m, plugin_id, "topic_name");
  // Default base topic name (we still subscribe to two: so3_cmd and so3_payload_cmd)
  std::string topic = (t_cfg && std::strlen(t_cfg) > 0) ? t_cfg : "so3_cmd";

  int id_fz = find_actuator(m, mj_getPluginConfig(m, plugin_id, "actuator_fz"));
  int id_tx = find_actuator(m, mj_getPluginConfig(m, plugin_id, "actuator_tx"));
  int id_ty = find_actuator(m, mj_getPluginConfig(m, plugin_id, "actuator_ty"));
  int id_tz = find_actuator(m, mj_getPluginConfig(m, plugin_id, "actuator_tz"));

  const char * b_cfg = mj_getPluginConfig(m, plugin_id, "body_name");
  int b_id = b_cfg ? mj_name2id(m, mjOBJ_BODY, b_cfg) : 0;
  std::string b_name = b_cfg ? b_cfg : mj_id2name(m, mjOBJ_BODY, b_id);

  double hz = parse_double(mj_getPluginConfig(m, plugin_id, "control_hz"), 500.0);

  return new So3Mode(m, d, id_fz, id_tx, id_ty, id_tz, topic, hz, b_id, b_name);
}

// ---------- Constructor ----------
So3Mode::So3Mode(const mjModel * /*m*/,
                 mjData * /*d*/,
                 int id_fz,
                 int id_tx,
                 int id_ty,
                 int id_tz,
                 std::string /*topic*/,
                 double hz,
                 int bid,
                 std::string bname)
: id_fz_(id_fz), id_tx_(id_tx), id_ty_(id_ty), id_tz_(id_tz), body_id_(bid), body_name_(bname)
{
  ctrl_dt_ = 1.0 / hz;

  std::string ns = body_name_;
  if(ns.empty()) ns = "/";
  if(ns.front() != '/') ns = "/" + ns;

  rclcpp::NodeOptions options;
  options.arguments(std::vector<std::string>{"--ros-args", "-r", std::string("__ns:=") + ns});

  if(!rclcpp::ok())
  {
    rclcpp::init(0, nullptr);
  }

  nh_ = rclcpp::Node::make_shared("so3_ctrl", options);

  // Keep the same structure: two subscriptions (but NO service switch anymore).
  std::string quadrotor_topic = "so3_cmd";
  sub_so3_cmd_ = nh_->create_subscription<quadrotor_msgs::msg::SO3Command>(
      quadrotor_topic, 10, std::bind(&So3Mode::so3_callback, this, std::placeholders::_1));

  std::string payload_topic = "so3_payload_cmd";
  sub_so3_payload_cmd_ = nh_->create_subscription<quadrotor_msgs::msg::SO3Command>(
      payload_topic, 10, std::bind(&So3Mode::so3_payload_callback, this, std::placeholders::_1));

  executor_ = std::make_shared<rclcpp::executors::SingleThreadedExecutor>();
  executor_->add_node(nh_);
}

// ---------- Callbacks ----------
void So3Mode::so3_callback(const quadrotor_msgs::msg::SO3Command::SharedPtr msg)
{
  // Direct feed-through:
  // - MuJoCo expects a scalar force along +Z actuator, so we use force.z
  // - torque is directly mapped to (tx,ty,tz)
  commanded_force_z_ = msg->thrust;
  commanded_torque_ << msg->torque.x, msg->torque.y, msg->torque.z;

  RCLCPP_INFO_THROTTLE(nh_->get_logger(), *nh_->get_clock(), 1000, "SO3 Controller: Force and Torque");
}

void So3Mode::so3_payload_callback(const quadrotor_msgs::msg::SO3Command::SharedPtr msg)
{
  commanded_force_z_ = msg->thrust;
  commanded_torque_ << msg->torque.x, msg->torque.y, msg->torque.z;

  RCLCPP_INFO_THROTTLE(nh_->get_logger(), *nh_->get_clock(), 1000, "SO3 Controller Payload: Force and Torque");
}

// ---------- Physics Compute ----------
void So3Mode::compute(const mjModel * /*m*/, mjData * d, int /*plugin_id*/)
{
  if(executor_) executor_->spin_once(std::chrono::seconds(0));

  const double t = d->time;
  while(t + 1e-12 >= next_ctrl_time_)
  {
    if(id_fz_ != -1) d->ctrl[id_fz_] = commanded_force_z_;
    if(id_tx_ != -1) d->ctrl[id_tx_] = commanded_torque_(0);
    if(id_ty_ != -1) d->ctrl[id_ty_] = commanded_torque_(1);
    if(id_tz_ != -1) d->ctrl[id_tz_] = commanded_torque_(2);

    next_ctrl_time_ += ctrl_dt_;
  }
}

void So3Mode::reset(const mjModel * /*m*/, int /*plugin_id*/)
{
  next_ctrl_time_ = 0.0;
  commanded_force_z_ = 0.0;
  commanded_torque_.setZero();
}

} // namespace MujocoRosUtils
