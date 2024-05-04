#pragma once
#include "Motor.h"
#include "MotorElectrico.h"


class MotorElectricoAdaptador : public Motor {

private:

	MotorElectrico* electrico;

public:

	MotorElectricoAdaptador() {

		electrico = new MotorElectrico;
	}

	virtual ~MotorElectricoAdaptador(){
	
		if (electrico != nullptr) {
			delete electrico;
		}
	}

	void arrancar() {
		electrico->conectar();
		electrico->activar();
	}

	void acelerar() {
		electrico->moverMasRapido();
	}

	void apagar() {
		electrico->detener();
		electrico->desconectar();
	}



};