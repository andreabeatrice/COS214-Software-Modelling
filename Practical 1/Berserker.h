#ifndef BERSERKER_H
#define BERSERKER_H

#include <string>
#include "Soldier.h"

using namespace std;

class Berserker : public Soldier{

public:
	Berserker();

	Berserker(const char*);

	~Berserker();
	
	bool hitZombie(Zombie* z);

	void celebrate();

	bool getHit(Zombie* z);

	void die();

	string getType(){
		return "Berserker";
	};

};

#endif