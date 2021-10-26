#include "SoldierFactory.h"
#include "SniperFactory.h"
#include "Sniper.h"

#include <iostream>

SniperFactory::SniperFactory(){

}

SniperFactory::~SniperFactory(){

}
	
Soldier* SniperFactory::createSoldier(const char* name){
	return new Sniper(name);
}
