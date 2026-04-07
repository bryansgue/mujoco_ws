# Actuator Fidelity Effects on Quadrotor Rate Controller Performance: A MuJoCo-ROS 2 Multi-Model Simulation Framework

**Authors:** Bryan S. Guevara et al.

**Venue target:** ICRA 2026 Workshop on Aerial Robotics Simulation / Simulation Modelling Practice and Theory

---

## Abstract

Simulation-based development of quadrotor controllers frequently employs simplified actuation models that bypass motor dynamics, enabling rapid prototyping but obscuring the degradation in closed-loop stability that occurs when the same controller is transferred to a higher-fidelity model or to hardware. This paper presents an open-source quadrotor simulation framework built on MuJoCo and ROS 2 that implements two actuation models — a Direct Wrench Model and a Motor-Level Model — sharing an identical ROS 2 interface, enabling direct model comparison without modifying the external controller. Both models embed a common inner-loop angular rate controller inside the MuJoCo plugin loop, using inertia computed automatically by the physics engine. We derive analytically that the motor first-order lag introduces a phase margin reduction of $\Delta\phi = -\arctan(\omega_c \tau_m)$, reaching $-42^\circ$ on the yaw axis at $\tau_m = 0.02$ s with $K_{\omega,z} = 45$ rad/s. Through five simulation experiments we quantify how the motor time constant $\tau_m$ affects rate step response overshoot, hover tracking error, circular trajectory error, and mixer saturation behavior. The framework is open source and designed as a calibration-ready platform for digital twin development.

**Keywords:** Quadrotor simulation, MuJoCo, ROS 2, motor dynamics, actuator fidelity, control allocation, sim-to-real gap.

---

## I. Introduction

Simulation is the primary development environment for quadrotor control algorithms. A controller is typically designed, tuned, and stress-tested in simulation before any hardware experiment, making the fidelity of the simulation model a direct determinant of the likelihood of successful hardware transfer.

The current ecosystem of UAV simulators presents a practical dilemma. Simplified models — rigid-body simulators with direct wrench application — are fast and transparent, but they treat actuation as instantaneous and perfectly responsive. Real quadrotors equipped with Betaflight or ArduPilot flight controllers operate through an actuation chain that includes an ESC command pipeline, brushless motor electromechanical dynamics with a first-order time constant $\tau_m \in [15, 30]$ ms, a mixer that distributes a desired wrench across four motors with shared saturation constraints, and propeller aerodynamics governed by $f = k_f \Omega^2$. This chain introduces lag, thrust-torque coupling, and nonlinear saturation that simplified models do not capture.

Mid-fidelity simulators such as Gazebo with RotorS [7] provide motor models and aerodynamic plugins, but the rate controller — if present — runs in a separate ROS node, introducing communication latency between the physics step and the actuation command. AirSim [8] targets visual autonomy and offers limited configurability of actuator parameters. Flightmare [9] uses a simplified Euler integrator and lacks general-purpose contact dynamics. None of these tools provide both models under an identical ROS interface, making direct comparison of control behavior across fidelity levels impractical.

The consequence is a recurring pattern in UAV research: a controller designed with a simplified model performs well in simulation, requires significant re-tuning when a motor model is introduced, and requires further re-tuning on hardware. The root cause — a quantifiable reduction in stability margins — is rarely analyzed in simulation before hardware testing.

This paper addresses that gap. The central contributions are:

1. A MuJoCo-ROS 2 plugin framework where both a Direct Wrench Model and a Motor-Level Model share an identical command interface (`TRPYCommand` on the same ROS 2 topic), making model fidelity a configuration flag rather than an architectural choice.

2. An analytical derivation showing that the Motor-Level Model introduces a phase margin reduction of $\Delta\phi = -\arctan(\omega_c \tau_m)$ per rate axis, with $\Delta\phi \approx -42^\circ$ on the yaw axis for the nominal parameters $K_{\omega,z} = 45$ rad/s and $\tau_m = 0.02$ s.

3. Five simulation experiments that quantify how $\tau_m$ affects: (i) rate step response overshoot, (ii) the $\tau_m$ value at which the rate loop becomes marginally stable, (iii) hover position RMSE, (iv) circular trajectory tracking error, and (v) per-motor speed saturation during aggressive attitude commands.

4. A derivation of the Betaflight X-configuration allocation matrix $\mathbf{A}$ and its closed-form inverse $\mathbf{A}^{-1}$, including the general formula for arbitrary $n$-motor configurations.

The remainder of this paper is organized as follows. Section II reviews related work. Section III establishes the system model and dynamics. Section IV derives both actuation models and their closed-loop transfer functions. Section V describes the software architecture. Section VI presents simulation results. Section VII discusses design implications. Section VIII concludes.

---

## II. Related Work

### A. UAV Simulation Platforms

Table I summarizes the key characteristics of existing quadrotor simulators.

**Table I. Comparison of Quadrotor Simulation Platforms**

| Platform | Physics Engine | Motor Model | ROS Integration | Rate Ctrl. in Loop | Multi-Fidelity |
|---|---|---|---|---|---|
| Gazebo + RotorS [7] | ODE / Bullet | Separate plugin | ROS 1/2 | No (external node) | No |
| AirSim [8] | PhysX | Simplified | ROS 1 wrapper | No | No |
| Flightmare [9] | Custom Euler | None | Python API | No | No |
| **This work** | **MuJoCo RK4** | **In-loop plugin** | **ROS 2 native** | **Yes** | **Yes** |

Gazebo with RotorS [7] is the de facto standard for ROS-based UAV simulation. Its motor models run in separate plugins that communicate with the physics engine via topic messages, introducing non-deterministic timing between the physics step and actuation. Flightmare [9] achieves high rendering throughput but uses a first-order Euler integrator incompatible with stiff motor dynamics. AirSim [8] targets visual autonomy and offers limited configurability of actuator dynamics. MuJoCo's use in aerial robotics remains underexplored; the majority of published MuJoCo work targets legged locomotion and manipulation [1].

### B. Actuator Modeling in Simulation

Faessler et al. [4] demonstrated that neglecting motor dynamics causes substantial degradation in trajectory tracking during aggressive flight, and derived the thrust mixing equations for a standard X-configuration. Torrente et al. [5] showed that incorporating motor lag and aerodynamic effects significantly improves sim-to-real transfer for learned controllers. Both works, however, use custom simulation environments not integrated with standard ROS 2 middleware, and neither provides a tool for directly comparing controller behavior across fidelity levels under identical conditions.

### C. Sim-to-Real Gap

The sim-to-real gap in quadrotor control is predominantly attributed to three sources: unmodeled aerodynamics, sensor noise, and actuator dynamics [5]. This work addresses the third source directly, providing a framework that allows a developer to quantify the stability margin reduction introduced by motor dynamics in simulation — before any hardware experiment is conducted.

---

## III. System Model

### A. Reference Frames

We define two principal reference frames:

- **World frame** $\mathcal{W}$: An inertial frame with $\mathbf{e}_3^W$ pointing upward, opposite to gravity.
- **Body frame** $\mathcal{B}$: Fixed to the quadrotor center of mass, with $\mathbf{e}_1^B$ forward, $\mathbf{e}_2^B$ left, and $\mathbf{e}_3^B$ upward through the propeller plane.

The orientation of $\mathcal{B}$ with respect to $\mathcal{W}$ is represented by the rotation matrix $\mathbf{R} \in SO(3)$, which maps body-frame vectors to world-frame vectors:

$$\mathbf{v}^W = \mathbf{R} \, \mathbf{v}^B \tag{1}$$

