#ifndef ENGINEERFACTORY_H
#define ENGINEERFACTORY_H

#include <string>
#include "SoldierFactory.h"
#include "Engineer.h"

using namespace std;

class EngineerFactory : public SoldierFactory{

public:
	EngineerFactory();

	~EngineerFactory();
	
	Soldier* createSoldier(const char*);

};

#endif