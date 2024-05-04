#pragma once
#include "Motor.h"

class MotorGaston : public Motor {

public:

	MotorGaston(){}

	virtual ~MotorGaston(){}

	void arrancar(){ cout << "Encendiendo motor gaston." << endl; }

	void acelerar(){ cout << "Acelerando motor gaston." << endl; }

	void apagar(){ cout << "Apagando motor gaston." << endl; }

};