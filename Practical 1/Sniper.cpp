#include "Zombie.h"
#include "Soldier.h"
#include "Sniper.h"

#include <iostream>

Sniper::Sniper(const char* n){
	this->setName(n);
	this->setHP(6);
	this->setDamage(5);
	this->setPrimaryWeapon(".308 Rifle");
}

Sniper::~Sniper()
{

}

bool Sniper::getHit(Zombie* z)
{

	if (z->getHP() > 0){
		cout<< this->getName() << " swears in 13 different languages as he takes" << z->getDamageDone() << " damage."<<endl;

		int newHP = this->getHP()- z->getDamageDone();
		this->setHP(newHP);

		if (this->getHP() <= 0){
			return true;
		}
	}
	return false;
}

bool Sniper::hitZombie(Zombie* z)
{
	cout<< "Sniper " << this->getName() << " fires a " << this->getPrimaryWeapon() << " at the zombie."<<endl;

	if (z->takeDamage(this->getDamage()) <= 0){
		return true;
	}

	return false;
}

void Sniper::celebrate(){
	cout << this->getName() << " exclaims 'Headshot!'"<<endl;
}

void Sniper::die(){
	cout << this->getName() << " had a good life. He will be missed."<<endl;
}