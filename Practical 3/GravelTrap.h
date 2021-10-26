#ifndef GRAVELTRAP_H
#define GRAVELTRAP_H

#include "Decorator.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class GravelTrap : public Decorator{

public:
	GravelTrap(){};

	void print(){
		Decorator::print();
		cout <<"\t"<<"Gravel traps";
	};

};

#endif