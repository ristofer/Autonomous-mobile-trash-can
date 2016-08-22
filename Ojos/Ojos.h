

#ifndef Ojos_h
#define Ojos_h

#include "Arduino.h"
#include "IRsensor.h"

class Ojos
{
public:
	Ojos(IRsensor sensor1,
		   IRsensor sensor2,
		   IRsensor sensor3,
		   IRsensor sensor4);
	void iniciar();
	int ver();

private:
	IRsensor _sensor1;
	IRsensor _sensor2;
	IRsensor _sensor3;
	IRsensor _sensor4;


};

#endif
