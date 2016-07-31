#ifndef Roboto_h
#define Roboto_h

#include "Arduino.h"
#include "Mov.h"
#include "Ojos.h"

class Roboto
{
public:
	Roboto(Mov base, Ojos ojos);
	void iniciar();
	void buscarSenal();
	void alinearse();
	void dirigirse();
	void detenerse();

private:
	Mov _base;
	Ojos _ojos;
	int _nsensor; 

};

#endif
