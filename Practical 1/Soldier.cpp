#include "Zombie.h"
#include "Soldier.h"
#include <iostream>


Soldier::Soldier(){
	// name = n;
	// hp = h;
	// primaryWeapon = pW;
	// secondaryWeapon = sW;
}

Soldier::~Soldier()
{

}


bool Soldier::attack(Zombie* z){
	while(hp > 0 && z->getHP() > 0){
		hitZombie(z);

		getHit(z);
	}

	if (z->getHP() <= 0){
		celebrate();
		return true;
	}
	else {
		die();
		return false;
	}

}