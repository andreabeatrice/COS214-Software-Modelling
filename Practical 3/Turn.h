#ifndef TURN_H
#define TURN_H

#include "Section.h"
#include <iostream>
#include <string>

using namespace std;

class Turn : public Section{
private:
	int checkRotation;

	/*
	i. Putting 4 1/4 turns after one another creates a circular track. You are required to use the Composite
	design pattern to design a racetrack composed from the various sections available.

	ii. A 1/4 turn is a 90 ◦ turn to the right. Therefore if you need a left turn you can rotate it through 180◦ .

	*/
public:

	Turn(){

	}

	Turn(int r){
		checkRotation = r;
	}

	void print() override{
		if (checkRotation==0)
			cout<<"\t"<<"Right ";
		else if (checkRotation==180)
			cout<<"\t"<<"Left ";

		cout<<"Turn";
	}
};

#endif