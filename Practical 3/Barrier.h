#ifndef BARRIER_H
#define BARRIER_H

#include "Decorator.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Barrier : public Decorator{

public:
	Barrier(){};


	Barrier(Section* c) : Decorator(c){};

	void print(){
		Decorator::print();
		cout <<"\t"<<"Barriers";
	};

};

#endif