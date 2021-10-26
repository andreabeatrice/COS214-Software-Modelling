#ifndef STARTLINE_H
#define STARTLINE_H

#include "Decorator.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Startline : public Decorator{

public:
	Startline(){};

	void print(){
		Decorator::print();
		cout <<"\t"<<"Starting line";
	};

};

#endif