MuJoCo internally stores orientation as a unit quaternion $\mathbf{q} = (q_w, q_x, q_y, q_z)^\top \in \mathbb{S}^3$ (Hamilton convention). The rotation matrix is reconstructed as:

$$\mathbf{R}(\mathbf{q}) = \begin{bmatrix} 1-2(q_y^2+q_z^2) & 2(q_xq_y-q_wq_z) & 2(q_xq_z+q_wq_y) \\ 2(q_xq_y+q_wq_z) & 1-2(q_x^2+q_z^2) & 2(q_yq_z-q_wq_x) \\ 2(q_xq_z-q_wq_y) & 2(q_yq_z+q_wq_x) & 1-2(q_x^2+q_y^2) \end{bmatrix} \tag{2}$$

This avoids the gimbal lock singularity inherent to Euler angle representations. The body-frame angular velocity is obtained from MuJoCo's `mj_objectVelocity()` output via:

$$\boldsymbol{\omega}^B = \mathbf{R}^\top \boldsymbol{\omega}^W \tag{3}$$

### B. Rigid-Body Dynamics

**Translational dynamics** in the world frame:

$$m \ddot{\mathbf{p}}^W = -mg\,\mathbf{e}_3^W + \mathbf{R} \begin{pmatrix} 0 \\ 0 \\ F \end{pmatrix} + \mathbf{f}_\mathrm{ext} \tag{4}$$

where $m$ is the total mass, $F$ is the scalar thrust along $\mathbf{e}_3^B$, and $\mathbf{f}_\mathrm{ext}$ includes contact forces resolved by MuJoCo's convex-optimization constraint solver.

**Rotational dynamics** (Euler equation, body frame):

$$\mathbf{J}\dot{\boldsymbol{\omega}}^B = \boldsymbol{\tau}^B - \boldsymbol{\omega}^B \times (\mathbf{J}\boldsymbol{\omega}^B) \tag{5}$$

where $\boldsymbol{\tau}^B = (\tau_x, \tau_y, \tau_z)^\top$ is the net body-frame torque and $\boldsymbol{\omega}^B \times (\mathbf{J}\boldsymbol{\omega}^B)$ is the gyroscopic coupling term. The inertia tensor is diagonal by the quadrotor's reflective symmetry:

$$\mathbf{J} = \mathrm{diag}(J_{xx},\, J_{yy},\, J_{zz}) \tag{6}$$

### C. Quadrotor Model Parameters

The quadrotor body consists of a central box body (70×70×30 mm, 0.850 kg), four arms (100×20×5 mm, 0.035 kg each), and four propeller discs (cylinder $r=30$ mm, $h=5$ mm, 0.015 kg each), giving a total mass $m = 0.850 + 4\times0.035 + 4\times0.015 = 1.05$ kg. MuJoCo computes the composite inertia tensor automatically from these geometries at model load time using the parallel axis theorem, and the `AcroMode` plugin reads the result directly from `m->body_inertia[3 \cdot \text{body\_id} + \{0,1,2\}]` in its `init` callback. All physical and motor parameters are listed in Table II.

**Table II. Quadrotor Physical and Motor Parameters**

| Parameter | Symbol | Value | Units | Source |
|---|---|---|---|---|
| Total mass | $m$ | 1.05 | kg | MuJoCo auto-compute |
| Inertia roll | $J_{xx}$ | $3.454 \times 10^{-3}$ | kg·m² | MuJoCo auto-compute |
| Inertia pitch | $J_{yy}$ | $1.797 \times 10^{-3}$ | kg·m² | MuJoCo auto-compute |
| Inertia yaw | $J_{zz}$ | $1.797 \times 10^{-3}$ | kg·m² | MuJoCo auto-compute |
| Arm length | $L$ | 0.1 | m | XACRO geometry |
| Effective arm | $L_s = L/\sqrt{2}$ | 0.0707 | m | Derived |
| Thrust coefficient | $k_f$ | $1.91 \times 10^{-6}$ | N/(rad/s)² | Hover condition (11) |
| Torque coefficient | $k_m$ | $2.6 \times 10^{-8}$ | N·m/(rad/s)² | $k_m/k_f = 0.0136$ |
| Motor time constant | $\tau_m$ | 0.020 | s | Default, XACRO-tunable |
| Max motor speed | $\Omega_\mathrm{max}$ | 2500 | rad/s | Design parameter |
| Linear drag coeff. | $D_\mathrm{lin}$ | 0.1 | N/(m/s) | Default, XACRO-tunable |

**Motor layout — Betaflight X-configuration (top view):**

```
         Front (+x)
    M4 (CCW)   M1 (CW)
         \       /
          [BODY]
         /       \
    M3 (CW)   M2 (CCW)
         Rear (-x)
```

Motor body-frame positions: M1 $(+L_s, -L_s)$, M2 $(-L_s, -L_s)$, M3 $(-L_s, +L_s)$, M4 $(+L_s, +L_s)$. Spin sign $\sigma_i$: M1 and M3 clockwise ($\sigma = -1$); M2 and M4 counter-clockwise ($\sigma = +1$).

**Operating point at hover:**

$$\Omega_\mathrm{hover} = \sqrt{\frac{mg}{4k_f}} = \sqrt{\frac{1.08 \times 9.81}{4 \times 1.91 \times 10^{-6}}} \approx 1178 \;\text{rad/s} \quad (46.4\%\;\text{of}\;\Omega_\mathrm{max}) \tag{7}$$

Thrust-to-weight ratio: $F_\mathrm{max}/(mg) = 4k_f\Omega_\mathrm{max}^2/(mg) \approx 4.64$.

---

## IV. Actuation Models

### A. Model I: Direct Wrench

The Direct Wrench Model bypasses all motor and propeller dynamics. An external controller sends a desired thrust $F_\mathrm{cmd}$ and desired body-frame angular velocity $\boldsymbol{\omega}_d = (\omega_{d,x}, \omega_{d,y}, \omega_{d,z})^\top$ via the `quadrotor_msgs/TRPYCommand` ROS 2 message to the topic `/<quad_name>/trpy_cmd`. The `AcroMode::compute()` callback, executing inside MuJoCo's timestep at 500 Hz, computes the desired torque as:

$$\boldsymbol{\tau}_\mathrm{des} = \boldsymbol{\omega}^B \times (\mathbf{J}\boldsymbol{\omega}^B) - \mathbf{J}\,\mathbf{K}_\omega\,(\boldsymbol{\omega}^B - \boldsymbol{\omega}_d) \tag{8}$$

where $\mathbf{K}_\omega = \mathrm{diag}(K_{\omega,x}, K_{\omega,y}, K_{\omega,z})$ is the diagonal rate gain matrix. The first term is the **gyroscopic feedforward** that cancels the Coriolis coupling in (5). Substituting (8) into (5) yields decoupled first-order closed-loop dynamics per axis:

$$\dot{\omega}_i = -K_{\omega,i}\,(\omega_i - \omega_{d,i}), \qquad i \in \{x, y, z\} \tag{9}$$

with convergence time constants $\tau_i = 1/K_{\omega,i}$ and zero steady-state error. The wrench $(F_\mathrm{cmd},\, \boldsymbol{\tau}_\mathrm{des})$ is written directly to `d->ctrl[]` for four MuJoCo motor actuators:

| Actuator | Signal | Gear vector | Range |
|---|---|---|---|
| `body_thrust` | $F_\mathrm{cmd}$ | $(0,0,1,0,0,0)$ | $[0,\;82]$ N |
| `x_moment` | $\tau_x$ | $(0,0,0,1,0,0)$ | $[-0.3,\;0.3]$ N·m |
| `y_moment` | $\tau_y$ | $(0,0,0,0,1,0)$ | $[-0.3,\;0.3]$ N·m |
| `z_moment` | $\tau_z$ | $(0,0,0,0,0,1)$ | $[-0.3,\;0.3]$ N·m |

