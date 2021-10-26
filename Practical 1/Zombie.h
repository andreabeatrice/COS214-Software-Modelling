#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

using namespace std;

class Zombie
{
private:
	int hp;
	string attackType;
	int damage;

public:
	Zombie(const char*,int);

	~Zombie();
	
	// reduces the zombie's hp and returns the new value of hp
	int takeDamage(int);
	
	// returns the zombie's damage
	int getDamage();

	int getHP(){
		return hp;
	}

	string getAttackType(){
		return attackType;
	}

	int getDamageDone(){
		return damage;
	}

	Zombie* clone();
};

#endif