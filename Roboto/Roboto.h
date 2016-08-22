#ifndef Roboto_h
#define Roboto_h

#include "Arduino.h"
#include "Mov.h"
#include "Ojos.h"
#include "NewPing.h"

class Roboto
{
public:
	Roboto(Mov base, Ojos ojos, NewPing sonar);
	void iniciar();
	void buscarSenal();
	void alinearse();
	void dirigirse();
	void detenerse();

private:
	Mov _base;
	Ojos _ojos;
	NewPing _sonar;
	int _nsensor; 
	int _dobstacle;
};

#endif
