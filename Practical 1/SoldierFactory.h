#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include <string>
#include "Soldier.h"

using namespace std;

class SoldierFactory {

public:
	SoldierFactory(){};

	~SoldierFactory(){};
	
	virtual Soldier* createSoldier(const char*) = 0;

};

#endif