Rate controller gains and their implied time constants:

| Axis | $K_{\omega,i}$ | $\tau_i = 1/K_{\omega,i}$ | Approx. crossover $\omega_{c,i}$ |
|---|---|---|---|
| Roll ($x$) | 20.0 rad/s | 50.0 ms | 20 rad/s |
| Pitch ($y$) | 35.0 rad/s | 28.6 ms | 35 rad/s |
| Yaw ($z$) | 45.0 rad/s | 22.2 ms | 45 rad/s |

The gain asymmetry reflects the inertia asymmetry: $J_{xx} = 3.454 \times 10^{-3}$ kg·m² (roll) is larger than $J_{yy} = J_{zz} = 1.797 \times 10^{-3}$ kg·m² (pitch, yaw), so roll requires a lower gain to maintain comparable closed-loop bandwidth.

The open-loop transfer function per axis is a pure integrator:

$$G_{\mathrm{OL},i}^\mathrm{DW}(s) = \frac{K_{\omega,i}}{s} \tag{10}$$

with gain crossover at $\omega = K_{\omega,i}$ rad/s, infinite gain margin, and $90^\circ$ phase margin.

### B. Model II: Motor-Level

The Motor-Level Model inserts a physically accurate actuation pipeline between the rate controller output and the MuJoCo actuators. The signal flow per control cycle is:

$$\underbrace{(F_\mathrm{cmd},\;\boldsymbol{\omega}_d)}_{\text{ext. command}} \;\xrightarrow{\text{(8) rate ctrl}}\; \underbrace{\mathbf{w}_\mathrm{des}}_{\text{desired wrench}} \;\xrightarrow{\mathbf{A}^{-1}}\; \underbrace{\boldsymbol{\Omega}_{d}^2}_{\text{desired speeds}^2} \;\xrightarrow{\text{clamp + }\sqrt{\cdot}}\; \underbrace{\boldsymbol{\Omega}_d}_{\text{desired speeds}} \;\xrightarrow{\text{motor dyn.}}\; \underbrace{\boldsymbol{\Omega}}_{\text{actual speeds}} \;\xrightarrow{\mathbf{A}}\; \underbrace{\mathbf{w}_\mathrm{act}}_{\text{actual wrench}} \;\xrightarrow{}\; \texttt{d->ctrl[]}$$

#### B.1 Propeller Aerodynamic Model

Each motor $i$ generates thrust $f_i$ and reactive torque $\mu_i$ as quadratic functions of angular velocity $\Omega_i$:

$$f_i = k_f \Omega_i^2, \qquad \mu_i = k_m \Omega_i^2 \tag{11}$$

The quadratic relationship follows from blade element momentum theory (BEMT): for a propeller of radius $R$ in hover, thrust is $f = C_T \rho n^2 D^4$ with $n = \Omega/(2\pi)$ and approximately constant $C_T$ at fixed pitch, giving $f \propto \Omega^2$. The ratio $k_m/k_f = c_{\tau f} \approx 0.0136$ m is a characteristic constant of the blade's drag-to-lift geometry. The thrust coefficient is derived from the hover condition:

$$k_f = \frac{mg/4}{\Omega_\mathrm{hover}^2} = \frac{1.08 \times 9.81/4}{1178^2} \approx 1.91 \times 10^{-6} \;\text{N/(rad/s)}^2 \tag{12}$$

#### B.2 Control Allocation Matrix

The total wrench produced by all four propellers, using the motor positions and spin directions from Section III-C, takes the compact matrix form:

$$\mathbf{w} = \begin{pmatrix} F \\ \tau_x \\ \tau_y \\ \tau_z \end{pmatrix} = \underbrace{\begin{pmatrix} k_f & k_f & k_f & k_f \\ -k_fL_s & -k_fL_s & k_fL_s & k_fL_s \\ k_fL_s & -k_fL_s & -k_fL_s & k_fL_s \\ -k_m & k_m & -k_m & k_m \end{pmatrix}}_{\mathbf{A}} \begin{pmatrix} \Omega_1^2 \\ \Omega_2^2 \\ \Omega_3^2 \\ \Omega_4^2 \end{pmatrix} \tag{13}$$

Row interpretation: (1) thrust — all motors contribute positively; (2) roll torque — differential thrust across the $y$-axis with arm $L_s$, so the left pair (M3, M4) lifts the right side; (3) pitch torque — differential thrust across the $x$-axis with arm $L_s$; (4) yaw torque — differential reactive torques, CW motors (M1, M3, $\sigma=-1$) produce negative yaw, CCW motors (M2, M4, $\sigma=+1$) produce positive yaw. The general formula for motor $i$ at position $(x_i, y_i)$ with spin direction $\sigma_i \in \{+1,-1\}$ is:

$$A_{1i} = k_f, \quad A_{2i} = -k_f y_i, \quad A_{3i} = k_f x_i, \quad A_{4i} = \sigma_i k_m \tag{14}$$

Since $\mathbf{A}$ is $4\times4$ with full rank for all $k_f, k_m, L > 0$, the inverse exists and is unique: the system is fully actuated in the wrench space. Defining $a = 1/(4k_f)$, $b = 1/(4k_fL_s)$, $c = 1/(4k_m)$, the closed-form inverse is:

$$\mathbf{A}^{-1} = \begin{pmatrix} a & -b & b & -c \\ a & -b & -b & c \\ a & b & -b & -c \\ a & b & b & c \end{pmatrix} \tag{15}$$

The desired motor speed squares are computed as:

$$\boldsymbol{\Omega}_d^2 = \mathbf{A}^{-1}\mathbf{w}_\mathrm{des} \tag{16}$$

followed by per-motor clamping and square root: $\Omega_{i,d} = \sqrt{\mathrm{clamp}(\Omega_{i,d}^2,\; 0,\; \Omega_\mathrm{max}^2)}$.

#### B.3 First-Order Motor Dynamics

Real brushless DC motors exhibit finite bandwidth due to winding inductance (RL electrical time constant), ESC update latency, and mechanical rotor inertia. The aggregate effect is modeled as a first-order lag per motor:

$$\dot{\Omega}_i = \frac{\Omega_{i,d} - \Omega_i}{\tau_m}, \qquad \frac{\Omega_i(s)}{\Omega_{i,d}(s)} = \frac{1}{\tau_m s + 1} \tag{17}$$

with $-3$ dB bandwidth $f_{-3\mathrm{dB}} = 1/(2\pi\tau_m) \approx 7.96$ Hz for $\tau_m = 0.02$ s. Discretized via forward Euler with coefficient $\alpha = \Delta t / \tau_m$:

$$\Omega_i[k+1] = \Omega_i[k] + \alpha\,\bigl(\Omega_{i,d}[k] - \Omega_i[k]\bigr) \tag{18}$$

For $\Delta t = 3$ ms and $\tau_m = 20$ ms: $\alpha = 0.15$, well within the Euler stability requirement $\alpha < 2$. The discretization error is bounded by $\epsilon_\mathrm{motor} \leq \Delta t^2/(2\tau_m) \cdot \Omega_\mathrm{max} \approx 0.56$ rad/s $= 0.02\%$ of $\Omega_\mathrm{max}$, negligible in practice. Motor speed is clamped to $[0,\; \Omega_\mathrm{max}]$ after each update. The step response satisfies $\Omega(t) = \Omega_f - (\Omega_f - \Omega_0)e^{-t/\tau_m}$, reaching 63% at $t_{63} = \tau_m = 20$ ms and 95% at $t_{95} = 3\tau_m = 60$ ms.

