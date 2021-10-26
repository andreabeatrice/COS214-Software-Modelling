#include "Zombie.h"
#include "Soldier.h"
#include "Engineer.h"

#include <iostream>

Engineer::Engineer(const char* n){
	this->setName(n);
	this->setHP(7);
	this->setDamage(3);
	this->setPrimaryWeapon("Wrench");
}


Engineer::~Engineer()
{

}

bool Engineer::getHit(Zombie* z)
{

	if (z->getHP() > 0){
		cout<< this->getName() << " hides behind the nearest rock after taking " << z->getDamageDone() << " damage."<<endl;

		int newHP = this->getHP()- z->getDamageDone();
		this->setHP(newHP);

		if (this->getHP() <= 0){
			return true;
		}
	}
	return false;
}

bool Engineer::hitZombie(Zombie* z)
{
	cout<< "Engineer " << this->getName() << " bludgeons the zombie with a " << this->getPrimaryWeapon() <<endl;

	if (z->takeDamage(this->getDamage()) <= 0){
		return true;
	}

	return false;
}

void Engineer::celebrate(){
	cout << this->getName() << " shakes his "<< this->getPrimaryWeapon() << " at the zombie's remains." <<endl;
}

void Engineer::die(){
	cout << this->getName() << " was eaten by a zombie."<<endl;
}