#include "Arduino.h"
#include "Motor.h"
#include "Mov.h"


Mov::Mov( Motor m_izq,  Motor m_der):
	_m_izq(m_izq),
	_m_der(m_der){}

void Mov::iniciar()
{
	_m_izq.iniciar();
	_m_der.iniciar();
}

void Mov::avanzar()
{
	_m_izq.clockwise();
	_m_der.clockwise();
	_m_izq.velocidad(107);
	_m_der.velocidad(146);
}

void Mov::retroceder()
{
	_m_izq.counterclockwise();
	_m_der.counterclockwise();
	_m_izq.velocidad(107);
	_m_der.velocidad(146);
}

void Mov::girarDerecha()
{
	_m_izq.clockwise();
	_m_der.counterclockwise();
	_m_izq.velocidad(107);
	_m_der.velocidad(146);
}

void Mov::girarIzquierda()
{
	_m_izq.counterclockwise();
	_m_der.clockwise();
	_m_izq.velocidad(107);
	_m_der.velocidad(146);
}

void Mov::detenerse()
{
	_m_izq.stop();
	_m_der.stop();
}
