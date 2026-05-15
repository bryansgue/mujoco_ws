"""Headless MuJoCo runner. Loads scene XML + plugins, steps sim without viewer.

Plugins (AcroMode, OdometryPublisher, ImuPublisher, CollisionPublisher,
ExternalForce) handle ROS2 pub/sub internally — same topics as GUI mode.
"""
import argparse
import os
import signal
import sys
import time

import mujoco


def main():
    p = argparse.ArgumentParser()
    p.add_argument("xml", help="Scene XML path")
    p.add_argument("--plugin-dir", default=None,
                   help="MuJoCo plugin dir (default: <ws>/mujoco-3.4.0/bin/mujoco_plugin)")
    p.add_argument("--realtime", action="store_true",
                   help="Sleep to match wall clock (default: fast-forward)")
    args = p.parse_args()

    ws = os.environ.get("COLCON_UAV_WS_DIR", "/home/bryansgue/uav_ws")
    plugin_dir = args.plugin_dir or os.path.join(ws, "mujoco-3.4.0", "bin", "mujoco_plugin")

    if os.path.isdir(plugin_dir):
        mujoco.mj_loadAllPluginLibraries(plugin_dir)
        print(f"[headless] plugins loaded from {plugin_dir}", flush=True)
    else:
        print(f"[headless] WARN plugin dir not found: {plugin_dir}", flush=True)

    m = mujoco.MjModel.from_xml_path(args.xml)
    d = mujoco.MjData(m)
    dt = m.opt.timestep
    print(f"[headless] model loaded, dt={dt}s, nq={m.nq}, nbody={m.nbody}", flush=True)

    stop = {"flag": False}

    def _sig(_a, _b):
        stop["flag"] = True
    signal.signal(signal.SIGINT, _sig)
    signal.signal(signal.SIGTERM, _sig)

    t0 = time.time()
    sim_t = 0.0
    next_log = 1.0
    while not stop["flag"]:
        mujoco.mj_step(m, d)
        sim_t += dt
        if args.realtime:
            wall = time.time() - t0
            if sim_t > wall:
                time.sleep(sim_t - wall)
        if sim_t >= next_log:
            next_log += 5.0
            wall = time.time() - t0
            rtf = sim_t / wall if wall > 0 else 0.0
            print(f"[headless] sim_t={sim_t:.1f}s wall={wall:.1f}s RTF={rtf:.2f}", flush=True)

    print("[headless] shutdown", flush=True)
    sys.exit(0)


if __name__ == "__main__":
    main()
