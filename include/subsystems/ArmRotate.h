/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include "ctre/Phoenix.h"

class ArmRotate : public frc::Subsystem {
 private:
  // It's desirable that everything possible under private except
  // fos that ir methodmplement subsystem capabilities
  
 public:
  ArmRotate();
  void InitDefaultCommand() override;
};
