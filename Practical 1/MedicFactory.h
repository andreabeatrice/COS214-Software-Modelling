#ifndef MEDICFACTORY_H
#define MEDICFACTORY_H

#include <string>
#include "SoldierFactory.h"
#include "Medic.h"

using namespace std;

class MedicFactory : public SoldierFactory{

public:
	MedicFactory();

	~MedicFactory();
	
	Soldier* createSoldier(const char*);

};

#endif