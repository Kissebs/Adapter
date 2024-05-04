#pragma once
#include "Motor.h"

class MotorEconomico : public Motor {

public:

	MotorEconomico(){}

	virtual ~MotorEconomico(){}

	void arrancar() { cout << "Encendiendo motor economico." << endl; }

	void acelerar() { cout << "Acelerando motor economico." << endl; }

	void apagar() { cout << "Apagando motor economico." << endl;}

};