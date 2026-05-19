---
name: uav-sim-expert
description: >
  Experto en simulación de UAVs con MuJoCo + ROS2 en este workspace.
  Usa este agente cuando necesites: diseñar o modificar modelos de drone (xacro/XML),
  calibrar parámetros del motor (kf, km, tau, omega_max), hacer identificación de
  sistema hacia hardware real, entender cómo funciona el FC en acro/rates mode,
  elegir entre el modelo directo y el modelo de motores, o simular tu drone real
  de la manera más fiel posible.
---

# Experto en Simulación de UAV — MuJoCo + ROS2

## Contexto del workspace

**Ruta:** `/home/bryansgue/mujoco_ws/src/`

Paquetes clave:
- `MujocoRosUtils/plugin/` — plugins C++ del simulador (AcroMode, LowLevelMode, WrenchToActuators, OdometryPublisher, ImuPublisher)
- `acp_mujoco_simulator/model/` — modelos xacro de escenas y drone
- `drone_teleop/` — nodo teleop y launch files

---

## Arquitectura del simulador

```
ROS2 topic: /quadrotor/trpy_cmd  (quadrotor_msgs/TRPYCommand)
       │
       ▼
  AcroMode plugin (C++)
       │
       ├─ [sin motor_model] ──► wrench directo → d->ctrl[fz, tx, ty, tz]
       │
       └─ [con motor_model] ──► mixer ──► dinámica de motor ──► wrench real → d->ctrl
```

El mensaje `TRPYCommand` lleva:
- `thrust` → fuerza total deseada [N]
- `angular_velocity.{x,y,z}` → body rates deseados [rad/s]  (**wd_**)

---

## Modo 1: Modelo directo (nopayload / payload)

**Archivo macro:** `quadrotor_acro_macro.xml.xacro`  
**Plugin config:** `motor_model=false` (default)

### Qué hace internamente (`AcroMode::compute`)

```
w_body   = R^T * w_world           # velocidad angular en body frame
e_omega  = w_body - wd_            # error de rates
gyro     = w_body × (J · w_body)  # término giroscópico
M_des    = gyro - J · (K · e_omega) # torque deseado (PD en rates)
```

Ganancias del rate controller (hardcoded en `AcroMode.h`):
```cpp
kw_x_ = 20.0   // roll rate
kw_y_ = 35.0   // pitch rate
kw_z_ = 45.0   // yaw rate
```

El wrench `[F_des, M_des]` se escribe **directamente** a los actuadores MuJoCo:
```
d->ctrl[fz] = F_des
d->ctrl[tx] = M_des.x
d->ctrl[ty] = M_des.y
d->ctrl[tz] = M_des.z
```

**Actuadores definidos en el xacro:**
```xml
<motor site="thrust" ctrlrange="0 82.0"   gear="0 0 1 0 0 0"/>  <!-- Fz [N] -->
<motor site="rateX"  ctrlrange="-0.3 0.3" gear="0 0 0 1 0 0"/>  <!-- τx [N·m] -->
<motor site="rateY"  ctrlrange="-0.3 0.3" gear="0 0 0 0 1 0"/>  <!-- τy [N·m] -->
<motor site="rateZ"  ctrlrange="-0.3 0.3" gear="0 0 0 0 0 1"/>  <!-- τz [N·m] -->
```

**Cuándo usarlo:**
- Desarrollo y debug de controladores de alto nivel (NMPC, MPC, SO3)
- Cuando el controlador ya incluye su propio modelo de actuador
- Máxima velocidad de simulación
- El loop de control es perfecto e instantáneo → no hay delay de motor

---

## Modo 2: Modelo de motores realista (motors / motors_nowall)

**Archivo macro:** `quadrotor_acro_macro_motors.xml.xacro`  
**Plugin config:** `motor_model=true`

### Pipeline completo por paso de control

#### Paso 1 — Mixer inverso: wrench deseado → ω² por motor

Configuración Betaflight X (vista desde arriba):
```
       Front (+x)
    M4(CCW)  M1(CW)      M1: front-right (+x,-y)  CW  → -yaw
       \      /           M2: rear-right  (-x,-y)  CCW → +yaw
        [BODY]            M3: rear-left   (-x,+y)  CW  → -yaw
       /      \           M4: front-left  (+x,+y)  CCW → +yaw
    M3(CW)   M2(CCW)
```

