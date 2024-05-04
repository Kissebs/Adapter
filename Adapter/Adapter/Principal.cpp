#include "MotorEconomico.h"
#include "MotorGaston.h"
#include "MotorElectricoAdaptador.h"

int main() {


	Motor* mot1 = new MotorGaston();
	Motor* mot2 = new MotorEconomico();
	Motor* mot3 = new MotorElectricoAdaptador();



	mot1->arrancar();
	mot1->acelerar();
	mot1->apagar();
	
	system("pause");
	system("cls");

	mot2->arrancar();
	mot2->acelerar();
	mot2->apagar();

	system("pause");
	system("cls");

	mot3->arrancar();
	mot3->acelerar();
	mot3->apagar();


	system("pause");
	return 0;
}
