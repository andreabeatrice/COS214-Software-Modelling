#include "SoldierFactory.h"
#include "EngineerFactory.h"
#include "Engineer.h"

#include <iostream>

EngineerFactory::EngineerFactory(){

}

EngineerFactory::~EngineerFactory(){

}
	
Soldier* EngineerFactory::createSoldier(const char* name){
	return new Engineer(name);
}
