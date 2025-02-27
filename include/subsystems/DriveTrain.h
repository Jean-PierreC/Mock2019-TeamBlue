/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <ctre/Phoenix.h>
#pragma once
#include <iostream>
using namespace std;
#include <frc/commands/Subsystem.h>

class DriveTrain : public frc::Subsystem {
 private:
 TalonSRX* right;
 TalonSRX* left;
  // It's desirable that everything possible under private except
  // for methods that implement subsystem capabilities

 public:
  DriveTrain();
  void InitDefaultCommand() override;
  void Drive(double leftPower, double rightPower);
};