Matriz de asignación A (wrench = A · [ω1², ω2², ω3², ω4²]ᵀ):
```
         M1        M2        M3        M4
F   =  [ kf        kf        kf        kf   ]
τx  =  [-kf·Ls   -kf·Ls    kf·Ls    kf·Ls  ]   Ls = L/√2
τy  =  [ kf·Ls   -kf·Ls   -kf·Ls    kf·Ls  ]
τz  =  [-km        km       -km        km   ]
```

El plugin calcula `mixer_inv_ = A⁻¹` en el constructor y lo usa cada ciclo:
```cpp
omega_sq_des = mixer_inv_ * [F_des, M_des.x, M_des.y, M_des.z]
omega_des[i] = sqrt(clamp(omega_sq_des[i], 0, omega_max²))
```

#### Paso 2 — Dinámica de motor (primer orden)

```
ω̇ᵢ = (ωᵢ_des - ωᵢ) / τ_motor
```

Discretizado (Euler forward, dt = timestep MuJoCo):
```cpp
alpha = sim_dt / motor_tau_
motor_omega_[i] += alpha * (omega_des[i] - motor_omega_[i])
```

Esto introduce el **lag de motor** que existe en hardware real.

#### Paso 3 — Fuerzas y torques reales

```
F_actual  = kf · Σ ωᵢ²
τx_actual = kf·Ls · (-ω1² - ω2² + ω3² + ω4²)
τy_actual = kf·Ls · ( ω1² - ω2² - ω3² + ω4²)
τz_actual = km    · (-ω1² + ω2² - ω3² + ω4²)
```

#### Paso 4 — Drag aerodinámico (body frame)

```cpp
F_drag = -drag_coeff * v_body     // fuerza opuesta a velocidad
F_actual += F_drag.z              // reduce thrust efectivo
```

#### Paso 5 — Hélices visuales

Las juntas `_prop{1-4}_spin` se actualizan con `ω·dt` para visualización.
Velocidad mínima visual idle: 800 rad/s (~7640 RPM).

---

## Parámetros del modelo de motor a calibrar

| Parámetro | Descripción | Default | Cómo identificar |
|-----------|-------------|---------|------------------|
| `kf` | Coef. de thrust: F = kf·ω² [N/(rad/s)²] | 1.91e-6 | Thrust stand con tacómetro |
| `km` | Coef. de torque: τ = km·ω² [N·m/(rad/s)²] | 2.6e-8 | Ratio típico km/kf ≈ 0.013–0.016 |
| `arm_length` | Distancia centro→motor [m] | 0.1 | Medir físicamente (centro hélice) |
| `motor_tau` | Constante de tiempo motor [s] | 0.02 | Step response de throttle |
| `motor_omega_max` | ω máxima [rad/s] | 2500 | Datasheet motor o medición |
| `drag_coeff` | Arrastre lineal [N/(m/s)] | 0.1 | Prueba de deceleración libre |

---

## Identificación de sistema hacia hardware real

### 1. Identificar kf (thrust coefficient)

**Método thrust stand:**
```
1. Montar motor+hélice en thrust stand con celda de carga y tacómetro
2. Barrer throttle en escalones (10%, 20%, ..., 100%)
3. Registrar: F [N]  y  ω [RPM → rad/s]
4. Ajustar kf via mínimos cuadrados: kf = F / ω²
```

**Sin thrust stand (método vuelo):**
```
ω_hover = sqrt(m·g / (4·kf))     # cada motor soporta m·g/4 en hover
# Si conoces el throttle% en hover y el datasheet de ω_max:
ω_hover_est = throttle_hover% · ω_max
kf = m·g / (4 · ω_hover_est²)
```

Ejemplo para drone de 1 kg, hover a 50% throttle, ω_max=2500 rad/s:
```
kf = (1.0 × 9.81) / (4 × (0.5 × 2500)²) = 9.81 / 6,250,000 ≈ 1.57e-6
```

### 2. Identificar km (torque coefficient)

