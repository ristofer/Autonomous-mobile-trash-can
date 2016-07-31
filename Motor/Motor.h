#ifndef Motor_h
#define Motor_h

#include "Arduino.h"


class Motor
{
public:
	Motor(int ctl1,
		  int ctl2,
		  int pwm);
	void iniciar();
	void clockwise();
	void counterclockwise();
	void stop();
	void velocidad(int vel);

private:
	int _ctl1;
	int _ctl2;
	int _pwm;

};

#endif