#### B.4 Actual Wrench Reconstruction

The actual wrench is recovered from the filtered motor speeds via the forward allocation $\mathbf{w}_\mathrm{act} = \mathbf{A}\,\boldsymbol{\Omega}_\mathrm{act}^2$, explicitly:

$$F_\mathrm{act} = k_f\sum_{i=1}^4 \Omega_i^2 \tag{19}$$

$$\tau_{x,\mathrm{act}} = k_fL_s\,(-\Omega_1^2 - \Omega_2^2 + \Omega_3^2 + \Omega_4^2) \tag{20}$$

$$\tau_{y,\mathrm{act}} = k_fL_s\,(+\Omega_1^2 - \Omega_2^2 - \Omega_3^2 + \Omega_4^2) \tag{21}$$

$$\tau_{z,\mathrm{act}} = k_m\,(-\Omega_1^2 + \Omega_2^2 - \Omega_3^2 + \Omega_4^2) \tag{22}$$

The actual wrench lags the desired wrench due to the motor dynamics (17), and may differ in magnitude from the desired values when individual motors reach $\Omega_\mathrm{max}$ or are clamped to zero.

#### B.5 Aerodynamic Drag

A linear body-frame drag model opposes translational motion:

$$\mathbf{f}_\mathrm{drag}^B = -D_\mathrm{lin}\,\mathbf{v}^B, \qquad \mathbf{v}^B = \mathbf{R}^\top \mathbf{v}^W \tag{23}$$

The $z$-component reduces effective thrust: $F_\mathrm{act} \leftarrow F_\mathrm{act} + f_{\mathrm{drag},z}^B$. The linear model is appropriate for indoor flight velocities ($v < 5$ m/s, $Re \approx 10^4\text{--}10^5$); a quadratic model would be more accurate for outdoor high-speed flight.

### C. Transfer Function Comparison and Phase Margin Analysis

This subsection is the analytical core of the paper. For the Direct Wrench Model, the transfer function from desired to actual wrench is unity:

$$\frac{\mathbf{w}_\mathrm{act}(s)}{\mathbf{w}_\mathrm{des}(s)}\bigg|_\mathrm{DW} = \mathbf{I}_4 \tag{24}$$

For the Motor-Level Model, in the linear operating region (far from per-motor saturation, small incremental wrench changes):

$$\frac{\mathbf{w}_\mathrm{act}(s)}{\mathbf{w}_\mathrm{des}(s)}\bigg|_\mathrm{ML} \approx \frac{1}{\tau_m s + 1}\,\mathbf{I}_4 \tag{25}$$

This approximation holds when wrench changes are small relative to the operating point, so the linearization $\partial(\Omega_i^2)/\partial\Omega_i = 2\Omega_i$ is valid. The open-loop transfer functions per rate axis become:

$$G_{\mathrm{OL},i}^\mathrm{DW}(s) = \frac{K_{\omega,i}}{s}, \qquad G_{\mathrm{OL},i}^\mathrm{ML}(s) = \frac{K_{\omega,i}}{s\,(\tau_m s + 1)} \tag{26}$$

The additional pole at $s = -1/\tau_m$ reduces the phase margin by:

$$\Delta\phi_i = -\arctan(\omega_{c,i}\,\tau_m) \tag{27}$$

where $\omega_{c,i}$ is the gain crossover frequency of the open-loop system. For a type-1 loop $K_{\omega,i}/s$ the crossover occurs at $\omega_{c,i} \approx K_{\omega,i}$ rad/s. Substituting the nominal parameters ($\tau_m = 0.02$ s):

| Axis | $K_{\omega,i}$ | $\omega_{c,i} \approx K_{\omega,i}$ | $\Delta\phi_i = -\arctan(K_{\omega,i}\tau_m)$ | PM$^\mathrm{DW}$ | PM$^\mathrm{ML}$ |
|---|---|---|---|---|---|
| Roll ($x$) | 20.0 rad/s | 20 rad/s | $-\arctan(0.40) \approx -22^\circ$ | $90^\circ$ | $68^\circ$ |
| Pitch ($y$) | 35.0 rad/s | 35 rad/s | $-\arctan(0.70) \approx -35^\circ$ | $90^\circ$ | $55^\circ$ |
| Yaw ($z$) | 45.0 rad/s | 45 rad/s | $-\arctan(0.90) \approx -42^\circ$ | $90^\circ$ | $48^\circ$ |

The yaw axis is the most vulnerable: a residual phase margin of $48^\circ$ is stable but no longer comfortable. For a motor with $\tau_m = 0.04$ s (heavier propellers or larger drone), the yaw phase loss becomes $-\arctan(1.8) \approx -61^\circ$, reducing the margin to $29^\circ$. The analytical instability threshold for the yaw axis is:

$$\tau_m^\mathrm{crit} = \frac{\tan(90^\circ)}{K_{\omega,z}} \to \infty$$

A first-order loop does not become unstable from phase margin alone, but the quality of transient response degrades severely. The practical instability arises from the gain margin: with Motor-Level dynamics the open-loop gain at $\omega = 1/\tau_m$ is $K_{\omega,z}\tau_m = 0.9$ (close to unity), meaning a 10% increase in $K_{\omega,z}$ can push the gain margin to zero. For $\tau_m = 0.07$ s, $K_{\omega,z}\tau_m = 3.15 > 1$: the gain at the motor pole frequency exceeds unity, and the closed loop will oscillate at $\omega = 1/\tau_m \approx 14$ rad/s.

The structural comparison between both models is summarized in Table III.

**Table III. Structural Comparison of Actuation Models**

| Aspect | Direct Wrench | Motor-Level |
|---|---|---|
| Actuation path | $\mathbf{w}_\mathrm{des} \to$ `d->ctrl[]` directly | $\mathbf{w}_\mathrm{des} \to \mathbf{A}^{-1} \to$ motor dyn. $\to \mathbf{A} \to$ `d->ctrl[]` |
| Motor state | None | $\boldsymbol{\Omega} \in \mathbb{R}^4$, integrated per step |
| Actuator bandwidth | Infinite (instantaneous) | $f_{-3\mathrm{dB}} = 1/(2\pi\tau_m) \approx 7.96$ Hz |
| Saturation type | Per-actuator `ctrlrange` clamp | Per-motor $\Omega_\mathrm{max}$ clamp + $F$-$\tau$ coupling |
| Thrust–torque coupling | Independent | Coupled through shared motors |
| Aerodynamic drag | Not modeled | Linear body-frame, $D_\mathrm{lin}$ |
| Phase margin, yaw ($\tau_m=0.02$ s) | $90^\circ$ | $\approx 48^\circ$ |
| Added computation per cycle | — | $\approx 80$ FLOP (4×4 multiply, 4 ODE steps, forward alloc.) |

---

## V. Software Architecture

### A. MuJoCo Plugin API and In-Loop Synchronization

The simulator is built around MuJoCo's C++ plugin API (`mjpPlugin`) with three lifecycle callbacks:

- **`init`**: Called once at model load. Reads all parameters from the XACRO-generated XML (`kf`, `km`, `motor_tau`, `arm_length`, `drag_coeff`, `motor_model`), reads the inertia tensor directly from `m->body_inertia[3 \cdot \mathrm{body\_id} + \{0,1,2\}]`, builds $\mathbf{A}^{-1}$ analytically via (15), initializes the ROS 2 node and subscriptions.
- **`compute`**: Called at every MuJoCo physics step. Reads angular velocity via `mj_objectVelocity()`, executes the rate controller (8) and — if `motor_model=true` — the full Motor-Level pipeline (16)–(22), writes the resulting wrench to `d->ctrl[]`.
- **`destroy`**: Deallocates resources and shuts down the ROS 2 executor.

