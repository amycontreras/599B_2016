//VARIABLES
int FLY_DEADZONE = 10;
bool button = true;
bool controller = false;

// no need for two parameters because each side will always spin in the same direction
void setMotors(int power)
{
	motor[LeftSideTop] = power;
	motor[LeftSideBottom] = power;
	motor[RightSideTop] = power;
	motor[RightSideBottom] = power;
}

//launch function either works with a button activator or a controller activator
// use button in the parameter for button  toggle
//use controller in the parameter for controller toggle
void Launch(bool button)
{
	// if you want to use a button for motor speed
	// only 127 or -127 speed
	if(button == true)
	{

		if(SensorValue[BtnForward] == 1)
		{
			setMotors(127);
		}
		else if(SensorValue[BtnBack] == 1)
		{
			setMotors(-127);
		}
		else
		{
			setMotors(0);
		}
	}
}
	// if you want to use a controller to control the motors
	// toggle speed as you like
	/*
	else
	{
		int fly = vexRT[Ch3];
		if(fly > FLY_DEADZONE)
		{
			setMotors(fly);
		}

		else if( fly < -FLY_DEADZONE)
		{
			setMotors(fly);
		}
		else
		{
			setMotors(0);
		}

	}

}
*/
