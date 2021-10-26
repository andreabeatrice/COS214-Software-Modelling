#ifndef MEDIC_H
#define MEDIC_H

#include <string>
#include "Soldier.h"

using namespace std;

class Medic : public Soldier{

public:
	Medic();

	Medic(const char*);

	~Medic();
	
	bool hitZombie(Zombie* z);

	void celebrate();

	bool getHit(Zombie* z);

	void die();

	string getType(){
		return "Medic";
	};

};

#endif