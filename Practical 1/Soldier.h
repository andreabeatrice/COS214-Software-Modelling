#ifndef SOLDIER_H
#define SOLDIER_H

#include <string>
#include "Zombie.h"

using namespace std;

class Soldier
{
private:
	string name;
	int hp;
	int damage;
	string primaryWeapon;
	string secondaryWeapon;

public:
	Soldier();

	Soldier(const char*);

	virtual ~Soldier();
	
	virtual bool hitZombie(Zombie* z) =0;

	virtual void celebrate() =0;

	virtual bool getHit(Zombie* z) =0;

	virtual void die() =0;

	virtual string getType() =0;

	bool attack(Zombie* z);

	string getName(){
		return name;
	};

	void setName(string n){
		name = n;
	};

	int getHP(){
		return hp;
	};

	void setHP(int x){
		hp = x;
	};

	string getPrimaryWeapon(){
		return primaryWeapon;
	};

	void setPrimaryWeapon(string pW){
		primaryWeapon = pW;
	};

	int getDamage(){
		return damage;
	};

	void setDamage(int d){
		damage = d;
	};
};

#endif