#ifndef PITSTOP_H
#define PITSTOP_H

#include "Decorator.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pitstop : public Decorator{

public:
	Pitstop(){};

	void print(){
		Decorator::print();
		cout <<"\t"<<"Pit Stop";
	};

};

#endif