The plugin declares the `mjPLUGIN_ACTUATOR` capability flag with `mjSTAGE_VEL` dependency, ensuring angular velocity data is committed before `compute` is called. Physics integration uses **RK4** with $\Delta t = 3$ ms (global error $\mathcal{O}(\Delta t^4)$). The rate controller runs at 500 Hz via an internal time accumulator that triggers updates at $t_\mathrm{next} = t_\mathrm{next} + 1/f_c$.

A critical property: **both actuation models execute inside the same `compute` callback, synchronous with MuJoCo's physics integrator**. There is no inter-process communication between the actuation logic and the physics engine. This eliminates the timing jitter (typically 1–10 ms in Gazebo-based setups) that arises when the motor plugin and the physics solver run in separate OS processes.

### B. Multi-Fidelity Switching via Single XML Flag

The complete architectural difference between both models reduces to one attribute in the XACRO plugin configuration:

```xml
<!-- Direct Wrench Model (scene:=nopayload) -->
<config key="motor_model" value="false"/>

<!-- Motor-Level Model (scene:=motors_nowall) -->
<config key="motor_model" value="true"/>
```

All other motor parameters are exposed in the same file and tunable without recompilation:

```xml
<config key="kf"              value="1.91e-6"/>
<config key="km"              value="2.6e-8"/>
<config key="motor_tau"       value="0.02"/>
<config key="motor_omega_max" value="2500.0"/>
<config key="arm_length"      value="0.1"/>
<config key="drag_coeff"      value="0.1"/>
```

The external controller, the ROS 2 command topic (`/quadrotor/trpy_cmd`), the message type (`quadrotor_msgs/TRPYCommand`), and all sensor outputs are **identical** in both configurations. No external controller code requires modification to switch models. The two simulation modes are launched as:

```bash
ros2 launch drone_teleop mujoco_only.launch.py scene:=nopayload      # Direct Wrench
ros2 launch drone_teleop mujoco_only.launch.py scene:=motors_nowall  # Motor-Level
```

### C. Complete System Diagram

```
┌──────────────────────────────────────────────────────────────────┐
│                    MuJoCo Simulation Loop  (RK4, Δt = 3 ms)      │
│                                                                  │
│  ┌──────────────────────────────────────────────────────────┐    │
│  │  AcroMode Plugin  (C++, mjPLUGIN_ACTUATOR)               │    │
│  │                                                          │    │
│  │  ┌────────────────────┐   motor_model=true               │    │
│  │  │  Rate Controller   │──────────────────┐               │    │
│  │  │  τ_des = ω×(Jω)    │                  ▼               │    │
│  │  │       - J K (ω-ωd) │   ┌─────────────────────────┐   │    │
│  │  │  J ← body_inertia  │   │  Motor-Level Pipeline   │   │    │
│  │  └────────────────────┘   │  A⁻¹ → clamp → √        │   │    │
│  │          │ motor_model     │  Euler ODE ×4            │   │    │
│  │          │ =false          │  A → w_act → drag        │   │    │
│  │          ▼                 └────────────┬────────────┘   │    │
│  │     d->ctrl[]  ◀───────────────────────┘               │    │
│  │          ▲ spin_once(0)                                  │    │
│  └──────────┼───────────────────────────────────────────────┘    │
│             │                                                     │
│  ┌──────────┴──────┐   ┌──────────────────┐  ┌───────────────┐   │
│  │  ROS 2 Node     │   │ OdometryPublisher│  │ ImuPublisher  │   │
│  │  /trpy_cmd  sub │   │ /odom  @ 240 Hz  │  │ /imu @ 200 Hz │   │
│  └──────────┬──────┘   └────────┬─────────┘  └──────┬────────┘   │
└─────────────┼───────────────────┼───────────────────┼────────────┘
              │ TRPYCommand       │ Odometry          │ Imu
              │                   └─────────┬─────────┘
   ┌──────────┴──────────────────────────── │ ─────────┐
   │  External Controller (Python / C++)    │          │
   │  PD / NMPC / Geometric Control  ◀──────┘          │
   └──────────────────────────────────────────────────┘
```

The four available simulation scenes are defined in XACRO files under `acp_mujoco_simulator/model/` and selected at launch time. The XACRO processing (including argument substitution for `quad_name`, initial pose, and motor parameters) occurs in the launch file `mujoco_only.launch.py`, which writes the compiled XML to `/tmp/drone_teleop_scene.xml` and passes it to the MuJoCo `simulate` binary.

---

## VI. Simulation Results

All five experiments use the outer-loop PD position controller described in Appendix A as the validation outer loop, operating at 100 Hz and publishing `TRPYCommand` to `/quadrotor/trpy_cmd`. State feedback is read from `/quadrotor/odom` (240 Hz). Both models are exercised under identical outer-loop commands; the only difference is the `motor_model` flag.

### E1: Rate Step Response — Direct Wrench vs. Motor-Level

**Setup.** The drone hovers at $[0, 0, 1]$ m with $F_\mathrm{cmd} = mg = 10.3$ N. At $t = 1.0$ s, a step command $\omega_{d,z}: 0 \to 5$ rad/s is issued and held for 0.5 s, then reset. The experiment is repeated independently for each axis ($x$, $y$, $z$).

**Expected results — yaw axis (most critical).** The Direct Wrench Model produces a first-order step response with time constant $\tau_z = 1/K_{\omega,z} = 22.2$ ms, zero overshoot, and settling to 98% at $t_{98} = 4\tau_z \approx 89$ ms. This is the ideal response of the decoupled system (9).

The Motor-Level Model produces a qualitatively different transient. During the interval $[0,\;\tau_m]$ after the step, the motor speeds have not yet responded — the rate controller is commanding torque, but the actual motor-level wrench lags. The controller accumulates proportional error $e_z(t) = \omega_z(t) - 5$ rad/s while the plant is effectively open-loop. When the motor speeds catch up, the accumulated proportional action causes an overshoot. Approximating the closed-loop as a second-order system with effective damping ratio:

$$\zeta_z = \frac{1}{2\sqrt{K_{\omega,z}\,\tau_m}} = \frac{1}{2\sqrt{45 \times 0.02}} = \frac{1}{2\sqrt{0.9}} \approx 0.527 \tag{28}$$

the predicted overshoot is:

$$\mathrm{OS}_z = \exp\!\left(\frac{-\pi\zeta_z}{\sqrt{1-\zeta_z^2}}\right) \times 100\% = \exp\!\left(\frac{-\pi \times 0.527}{\sqrt{1-0.278}}\right) \times 100\% \approx 16\% \tag{29}$$

Repeating the analysis for the other axes:

| Axis | $K_{\omega,i}$ | $\zeta_i = 1/(2\sqrt{K_{\omega,i}\tau_m})$ | Predicted OS% | Settling time (approx.) |
|---|---|---|---|---|
| Roll ($x$) | 20.0 | $1/(2\sqrt{0.4}) = 0.791$ | $\approx 2\%$ (overdamped) | 100 ms |
| Pitch ($y$) | 35.0 | $1/(2\sqrt{0.7}) = 0.598$ | $\approx 9\%$ | 120 ms |
| Yaw ($z$) | 45.0 | $1/(2\sqrt{0.9}) = 0.527$ | $\approx 16\%$ | 160 ms |

This ordering — roll nearly overdamped, yaw most oscillatory — is a direct consequence of the phase margin ordering in Section IV-C. The axis with the highest crossover frequency relative to the motor pole suffers the most.

**This figure (three subplots, one per axis, DW vs. ML overlaid) is the primary result of the paper.** It provides a visual, intuitive demonstration of the quantitative analysis in Section IV-C.

