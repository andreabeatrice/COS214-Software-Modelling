#include "Zombie.h"
#include "Soldier.h"
#include "Berserker.h"

#include <iostream>

Berserker::Berserker(const char* n){
	this->setName(n);
	this->setHP(10);
	this->setDamage(4);
	this->setPrimaryWeapon("Big Chainsaw");
}

Berserker::~Berserker()
{

}

bool Berserker::getHit(Zombie* z)
{

	if (z->getHP() > 0){
		cout<< this->getName() << " pretends not to notice the " << z->getDamageDone() << " damage she takes."<<endl;

		int newHP = this->getHP()- z->getDamageDone();
		this->setHP(newHP);

		if (this->getHP() <= 0){
			return true;
		}
	}
	return false;
}

bool Berserker::hitZombie(Zombie* z)
{
	cout<< "Berserker " << this->getName() << " swings a " << this->getPrimaryWeapon() << " at the zombie's head."<<endl;

	if (z->takeDamage(this->getDamage()) <= 0){
		return true;
	}

	return false;
}

void Berserker::celebrate(){
	cout << this->getName() << " slices the zombie in half!"<<endl;
}

void Berserker::die(){
	cout << "Nobody really liked " << this->getName() << "'s company anyway."<<endl;
}