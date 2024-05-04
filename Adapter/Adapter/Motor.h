#pragma once
#include <iostream>
using namespace std;


class Motor {

public:

	virtual void arrancar() = 0;
	virtual void acelerar() = 0;
	virtual void apagar() = 0;


};