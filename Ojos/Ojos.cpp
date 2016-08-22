#include "Arduino.h"
#include "Ojos.h"
#include "IRsensor.h"


Ojos::Ojos(IRsensor sensor1,
		   IRsensor sensor2,
		   IRsensor sensor3,
		   IRsensor sensor4):
_sensor1(sensor1),
_sensor2(sensor2),
_sensor3(sensor3),
_sensor4(sensor4)
{}


void Ojos::iniciar()
{
	_sensor1.iniciar();
	_sensor2.iniciar();
	_sensor3.iniciar();
	_sensor4.iniciar();

}

int Ojos::ver()
{
	if(_sensor1.recibido()){return 0;}
	if(_sensor2.recibido()){return 1;}
	if(_sensor3.recibido()){return 2;}
	if(_sensor4.recibido()){return 3;}

	return 4;
}
