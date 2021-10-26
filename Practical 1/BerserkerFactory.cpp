#include "SoldierFactory.h"
#include "BerserkerFactory.h"
#include "Berserker.h"

#include <iostream>

BerserkerFactory::BerserkerFactory(){

}

BerserkerFactory::~BerserkerFactory(){

}
	
Soldier* BerserkerFactory::createSoldier(const char* name){
	return new Berserker(name);
}
