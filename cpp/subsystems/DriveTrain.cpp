/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/DriveTrain.h"
#include "RobotMap.h"
#include "commands/TankDrive.h"

DriveTrain::DriveTrain() : Subsystem("Drive"), left(new TalonSRX(leftMotorPort)), right(new TalonSRX(rightMotorPort)) {
left->SetInverted(true);
 
}

void DriveTrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  SetDefaultCommand(new TankDrive());

}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::Drive(double leftPower, double rightPower) {
  left->Set(ControlMode::PercentOutput, leftPower);
  right->Set(ControlMode::PercentOutput, rightPower);
}
