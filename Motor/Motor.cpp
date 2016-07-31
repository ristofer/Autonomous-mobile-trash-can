#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int ctl1, int ctl2, int pwm)
{
	_ctl1 = ctl1;
	_ctl2 = ctl2;
	_pwm = pwm ;
}

void Motor::iniciar()
{
	pinMode(_ctl1,OUTPUT);
	pinMode(_ctl2,OUTPUT);
	pinMode(_pwm,OUTPUT);
}

void Motor::clockwise()
{
	digitalWrite(_ctl1,HIGH);
  digitalWrite(_ctl2,LOW);
}

void Motor::counterclockwise()
{
	digitalWrite(_ctl1,LOW);
  digitalWrite(_ctl2,HIGH);
}

void Motor::stop()
{
	digitalWrite(_ctl1,LOW);
  digitalWrite(_ctl2,LOW);
  analogWrite(_pwm,0);
}

void Motor::velocidad(int vel)
{
	analogWrite(_pwm,vel);
}
