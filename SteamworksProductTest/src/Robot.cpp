#include <WPILib.h>
#include "RobotMap.h"

using namespace frc;
class Robot: public IterativeRobot
{
	RobotDrive myRobot { 0, 1 };  // robot drive system
	Joystick stick { 0 };  // only joystick

public:
	Robot() {

	}

	void TeleopPeriodic()
	{
			myRobot.ArcadeDrive(stick); // drive with arcade style (use right stick)
		// wait for a motor update time

	}
};

START_ROBOT_CLASS(Robot)
