#ifndef SNIPERFACTORY_H
#define SNIPERFACTORY_H

#include <string>
#include "SoldierFactory.h"
#include "Sniper.h"

using namespace std;

class SniperFactory : public SoldierFactory{

public:
	SniperFactory();

	~SniperFactory();
	
	Soldier* createSoldier(const char*);

};

#endif