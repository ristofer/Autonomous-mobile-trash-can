#include "Arduino.h"
#include "IRsensor.h"

IRsensor::IRsensor(int pin)
{
	_pin = pin;
}

void IRsensor::iniciar()
{
	pinMode(_pin,INPUT);
}

int IRsensor::recibir()
{
	int sum = 0;
	uint32_t start = millis();
	while(millis()-start < 50)
	{
	sum += digitalRead(_pin);
	}
	return sum;
}

bool IRsensor::recibido()
{
  if(recibir() < 8000)
  {
    return true;
  }
  return false;
}