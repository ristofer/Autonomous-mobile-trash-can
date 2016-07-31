#include "Arduino.h"
#include "Roboto.h"
#include "Ojos.h"
#include "Mov.h"

Roboto::Roboto(Mov base, Ojos ojos):
_base(base),
_ojos(ojos)
{
	_nsensor = 6;
}

void Roboto::iniciar()
{
	_base.iniciar();
	_ojos.iniciar();
}

void Roboto::buscarSenal()
{
	_nsensor = _ojos.ver();
	while(_nsensor==7)
	{
		_base.girarDerecha();
		_nsensor = _ojos.ver();
	}
	_base.detenerse();
}

void Roboto::alinearse()
{
	if(_nsensor==7)
	{
		return buscarSenal();
	}
	while(_nsensor!=0)
		{
			if (_nsensor<4)
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
		_base.avanzar();
		_nsensor=_ojos.ver();

	}

	return alinearse();
}

void Roboto::detenerse()
{
	_base.detenerse();
}