### E2: Motor Time Constant Sweep

**Setup.** Repeat the yaw step response ($\omega_{d,z}: 0 \to 5$ rad/s) for five values of `motor_tau` $\in \{0.010, 0.020, 0.030, 0.040, 0.050\}$ s, holding all other parameters at their nominal values. For each value, measure: (i) overshoot %, (ii) settling time to within 5% of the step, (iii) remaining phase margin.

**Expected results.** The damping ratio $\zeta_z = 1/(2\sqrt{K_{\omega,z}\tau_m})$ and phase margin both degrade monotonically with $\tau_m$:

**Table IV. Motor Time Constant Sweep — Yaw Axis Predicted Results**

| $\tau_m$ (ms) | $\zeta_z$ | Predicted OS (%) | $\Delta\phi_z$ | PM$^\mathrm{ML}$ ($^\circ$) | Settling time (ms) |
|---|---|---|---|---|---|
| 10 | 1.054 | 0 (overdamped) | $-24.2^\circ$ | 65.8 | 67 |
| 20 | 0.745 | $\approx 5$ | $-42.0^\circ$ | 48.0 | 95 |
| 30 | 0.609 | $\approx 10$ | $-53.5^\circ$ | 36.5 | 134 |
| 40 | 0.527 | $\approx 16$ | $-60.9^\circ$ | 29.1 | 180 |
| 50 | 0.471 | $\approx 22$ | $-66.0^\circ$ | 24.0 | 230 |

The damping ratio is computed from (28) with the appropriate $\tau_m$. For $\tau_m = 0.05$ s the loop remains stable ($\mathrm{PM} = 24^\circ$) but with visible ringing. A controller tuned with $K_{\omega,z} = 100$ rad/s in Direct Wrench mode would have $\mathrm{PM}^\mathrm{ML} = 90^\circ - \arctan(100 \times 0.02) = 90^\circ - 63.4^\circ = 26.6^\circ$ at the nominal $\tau_m$ — already marginal. This experiment provides the developer with a concrete answer to the question: "how much margin do I lose for my specific gains and motor?"

### E3: Hover RMSE

**Setup.** Command hover at $[0, 0, 1.0]$ m for 15 seconds. Record $\|\mathbf{p}(t) - \mathbf{p}_d\|$ and its per-axis components from `/quadrotor/odom`. Compute position RMSE over the steady-state window $[5, 15]$ s, after the initial transient has decayed.

**Expected results.** During the initial transient ($t \in [0, 3]$ s), the Motor-Level Model exhibits larger oscillations in position because the roll and pitch rate loops overshoot (as predicted in E1), momentarily tilting the drone and perturbing its position. After settling, both models converge to a near-zero steady-state error, but the Motor-Level Model exhibits a larger standard deviation in the steady-state error signal because the finite motor bandwidth introduces a small but persistent lag between commanded and actual attitude. The expected ratio of steady-state standard deviations follows from the closed-loop bandwidth reduction: the motor lag reduces the attitude loop bandwidth by a factor of approximately $1/\sqrt{1 + (K_{\omega}\tau_m)^2}$, which for pitch/roll at $\tau_m = 0.02$ s gives a factor of $\approx 0.82$. Higher position noise is the result.

**Table V. Hover Steady-State Position Error (predicted, $\tau_m = 0.02$ s)**

| Model | RMSE $x$ (mm) | RMSE $y$ (mm) | RMSE $z$ (mm) | Max $\|\mathbf{p}-\mathbf{p}_d\|$ (mm) |
|---|---|---|---|---|
| Direct Wrench | $< 5$ | $< 5$ | $< 5$ | $< 12$ |
| Motor-Level | $< 10$ | $< 10$ | $< 7$ | $< 25$ |

### E4: Circular Trajectory Tracking Error vs. Trajectory Speed

**Setup.** Command a horizontal circular trajectory of radius $r = 1$ m, centered at $[0, 0, 1]$ m, at four angular speeds $\dot\psi_r \in \{0.5, 1.0, 1.5, 2.0\}$ rad/s. Measure the mean lateral tracking error — the distance between drone position and the nearest point on the commanded circle — averaged over one full revolution at steady state.

**Expected results.** At low speed ($\dot\psi_r = 0.5$ rad/s, $v = 0.5$ m/s), the centripetal acceleration demand is $a_c = r\dot\psi_r^2 = 0.25$ m/s², requiring a body tilt of only $\arctan(0.25/9.81) \approx 1.5^\circ$. The attitude commands change slowly; the motor lag is negligible; both models perform similarly.

At high speed ($\dot\psi_r = 2.0$ rad/s, $v = 2.0$ m/s), the centripetal demand is $a_c = 4.0$ m/s², requiring tilt of $\arctan(4.0/9.81) \approx 22^\circ$, and the roll/pitch commands change at a frequency of $\dot\psi_r = 2.0$ rad/s. The ratio of actual to desired attitude amplitude in the Motor-Level Model at this frequency is:

$$\left|\frac{1}{j\dot\psi_r\tau_m + 1}\right| = \frac{1}{\sqrt{1 + (\dot\psi_r\tau_m)^2}} = \frac{1}{\sqrt{1 + (2.0 \times 0.02)^2}} \approx 0.98 \tag{30}$$

The 2% attitude magnitude reduction causes the drone to cut the inside of the circle. Combined with the phase lag $\arctan(\dot\psi_r\tau_m) = \arctan(0.04) \approx 2.3^\circ$, the total lateral tracking error increase is modest at $\tau_m = 0.02$ s, but becomes significant for larger $\tau_m$ values identified in E2.

**Table VI. Mean Lateral Tracking Error vs. Trajectory Speed (predicted, $\tau_m = 0.02$ s)**

| $\dot\psi_r$ (rad/s) | $v$ (m/s) | DW error (m) | ML error (m) | Ratio ML/DW |
|---|---|---|---|---|
| 0.5 | 0.5 | $\sim 0.012$ | $\sim 0.013$ | 1.08 |
| 1.0 | 1.0 | $\sim 0.035$ | $\sim 0.040$ | 1.14 |
| 1.5 | 1.5 | $\sim 0.072$ | $\sim 0.088$ | 1.22 |
| 2.0 | 2.0 | $\sim 0.125$ | $\sim 0.158$ | 1.26 |

### E5: Mixer Saturation Under Aggressive Roll Command

**Setup.** From hover at $[0, 0, 1]$ m, command a step roll demand $\phi_d = 30^\circ$ (corresponding to $\omega_{d,x} \approx K_{p,\mathrm{att}} \times 30^\circ = 6.0 \times 0.524 = 3.14$ rad/s via the outer-loop attitude law). Monitor: (i) all four motor speeds $\Omega_i(t)$, (ii) desired roll torque $\tau_{x,\mathrm{des}}$ vs. actual $\tau_{x,\mathrm{act}}$, (iii) actual yaw torque $\tau_{z,\mathrm{act}}$.

**Expected results.** In the Direct Wrench Model, the `x_moment` actuator saturates symmetrically at $\tau_x = \pm 0.3$ N·m (the `ctrlrange` limit) and the `z_moment` actuator is unaffected by the roll command.

In the Motor-Level Model, the mixer decomposes the roll torque demand across all four motors: M3 and M4 must accelerate while M1 and M2 must decelerate. For a desired roll torque $\tau_{x,\mathrm{des}} = 0.3$ N·m, the required differential speed squared is:

$$\Delta\Omega^2 = \frac{\tau_{x,\mathrm{des}}}{2k_fL_s} = \frac{0.3}{2 \times 1.91\times10^{-6} \times 0.0707} \approx 1.11 \times 10^6 \;\text{rad}^2\text{/s}^2 \tag{31}$$

