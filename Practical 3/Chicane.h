#ifndef CHICANE_H
#define CHICANE_H

#include "Section.h"
#include <iostream>
#include <string>

using namespace std;

class Chicane : public Section{

public:

	Chicane(){
		
	}

	void print() override{
		cout<<"\t"<<"Chicane"<<"\t";
	}
};

#endif