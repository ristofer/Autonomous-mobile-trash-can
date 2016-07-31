




#ifndef IRsensor_h
#define IRsensor_h

#include "Arduino.h"

class IRsensor
{
public:
	IRsensor(int pin);
	void iniciar();
	int recibir();
	bool recibido();

private:
	int _pin;

};

#endif