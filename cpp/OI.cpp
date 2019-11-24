/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include <frc/WPILib.h>

OI::OI():leftJoy(new frc::Joystick(0)),rightJoy(new frc::Joystick(1)) {


  // Process operator interface input here.
}

frc::Joystick* OI::getLeft(){
  return leftJoy;
}
frc::Joystick* OI::getRight(){
  return rightJoy;
}