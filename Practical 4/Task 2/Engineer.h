#ifndef ENGINEER_H
#define ENGINEER_H

#include <iostream>
#include <string>
#include "NetworkElement.h"

using namespace std;

//Create an Engineer class which will be the observer interface within the Observer pattern with the
//following specification:
class Engineer {
private:
	string name;

public:

	/*• a virtual destructor.*/
	virtual ~Engineer(){};

	/*• a relevant constructor.*/
	Engineer(){
		
	};

	Engineer(string n){
		name = n;
	}

	/*• a pure virtual function update() which will update the observer object with the state of the
	concrete subject to which it is registered.*/
	virtual void update()=0;

	void setName(string s){
		name = s;
	}

	string getName(){
		return name;
	}

	void fixIt();

};

#endif