#include "SoldierFactory.h"
#include "MedicFactory.h"
#include "Medic.h"

#include <iostream>

MedicFactory::MedicFactory(){

}

MedicFactory::~MedicFactory(){

}
	
Soldier* MedicFactory::createSoldier(const char* name){
	return new Medic(name);
}
