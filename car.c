#include <REGX51.H>
#include <PWM.h>
#include <Motor.h>

void car_go(unsigned char compare)
{
	PWM_Control(compare);
	Motor_FR1();
	Motor_FR2();
	Motor_FL1();
	Motor_FL2();
}

void car_back(unsigned char compare)
{
	PWM_Control(compare);
	Motor_BR1();
	Motor_BR2();
	Motor_BL1();
	Motor_BL2();
}

void car_stop(void)
{
	Motor_Init();
}

void car_left(void)
{
	PWM_Control(25);
	Motor_FR1();
	Motor_FR2();
	Motor_BL1();
	Motor_BL2();
}

void car_right(void)
{
	PWM_Control(25);
	Motor_BR1();
	Motor_BR2();
	Motor_FL1();
	Motor_FL2();
}







