#ifndef ENGINEERCOLLECTION_H
#define ENGINEERCOLLECTION_H

#include <iostream>
#include <string>
#include <vector>
#include "Engineer.h"
#include "AlarmState.h"

using namespace std;

//Create an aggregate class called EngineerCollection with the following specification

class EngineerCollection {
private:


public:
	virtual void createEngineerIterator(){};

	virtual void addEngineer(Engineer*){};
	virtual void removeEngineer(){};
	virtual bool isEmpty(){
		return true;
	};

};

#endif