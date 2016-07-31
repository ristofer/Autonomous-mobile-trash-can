#ifndef Mov_h
#define Mov_h

#include "Arduino.h"
#include "Motor.h"


class Mov
{
public:
	Mov( Motor m_izq,  Motor m_der);
	void iniciar();
	void avanzar();
	void retroceder();
	void girarDerecha();
	void girarIzquierda();
	void detenerse();

private:
	Motor _m_izq;
	Motor _m_der;

};

#endif
