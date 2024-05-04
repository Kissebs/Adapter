#pragma once
#include <iostream>
using namespace std;


class MotorElectrico {

private:

	bool conectado;

public:

	MotorElectrico() {

		this->conectado = false;
	}

	virtual ~MotorElectrico() {}

	void conectar() {
		cout << "Conectando motor electrico." << endl;
		this->conectado = true;
	}

	void activar() {
		if (!conectado)
			cout << "Este motor electrico, No se puede activar puesto que no esta conectado" << endl;
		else
			cout << "Esta conectado, ... Activando motor electrico." << endl;
	}

	void moverMasRapido() {
		if (!conectado)
			cout << "No se puede mover mas rapido porque este motor electrico no esta conectado." << endl;
		else
			cout << "Moviendose más rapido. .... Aumentando voltaje" << endl;
	}

	void detener() {
		if (!conectado)
			cout << "No se deterner porque no esta conectado este motor electrico." << endl;
		else
			cout << "Deteniendo motor electrico." << endl;
	}

	void desconectar() {
		cout << "Desconectando Motor Electrico." << endl;
		this->conectado = false;
	}
};
