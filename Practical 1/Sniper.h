#ifndef SNIPER_H
#define SNIPER_H

#include <string>
#include "Soldier.h"

using namespace std;

class Sniper : public Soldier{

public:
	Sniper();

	Sniper(const char*);

	~Sniper();
	
	bool hitZombie(Zombie* z);

	void celebrate();

	bool getHit(Zombie* z);

	void die();

	string getType(){
		return "Sniper";
	}

};

#endif