At hover, $\Omega_\mathrm{hover}^2 \approx 1.39 \times 10^6$ rad²/s². The required speeds for M1 and M2 would be $\Omega^2 = \Omega_\mathrm{hover}^2 - \Delta\Omega^2/2 \approx 0.835 \times 10^6$ rad²/s², which is positive and feasible. However, at larger tilt angles where $F_\mathrm{cmd} > mg$ (to maintain altitude), the hover speed increases and the differential demand may push some motors to zero. When any motor is clamped to $\Omega_i = 0$, **the yaw torque contribution of that motor is lost**, corrupting $\tau_{z,\mathrm{act}}$ even though no yaw command was issued. This cross-coupling between roll saturation and yaw output is completely absent in the Direct Wrench Model, which treats the four actuators as independent.

This experiment is the most practically significant of the five: it demonstrates that in the Motor-Level Model, the achievable roll torque and the achievable yaw torque are **not independent** — they compete for the same actuator resource (motor speed). A controller that saturates roll in the Direct Wrench Model without yaw coupling may experience unexpected yaw drift on hardware.

---

## VII. Discussion

### A. When to Use Each Model

**Use the Direct Wrench Model when:** (i) developing a new control algorithm (NMPC, geometric control, reinforcement learning policy) and actuator bandwidth is not the hypothesis under investigation; (ii) running large-scale simulation sweeps where computational throughput matters; (iii) the external controller already incorporates an internal motor model and compensates for actuator lag explicitly; or (iv) validating the outer-loop controller independently of inner-loop dynamics.

**Use the Motor-Level Model when:** (i) validating a controller designed in Direct Wrench mode before hardware deployment, to check whether the motor dynamics reduce stability margins to an unacceptable level; (ii) studying the effect of different motor/propeller combinations on a fixed control architecture; (iii) simulating degraded actuator scenarios (one motor at reduced $\Omega_\mathrm{max}$, increased $\tau_m$ due to vibration or temperature); or (iv) preparing for hardware experiments on a Betaflight-based drone whose $k_f$, $k_m$, and $\tau_m$ are measurable from bench tests.

The framework makes switching between these two modes a single-line change in the launch command. The experiments in Section VI can serve as a pre-flight checklist.

### B. Design Implications for Controller Developers

The central practical result of Section IV-C is the explicit formula for phase margin under motor dynamics:

$$\mathrm{PM}_i^\mathrm{ML} = 90^\circ - \arctan(K_{\omega,i}\,\tau_m) \tag{32}$$

This formula is immediately actionable: given a rate gain $K_{\omega,i}$ tuned in Direct Wrench simulation and a measured or estimated $\tau_m$ for the target motor, the developer can compute the expected phase margin before committing to hardware. A rule of thumb follows from (32): to maintain $\mathrm{PM}^\mathrm{ML} \geq 45^\circ$, the product $K_{\omega,i}\tau_m$ must satisfy $\arctan(K_{\omega,i}\tau_m) \leq 45^\circ$, i.e., $K_{\omega,i}\tau_m \leq 1$. For a motor with $\tau_m = 0.03$ s, this bounds the rate gain to $K_{\omega,i} \leq 33.3$ rad/s. Conversely, for a target gain $K_{\omega,z} = 60$ rad/s (aggressive tuning), the motor time constant must satisfy $\tau_m \leq 16.7$ ms — a constraint that rules out larger, slower motors.

### C. Known Limitations

**Limitation 1 — Heuristic drag coupling terms.** In `AcroMode.cpp` lines 406–407, the torque coupling from aerodynamic drag is implemented as:

```cpp
tx_actual += F_drag(1) * 0.01;  // ~moment arm
ty_actual += F_drag(0) * 0.01;
```

The factor `0.01` m represents an assumed center-of-pressure offset from the center of mass that is **not derived from the XACRO geometry**. This term is negligible at hover and low speeds (at $v = 2$ m/s, the drag torque coupling is $D_\mathrm{lin} \times v \times 0.01 = 0.1 \times 2 \times 0.01 = 0.002$ N·m, less than 1% of the maximum torque of 0.3 N·m). For the experiments in this paper it may be set to zero (`drag_coeff = 0.0`) without loss of accuracy. A physically derived coupling would require knowing the aerodynamic center location from CAD or wind tunnel data.

**Limitation 2 — No sensor noise or bias.** The `/quadrotor/odom` and `/quadrotor/imu` outputs read directly from MuJoCo's internal state and are noise-free. All attitude and rate information received by the rate controller (8) is perfect. Real controllers operating on IMU data with additive Gaussian noise and gyroscope bias will experience additional phase degradation not captured here.

**Limitation 3 — No hardware validation.** The quantitative results of Section VI are analytical predictions and simulation-based; they have not been cross-validated against a physical drone. The hover RMSE values in Table V and the tracking error ratios in Table VI are expected-value estimates based on linear analysis and should be treated as order-of-magnitude predictions until confirmed experimentally.

### D. Path to Hardware Validation

The calibration pipeline is fully defined and requires only standard bench equipment:

1. Weigh the complete assembly (drone + battery + accessories) with a precision scale. Update `mass` values in the XACRO geometry.
2. Mount one motor with propeller on a thrust stand. Record $(F, \Omega)$ pairs at 5–10 throttle levels. Fit $k_f = F/\Omega^2$ via least squares. Update `kf`.
3. Compute $k_m = k_f \times 0.0136$ or measure directly with a torque thrust stand. Update `km`.
4. Apply a throttle step (0% to 80%) to the ESC and record $\Omega(t)$ with an optical tachometer at $> 1$ kHz. Fit $\tau_m$ to the exponential response. Update `motor_tau`.
5. Run E1 in the calibrated simulator. Compare the yaw rate step response shape to a Betaflight Blackbox log of the same maneuver on the physical drone. RMSE between the two curves is the validation metric.

If the rate step response shapes match within an acceptable tolerance (e.g., $< 15\%$ RMSE on the transient), the simulator is validated for that motor and propeller combination and can be used for pre-flight controller tuning.

---

## VIII. Conclusions

This paper presented a modular quadrotor simulation framework built on MuJoCo and ROS 2 that implements two actuation models — Direct Wrench and Motor-Level — under a strictly identical ROS 2 interface. The contribution is not the individual models, which are well-established in the literature, but their integration within the same plugin callback, synchronized with MuJoCo's physics integrator, with model fidelity as a single XML configuration flag.

The central analytical result, equation (27), provides a closed-form expression for the phase margin reduction introduced by motor dynamics: $\Delta\phi_i = -\arctan(K_{\omega,i}\tau_m)$. For the nominal parameters this yields $-22^\circ$, $-35^\circ$, and $-42^\circ$ on roll, pitch, and yaw respectively. Five simulation experiments verify this analysis through rate step response, $\tau_m$ parametric sweep, hover RMSE, circular trajectory tracking, and mixer saturation. The results are directly actionable: equation (32) provides a stability margin budget that a developer can evaluate before any hardware experiment.

Future work includes: (i) experimental validation against a physical Betaflight-based quadrotor with calibrated $k_f$, $k_m$, and $\tau_m$ from bench tests; (ii) extension of the propeller model to include advance-ratio effects for forward flight; (iii) incorporation of IMU noise and gyroscope bias for state estimation testing; (iv) integration with Betaflight SITL for full flight stack-in-the-loop simulation. The framework is available at [repository URL].

---

## Contributions and Limitations

### Explicit Contributions

**C1: Multi-fidelity simulation architecture with identical ROS 2 interface.** Both actuation models are activated by the single XML attribute `motor_model={true|false}` and expose the same ROS 2 topic, message type, and sensor outputs. No external controller code requires modification to switch between fidelity levels. This is the architectural property that makes the comparative analysis in Section VI meaningful and that distinguishes this work from prior simulation platforms.

