#include "Zombie.h"
#include "Soldier.h"
#include "Medic.h"

#include <iostream>

Medic::Medic(const char* n){
	this->setName(n);
	this->setHP(8);
	this->setDamage(2);
	this->setPrimaryWeapon("Syringe");
}

Medic::~Medic()
{

}

bool Medic::getHit(Zombie* z)
{

	if (z->getHP() > 0){
		cout<< this->getName() << " gives themself painkillers to numb the " << z->getDamageDone() << " damage suffered."<<endl;

		int newHP = this->getHP()- z->getDamageDone();
		this->setHP(newHP);

		if (this->getHP() <= 0){
			return true;
		}
	}
	return false;
}

bool Medic::hitZombie(Zombie* z)
{
	cout<< "Medic " << this->getName() << " frantically stabs at a zombie with a " << this->getPrimaryWeapon() <<endl;

	if (z->takeDamage(this->getDamage()) <= 0){
		return true;
	}

	return false;
}

void Medic::celebrate(){
	cout << this->getName() << " sighs in relief."<<endl;
}

void Medic::die(){
	cout << "After saving so many lives, " << this->getName() << " could not save themself."<<endl;
}