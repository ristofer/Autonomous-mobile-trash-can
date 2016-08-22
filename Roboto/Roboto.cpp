#include "Arduino.h"
#include "Roboto.h"
#include "Ojos.h"
#include "Mov.h"
#include "NewPing.h"

Roboto::Roboto(Mov base, Ojos ojos, NewPing sonar):
_base(base),
_ojos(ojos),
_sonar(sonar)
{
	_nsensor = 4 ;
	_dobstacle = 500;
}

void Roboto::iniciar()
{
	_base.iniciar();
	_ojos.iniciar();
}

void Roboto::buscarSenal()
{
	_nsensor = _ojos.ver();
	while(_nsensor==4)
	{
		_base.girarDerecha();
		_nsensor = _ojos.ver();
	}
	_base.detenerse();
}

void Roboto::alinearse()
{
	if(_nsensor==4)
	{
		return buscarSenal();
	}
	while(_nsensor!=0)
		{
			if (_nsensor<3)
			{
				_base.girarDerecha();

			}
			else
			{
				_base.girarIzquierda();
			}

			_nsensor = _ojos.ver();
		}

	_base.detenerse();
}

void Roboto::dirigirse()
{
	while(_nsensor==0)
	{
		_dobstacle = _sonar.ping_cm();
		while(_dobstacle<=10){
			_base.detenerse();
			_dobstacle = _sonar.ping_cm();
			delay(50);

		}
		_base.avanzar();
		_nsensor=_ojos.ver();

	}

	return alinearse();
}

void Roboto::detenerse()
{
	_base.detenerse();
}
