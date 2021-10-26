#include "Zombie.h"
#include <iostream>

Zombie::Zombie(const char* att, int dam)
	: attackType(att), damage(dam)
{
  hp = 5;
}

Zombie::~Zombie()
{

}

int Zombie::takeDamage(int amount)
{
	cout << "Zombie took " << amount << " damage." << endl;
	hp -= amount;
	return hp;
}

int Zombie::getDamage()
{
	cout << "Zombie used " << attackType << "." << endl;
	return damage;
}

Zombie* Zombie::clone(){
	const char *array = this->getAttackType().c_str();
	return new Zombie(array, this->getDamage());
}
