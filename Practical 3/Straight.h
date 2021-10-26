#ifndef STRAIGHT_H
#define STRAIGHT_H

#include "Section.h"
#include <iostream>
#include <string>

using namespace std;

class Straight : public Section{

public:
	Straight(){

	}

	void print() override{
		cout<<"\t"<<"Straight";
	}
};

#endif