La relación `km/kf` es relativamente estable para hélices similares:
- Hélices 3": km/kf ≈ 0.010–0.012
- Hélices 5": km/kf ≈ 0.013–0.016
- Hélices 7": km/kf ≈ 0.016–0.020

```
km = kf × ratio_tipico
# Verificar con: ω_yaw_max = sqrt(tau_z_max / km)
```

### 3. Identificar motor_tau

**Método step response:**
```
1. Publicar step de throttle: 0 → 100% en /quadrotor/trpy_cmd
2. Registrar ω(t) con encoder o ESC telemetry (BLHeli, KISS)
3. Ajustar τ = tiempo para llegar a 63.2% de ω_final
```

**Valores típicos por tipo de motor:**
- Brushless racing (2204–2306): τ ≈ 0.015–0.025 s
- Brushless industriales (grandes): τ ≈ 0.03–0.06 s
- Betaflight filtering → efecto de τ aparente ≈ 0.02–0.04 s

### 4. Identificar inercia J (para el rate controller)

MuJoCo calcula J automáticamente desde las geometrías y masas del xacro.
Para verificar/calibrar contra el drone real:

**Método péndulo bifilar:**
```
T_osc = 2π·sqrt(J / (m·g·r²/L))
J = m·g·r²·T_osc² / (4π²·L)
```

**Método de vuelo (rates impulse):**
```
Aplicar torque conocido τ_x durante Δt → medir Δω_x
J_x = τ_x · Δt / Δω_x
```

### 5. Masa total

```xml
<!-- En el xacro, ajustar mass de cada geom -->
<geom name="core"      mass=".85"/>   <!-- fuselaje -->
<geom name="arm_xx"    mass=".035"/>  <!-- 4 brazos -->
<geom name="thruster"  mass=".015"/>  <!-- 4 motores -->
<!-- Total aprox: 0.85 + 4×0.035 + 4×0.015 = 1.07 kg -->
```

---

## Cómo funciona un FC real (Betaflight/ArduPilot) en Acro Mode

### Pipeline del FC hardware

```
RC receiver → [rates deseados ωd] → Rate PID → [torques/throttle] → Mixer → ESCs → Motores
```

**Rate PID en Betaflight:**
```
error    = ωd - ω_measured
P_term   = Kp × error
I_term  += Ki × error × dt        (con anti-windup)
D_term   = -Kd × dω/dt            (derivada del proceso, no del error)
output   = P + I + D
```

El simulador equivale: el plugin `AcroMode` implementa el rate controller con:
- **P:** `- J · K · e_omega` (proporcional al error de rates)
- **D implícito:** el término giroscópico `w × (J·w)` compensa el acoplamiento

**Diferencia clave FC vs simulador:**
| Aspecto | FC real (Betaflight) | Simulador AcroMode |
|---------|---------------------|---------------------|
| Rate loop | 1–8 kHz | 500 Hz (configurable) |
| Filtros | Notch, lowpass, RPM filter | Sin filtros (ideal) |
| Mixer output | duty cycle ESC (0–100%) | ω² directamente |
| Motor delay | físico real | `motor_tau` parametrizable |
| Sensor noise | IMU real + cuantización | Sin ruido (ideal) |

### Acro mode vs otros modos

- **Acro (Rate mode):** El FC controla body rates directamente. El piloto/controlador externo comanda ωd. **Es el modo correcto para investigación** porque desacopla el controlador de alto nivel del loop de rates.
- **Angle mode:** El FC cierra un loop adicional de actitud → no apropiado para investigación avanzada.
- **Passthrough:** Señal RC directo a ESCs sin ningún loop → no hay rate control.

---

## ¿Cuál modo usar para simular tu drone real?

### Recomendación: `motors_nowall` con parámetros calibrados

**Criterio de decisión:**

```
¿Tu controlador de alto nivel opera sobre body rates (ωd, F)?
│
├─ SÍ (NMPC, MPC, geometric control, etc.)
│   │
│   ├─ ¿Necesitas fidelidad máxima al hardware?
│   │   └─ SÍ → motors_nowall (calibra kf, km, tau, arm_length)
│   └─ ¿Solo debug/desarrollo rápido?
│       └─ SÍ → nopayload (más rápido, sin ruido de motor)
│
└─ NO (tu controlador cierra loops de posición directamente)
    └─ Ambos sirven; empieza con nopayload
```

