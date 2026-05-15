// Headless MuJoCo runner. Loads scene XML + plugins, steps sim without viewer.
// Plugins (AcroMode, OdometryPublisher, ImuPublisher, CollisionPublisher,
// ExternalForce) handle ROS2 pub/sub internally.
#include <mujoco/mujoco.h>

#include <atomic>
#include <chrono>
#include <csignal>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <thread>

namespace
{
std::atomic<bool> g_stop{false};
void on_sig(int) { g_stop.store(true); }
}  // namespace

int main(int argc, char ** argv)
{
  const char * xml_path = nullptr;
  const char * plugin_dir = nullptr;
  bool realtime = false;

  for(int i = 1; i < argc; ++i)
  {
    if(std::strcmp(argv[i], "--plugin-dir") == 0 && i + 1 < argc) { plugin_dir = argv[++i]; }
    else if(std::strcmp(argv[i], "--realtime") == 0) { realtime = true; }
    else if(argv[i][0] != '-') { xml_path = argv[i]; }
  }

  if(!xml_path)
  {
    std::fprintf(stderr, "usage: headless_runner <scene.xml> [--plugin-dir DIR] [--realtime]\n");
    return 1;
  }

  if(plugin_dir)
  {
    mj_loadAllPluginLibraries(plugin_dir, nullptr);
    std::printf("[headless] plugins loaded from %s\n", plugin_dir);
    std::fflush(stdout);
  }

  char err[1024] = {0};
  mjModel * m = mj_loadXML(xml_path, nullptr, err, sizeof(err));
  if(!m)
  {
    std::fprintf(stderr, "[headless] mj_loadXML failed: %s\n", err);
    return 2;
  }
  mjData * d = mj_makeData(m);
  const double dt = m->opt.timestep;
  std::printf("[headless] model loaded, dt=%.4fs, nq=%d, nbody=%d\n", dt, m->nq, m->nbody);
  std::fflush(stdout);

  std::signal(SIGINT, on_sig);
  std::signal(SIGTERM, on_sig);

  using clk = std::chrono::steady_clock;
  const auto t0 = clk::now();
  double sim_t = 0.0;
  double next_log = 5.0;

  while(!g_stop.load())
  {
    mj_step(m, d);
    sim_t += dt;

    if(realtime)
    {
      const double wall = std::chrono::duration<double>(clk::now() - t0).count();
      if(sim_t > wall)
      {
        std::this_thread::sleep_for(std::chrono::duration<double>(sim_t - wall));
      }
    }

    if(sim_t >= next_log)
    {
      next_log += 5.0;
      const double wall = std::chrono::duration<double>(clk::now() - t0).count();
      const double rtf = wall > 0 ? sim_t / wall : 0.0;
      std::printf("[headless] sim_t=%.1fs wall=%.1fs RTF=%.2f\n", sim_t, wall, rtf);
      std::fflush(stdout);
    }
  }

  mj_deleteData(d);
  mj_deleteModel(m);
  std::printf("[headless] shutdown\n");
  return 0;
}
