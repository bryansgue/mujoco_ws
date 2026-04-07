#include <mujoco/mjplugin.h>

#include "AcroMode.h"
#include "ActuatorCommand.h"
#include "ClockPublisher.h"
#include "CollisionPublisher.h"
#include "ExternalForce.h"
#include "ImagePublisher.h"
#include "ImuPublisher.h"
#include "LowLevelMode.h"
#include "OdometryPublisher.h"
#include "PosePublisher.h"
#include "SensorPublisher.h"
#include "So3Mode.h"
#include "WrenchToActuators.h"

namespace MujocoRosUtils
{

mjPLUGIN_LIB_INIT
{
  ClockPublisher::RegisterPlugin();
  PosePublisher::RegisterPlugin();
  ImagePublisher::RegisterPlugin();
  ActuatorCommand::RegisterPlugin();
  ExternalForce::RegisterPlugin();
  SensorPublisher::RegisterPlugin();
  WrenchToActuators::RegisterPlugin();
  OdometryPublisher::RegisterPlugin();
  ImuPublisher::RegisterPlugin();
  CollisionPublisher::RegisterPlugin();
  AcroMode::RegisterPlugin();
  LowLevelMode::RegisterPlugin();
  So3Mode::RegisterPlugin();
}
} // namespace MujocoRosUtils
