#ifndef BERSERKERFACTORY_H
#define BERSERKERFACTORY_H

#include <string>
#include "SoldierFactory.h"
#include "Berserker.h"

using namespace std;

class BerserkerFactory : public SoldierFactory{

public:
	BerserkerFactory();

	~BerserkerFactory();
	
	Soldier* createSoldier(const char*);

};

#endif