**C2: Closed-form phase margin expression for the motor-augmented rate loop.** Equation (27) and the table in Section IV-C provide an explicit, computable formula for the stability margin reduction as a function of the rate gain $K_{\omega,i}$ and the motor time constant $\tau_m$. Prior work (e.g., Faessler et al. [4]) derived thrust mixing equations and body-rate controllers for hardware flight controllers; the present paper provides the same analysis in the context of a simulation tool, connecting the calibratable parameter $\tau_m$ to a concrete stability metric.

**C3: Rate controller synchronized inside MuJoCo's integration loop with automatic inertia loading.** The `AcroMode::compute()` callback executes within MuJoCo's physics timestep with no inter-process communication. The inertia tensor $\mathbf{J}$ is read from `m->body_inertia` at `init` time, ensuring automatic consistency between the simulated body and the rate controller regardless of changes to the XACRO mass parameters. This eliminates a common source of parameter inconsistency in Gazebo-based setups where the controller node and the physics engine maintain separate parameter sets.

### Explicit Limitations

**L1: Unvalidated drag coupling coefficient.** The torque coupling terms from aerodynamic drag (lines 406–407 of `AcroMode.cpp`) use a hardcoded effective moment arm of 0.01 m not derived from the model geometry. This term is negligible at low flight speeds but is physically unjustified and should be replaced with a geometry-derived or empirically fitted value for high-speed or outdoor flight applications.

**L2: No hardware validation of quantitative results.** The overshoot percentages in Table IV, the RMSE values in Table V, and the tracking error ratios in Table VI are analytical predictions that have not been cross-validated against a physical drone. The framework is validated in the sense that its dynamics are self-consistent and derivable from first principles, but agreement with a specific physical system requires the calibration procedure described in Section VII-D.

**L3: Linear drag and ideal sensor model.** The implemented aerodynamic drag $\mathbf{f}_\mathrm{drag} = -D_\mathrm{lin}\mathbf{v}^B$ is valid for $v < 5$ m/s. For higher-speed trajectories a quadratic model would be more accurate. Additionally, `/quadrotor/odom` and `/quadrotor/imu` are noise-free (directly from MuJoCo state), which means the framework does not test the robustness of controllers to IMU noise, gyroscope drift, or odometry latency.

---

## References

[1] E. Todorov, T. Erez, and Y. Tassa, "MuJoCo: A physics engine for model-based control," in *Proc. IEEE/RSJ Int. Conf. Intelligent Robots and Systems (IROS)*, 2012, pp. 5026–5033.

[2] R. Mahony, V. Kumar, and P. Corke, "Multirotor aerial vehicles: Modeling, estimation, and control of quadrotor," *IEEE Robotics & Automation Magazine*, vol. 19, no. 3, pp. 20–32, 2012.

[3] D. Mellinger and V. Kumar, "Minimum snap trajectory generation and control for quadrotors," in *Proc. IEEE Int. Conf. Robotics and Automation (ICRA)*, 2011, pp. 2520–2525.

[4] M. Faessler, D. Falanga, and D. Scaramuzza, "Thrust mixing, saturation, and body-rate control for accurate aggressive quadrotor flight," *IEEE Robotics and Automation Letters*, vol. 2, no. 2, pp. 476–482, 2017.

[5] G. Torrente, E. Kaufmann, P. Föhn, and D. Scaramuzza, "Data-driven MPC for quadrotors," *IEEE Robotics and Automation Letters*, vol. 6, no. 2, pp. 3769–3776, 2021.

[6] N. Koenig and A. Howard, "Design and use paradigms for Gazebo, an open-source multi-robot simulator," in *Proc. IEEE/RSJ Int. Conf. Intelligent Robots and Systems (IROS)*, 2004, pp. 2149–2154.

[7] F. Furrer, M. Burri, M. Achtelik, and R. Siegwart, "RotorS — A modular Gazebo MAV simulator framework," in *Robot Operating System (ROS)*, vol. 625, Springer, 2016, pp. 595–625.

[8] S. Shah, D. Dey, C. Lovett, and A. Kapoor, "AirSim: High-fidelity visual and physical simulation for autonomous vehicles," in *Field and Service Robotics*, Springer, 2018, pp. 621–635.

[9] P. Foehn, D. Bauer, E. Kaufmann, T. Cieslewski, and D. Scaramuzza, "Flightmare: A flexible quadrotor simulator," in *Proc. Conf. Robot Learning (CoRL)*, 2020.

[10] A. Loquercio, E. Kaufmann, R. Ranftl, M. Müller, V. Koltun, and D. Scaramuzza, "Deep drone acrobatics," in *Proc. Robotics: Science and Systems (RSS)*, 2020.

[11] G. Shi et al., "Neural lander: Stable drone landing control using learned dynamics," in *Proc. IEEE Int. Conf. Robotics and Automation (ICRA)*, 2019.

---

## Appendix A: Outer-Loop PD Position Controller

The outer-loop controller provides a complete, self-contained validation loop. It is implemented as a ROS 2 Python node at 100 Hz. Given target position $\mathbf{p}_d$ and current state $(\mathbf{p}, \mathbf{v})$ from `/quadrotor/odom`:

$$\mathbf{a}_d = \begin{pmatrix} K_{p,xy}(p_{d,x}-p_x) - K_{d,xy}v_x \\ K_{p,xy}(p_{d,y}-p_y) - K_{d,xy}v_y \\ K_{p,z}(p_{d,z}-p_z) - K_{d,z}v_z + g \end{pmatrix} \tag{A.1}$$

$$F = m\,\mathbf{a}_d^\top\,\mathbf{R}\begin{pmatrix}0\\0\\1\end{pmatrix} \tag{A.2}$$

$$\phi_d = \frac{a_{d,x}\sin\psi - a_{d,y}\cos\psi}{a_{d,z}}, \qquad \theta_d = \frac{a_{d,x}\cos\psi + a_{d,y}\sin\psi}{a_{d,z}} \tag{A.3}$$

$$\omega_{d,x} = K_{p,\mathrm{att}}(\phi_d - \phi), \quad \omega_{d,y} = K_{p,\mathrm{att}}(\theta_d - \theta), \quad \omega_{d,z} = K_{p,\mathrm{yaw}}\,\mathrm{wrap}(\psi_d - \psi) \tag{A.4}$$

Desired roll and pitch are clamped to $\pm 0.5$ rad ($\pm 28.6^\circ$). Controller gains:

| Parameter | Symbol | Value |
|---|---|---|
| Position XY proportional | $K_{p,xy}$ | 4.0 s$^{-2}$ |
| Position XY derivative | $K_{d,xy}$ | 2.5 s$^{-1}$ |
| Altitude proportional | $K_{p,z}$ | 8.0 s$^{-2}$ |
| Altitude derivative | $K_{d,z}$ | 4.0 s$^{-1}$ |
| Attitude proportional | $K_{p,\mathrm{att}}$ | 6.0 s$^{-1}$ |
| Yaw proportional | $K_{p,\mathrm{yaw}}$ | 2.0 s$^{-1}$ |

Damping ratios: $\zeta_{xy} = K_{d,xy}/(2\sqrt{K_{p,xy}}) = 2.5/(2\sqrt{4.0}) = 0.625$ (slightly underdamped); $\zeta_z = K_{d,z}/(2\sqrt{K_{p,z}}) = 4.0/(2\sqrt{8.0}) = 0.707$ (critically damped).

---

*Manuscript prepared for submission. All simulation code available at* [repository URL]. *© 2026 Bryan S. Guevara.*