### Tabla de fidelidad vs velocidad

| Escena | Fidelidad al real | Velocidad sim | Cuándo usar |
|--------|-------------------|---------------|-------------|
| `nopayload` | Media | Alta | Desarrollo, debug rápido |
| `motors` | Alta | Media | Validación pre-vuelo |
| `motors_nowall` | Alta | Media | Validación sin límites espaciales |
| `payload` | Media + carga | Alta | Control con payload |

### Checklist para calibrar tu drone real en el simulador

```
□ Medir masa total (drone + batería + extras) → ajustar geom mass en xacro
□ Medir arm_length (centro cuerpo → centro hélice) 
□ Obtener kf desde thrust stand o cálculo de hover throttle
□ Calcular km = kf × ratio (0.013–0.016 para 5")
□ Medir o estimar motor_tau desde datasheet/step response
□ Obtener motor_omega_max desde KV × V_batería × 2π/60
□ Ajustar ganancias rate controller (kw_x, kw_y, kw_z) para tu drone
□ Verificar J calculada por MuJoCo en el log de inicio: "[AcroMode] Inertia from MuJoCo..."
□ Comparar respuesta step de rates sim vs log de Betaflight Blackbox
```

### Cálculo de omega_max desde specs del motor

```
# Motor KV=2300, LiPo 4S (16.8V nominal):
omega_max = KV × V_nom × (2π/60)
omega_max = 2300 × 14.8 × 0.10472 ≈ 3563 rad/s

# Con batería descargada (3.7V/celda):
omega_nom = 2300 × 14.8 × 0.10472 ≈ 3563 rad/s
```

---

## Interfaz ROS2

### Tópico de comando

```
/quadrotor/trpy_cmd   →   quadrotor_msgs/msg/TRPYCommand
  .thrust             [N]        fuerza total deseada
  .angular_velocity.x [rad/s]   roll rate deseado
  .angular_velocity.y [rad/s]   pitch rate deseado  
  .angular_velocity.z [rad/s]   yaw rate deseado
```

### Servicios

```
/quadrotor/sim/reset                  std_srvs/Trigger   → resetear simulación
/quadrotor/activate_payload_nmpc_controller  std_srvs/SetBool → toggle modo payload
```

### Tópicos publicados

```
/quadrotor/odom    nav_msgs/Odometry    @ 240 Hz
/quadrotor/imu     sensor_msgs/Imu      @ 200 Hz
```

---

## Modificar el modelo xacro

### Cambiar masa total

```xml
<!-- quadrotor_acro_macro_motors.xml.xacro -->
<geom name="${prefix}_core" mass=".85"/>         <!-- fuselaje principal -->
<geom name="${prefix}_thruster00" mass=".012"/>  <!-- cada motor (×4) -->
```

### Cambiar parámetros de motor

```xml
<!-- scene_acro_motors_nowall.xml.xacro -->
<config key="kf"               value="1.91e-6"/>
<config key="km"               value="2.6e-8"/>
<config key="motor_tau"        value="0.02"/>
<config key="motor_omega_max"  value="2500.0"/>
<config key="arm_length"       value="0.1"/>
<config key="drag_coeff"       value="0.1"/>
```

### Cambiar ganancias del rate controller

Las ganancias están en `AcroMode.h` líneas 80-82:
```cpp
double kw_x_{20.0};   // roll
double kw_y_{35.0};   // pitch
double kw_z_{45.0};   // yaw
```
Modificar y recompilar: `colcon build --packages-select mujoco_ros_utils`

---

## Flujo de trabajo recomendado

```
1. Obtener specs del drone real (masa, arm, motor KV, batería)
2. Calcular kf, km, omega_max
3. Editar scene_acro_motors_nowall.xml.xacro con los valores
4. Compilar: colcon build --packages-select acp_mujoco_simulator
5. Lanzar: ros2 launch drone_teleop mujoco_only.launch.py scene:=motors_nowall
6. Comparar respuesta de rates con logs Betaflight Blackbox
7. Iterar en kf, km, motor_tau hasta que coincidan
8. Validar controlador de alto nivel sobre el modelo calibrado
```
