// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       Robot.ino
    Created:	29-08-2018 13:51:56
    Author:     JUMPTWIICE\adamt
*/


#include "MeMegaPi.h"
#include <Wire.h>
#include <SoftwareSerial.h>
#include <math.h>

MeEncoderNew Arm(PORT3B);
MeEncoderNew Motor1(PORT2B);
MeEncoderNew Motor2(PORT1B);
MeMegaPiDCMotor Clamp(PORT4B);

// The setup() function runs once each time the micro-controller starts
void setup()
{
	Arm.begin();
	Motor1.begin();
	Motor2.begin();
	Serial.begin(115200);
	Serial3.begin(115200);


}

// Add the main program code into the continuous loop() function
void loop()
{
	Motor1.moveTo(360, 100);
	Motor2.moveTo(360, 100);
	while (true);
}

void controlClamp(int speed)
{
	Clamp.run(speed);
	delay(700);
	Clamp.stop();
	while (true);
}

void driveEncoder(MeEncoderNew motor, float distance, float speed)
{
	motor.moveTo((distance * 180) / (3.15*PI), speed);
}

void armPosition()
{

}

void barrelChoice(int n)
{
	switch (n)
	{
	case 1:

		break;

	case 2:
		
		break;

	case 3:
		
		break;

	case 4:
		
		break;

	case 5:
		
		break;

	}
}

