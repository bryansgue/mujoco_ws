#include "LowLevelMode.h"

#include <mujoco/mujoco.h>

#include <cstring>
#include <iostream>

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
void LowLevelMode::RegisterPlugin()
{
  mjpPlugin plugin;
  mjp_defaultPlugin(&plugin);
  plugin.name = "MujocoRosUtils::LowLevelMode";
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
    auto * inst = LowLevelMode::Create(m, d, id);
    if(!inst) return -1;
    d->plugin_data[id] = reinterpret_cast<uintptr_t>(inst);
    return 0;
  };

  plugin.destroy = +[](mjData * d, int id)
  {
    delete reinterpret_cast<LowLevelMode *>(d->plugin_data[id]);
    d->plugin_data[id] = 0;
  };

  plugin.compute = +[](const mjModel * m, mjData * d, int id, int)
  { reinterpret_cast<LowLevelMode *>(d->plugin_data[id])->compute(m, d, id); };

  plugin.reset = +[](const mjModel * m, double *, void * plugin_data, int id)
  { reinterpret_cast<LowLevelMode *>(plugin_data)->reset(m, id); };

  mjp_registerPlugin(&plugin);
}

// ---------- Factory ----------
LowLevelMode * LowLevelMode::Create(const mjModel * m, mjData * d, int plugin_id)
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

  std::string j_name = (act_id != -1) ? mj_id2name(m, mjOBJ_JOINT, m->actuator_trnid[act_id * 2]) : "unnamed";

  const char * t_cfg = mj_getPluginConfig(m, plugin_id, "topic_name");
  std::string topic = (t_cfg && strlen(t_cfg) > 0) ? t_cfg : "trpy_cmd";

  int id_fz = find_actuator(m, mj_getPluginConfig(m, plugin_id, "actuator_fz"));
  int id_tx = find_actuator(m, mj_getPluginConfig(m, plugin_id, "actuator_tx"));
  int id_ty = find_actuator(m, mj_getPluginConfig(m, plugin_id, "actuator_ty"));
  int id_tz = find_actuator(m, mj_getPluginConfig(m, plugin_id, "actuator_tz"));

  const char * b_cfg = mj_getPluginConfig(m, plugin_id, "body_name");
  int b_id = b_cfg ? mj_name2id(m, mjOBJ_BODY, b_cfg) : 0;
  std::string b_name = b_cfg ? b_cfg : mj_id2name(m, mjOBJ_BODY, b_id);

  double hz = parse_double(mj_getPluginConfig(m, plugin_id, "control_hz"), 500.0);

  return new LowLevelMode(m, d, id_fz, id_tx, id_ty, id_tz, topic, hz, b_id, b_name);
}

// ---------- Constructor ----------
LowLevelMode::LowLevelMode(const mjModel * m,
                           mjData * d,
                           int id_fz,
                           int id_tx,
                           int id_ty,
                           int id_tz,
                           std::string topic,
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
  // keep your style: note initializer_list can fail on some distros; if it does,
  // switch to vector<string> like we did earlier.
  options.arguments(std::vector<std::string>{"--ros-args", "-r", std::string("__ns:=") + ns});

  if(!rclcpp::ok())
  {
    rclcpp::init(0, nullptr);
  }
  nh_ = rclcpp::Node::make_shared("low_level_ctrl", options);

  // Standard command subscription (keep structure)
  std::string quadrotor_topic = "trpy_cmd";
  sub_trpy_cmd_ = nh_->create_subscription<quadrotor_msgs::msg::TRPYCommand>(
      quadrotor_topic, 10, std::bind(&LowLevelMode::trpy_callback, this, std::placeholders::_1));

  // Payload command subscription (keep structure)
  std::string payload_topic = "trpy_payload_cmd";
  sub_trpy_payload_cmd_ = nh_->create_subscription<quadrotor_msgs::msg::TRPYCommand>(
      payload_topic, 10, std::bind(&LowLevelMode::trpy_payload_callback, this, std::placeholders::_1));

  // Activation Service (keep structure)
  std::string service_name = "activate_payload_nmpc_controller";
  srv_activate_payload_ = nh_->create_service<std_srvs::srv::SetBool>(
      service_name,
      std::bind(&LowLevelMode::activate_payload_callback, this, std::placeholders::_1, std::placeholders::_2));

  executor_ = std::make_shared<rclcpp::executors::SingleThreadedExecutor>();
  executor_->add_node(nh_);
}

// ---------- Callbacks ----------
void LowLevelMode::activate_payload_callback(const std::shared_ptr<std_srvs::srv::SetBool::Request> request,
                                             std::shared_ptr<std_srvs::srv::SetBool::Response> response)
{
  use_nmpc_payload_ = request->data;
  response->success = true;
  response->message = use_nmpc_payload_ ? "Payload NMPC active" : "Standard TRPY active";
  RCLCPP_INFO(nh_->get_logger(), "Switching controller mode: %s", response->message.c_str());
}

void LowLevelMode::trpy_callback(const quadrotor_msgs::msg::TRPYCommand::SharedPtr msg)
{
  if(!use_nmpc_payload_)
  {
    commanded_thrust_ = msg->thrust;
    commanded_torque_ << msg->torque.x, msg->torque.y, msg->torque.z;
    RCLCPP_INFO_THROTTLE(nh_->get_logger(), *nh_->get_clock(), 1000, "Using NMPC QUADROTOR (direct torque)");
  }
}

void LowLevelMode::trpy_payload_callback(const quadrotor_msgs::msg::TRPYCommand::SharedPtr msg)
{
  if(use_nmpc_payload_)
  {
    commanded_thrust_ = msg->thrust;
    commanded_torque_ << msg->torque.x, msg->torque.y, msg->torque.z;
    RCLCPP_INFO_THROTTLE(nh_->get_logger(), *nh_->get_clock(), 1000, "Using NMPC PAYLOAD (direct torque)");
  }
}

// ---------- Physics Compute ----------
void LowLevelMode::compute(const mjModel * m, mjData * d, int)
{
  if(executor_) executor_->spin_once(std::chrono::seconds(0));

  const double t = d->time;
  while(t + 1e-12 >= next_ctrl_time_)
  {
    // Directly write thrust + torque into MuJoCo controls
    if(id_fz_ != -1) d->ctrl[id_fz_] = commanded_thrust_;
    if(id_tx_ != -1) d->ctrl[id_tx_] = commanded_torque_(0);
    if(id_ty_ != -1) d->ctrl[id_ty_] = commanded_torque_(1);
    if(id_tz_ != -1) d->ctrl[id_tz_] = commanded_torque_(2);

    next_ctrl_time_ += ctrl_dt_;
  }
}

void LowLevelMode::reset(const mjModel *, int)
{
  next_ctrl_time_ = 0.0;
  commanded_thrust_ = 0.0;
  commanded_torque_ = Eigen::Vector3d::Zero();
}

} // namespace MujocoRosUtils
