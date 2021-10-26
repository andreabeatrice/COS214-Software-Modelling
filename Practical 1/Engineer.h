#ifndef ENGINEER_H
#define ENGINEER_H

#include <string>
#include "Soldier.h"

using namespace std;

class Engineer : public Soldier{

public:
	Engineer();

	Engineer(const char*);

	~Engineer();
	
	bool hitZombie(Zombie* z);

	void celebrate();

	bool getHit(Zombie* z);

	void die();

	string getType(){
		return "Engineer";
	};

};

#endif