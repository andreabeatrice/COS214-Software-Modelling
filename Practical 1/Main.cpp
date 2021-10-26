#include "Soldier.h"
#include "Zombie.h"
#include "SniperFactory.h"
#include "BerserkerFactory.h"
#include "MedicFactory.h"
#include "EngineerFactory.h"
#include <iostream>

using namespace std;

int main()
{
	//1.3
	short numWariors;
	cout << "How many people have gathered to defeat the horde? ";
	cin >> numWariors;
	int numSnipers = 0, numBerserkers = 0, numMedics = 0, numEngineers = 0;
	
	Soldier** battalion = new Soldier*[numWariors];
	short fighterClass;
	char givenName[30];
	bool attackSuccess[numWariors];
	
	for (short i = 0; i < numWariors; i++){
		cout << "What is this brave soul's name? ";
		cin >> givenName;
		cout << endl;
		cout << "1 - Sniper" << endl;
		cout << "2 - Berserker" << endl;
		cout << "3 - Medic" << endl;
		cout << "4- Engineer" << endl;
		cout << "What class is "<<givenName<<"? ";
		cin >> fighterClass;

		switch(fighterClass) {
		  case 1:
		    battalion[i] = new Sniper(givenName);
		    numSnipers++;
		    break;
		  case 2:
		    battalion[i] = new Berserker(givenName);
		    numBerserkers++;
		    break;
		  case 3:
		    battalion[i] = new Medic(givenName);
		    numMedics++;
		    break;
		  case 4:
		    battalion[i] = new Engineer(givenName);
		    numEngineers++;
		    break;
		  default:
		  	cout<<"Not an option- made a Berserker"<<endl;
		    battalion[i] = new Berserker(givenName);
		    numBerserkers++;
		}
		cout << endl;
	}

	cout<<endl;
	cout<<"****THE BATTALION****"<<endl;
	
	if (numSnipers > 0){
		cout<<"SNIPER(S):"<<endl;

		for (short i = 0; i < numWariors; i++){
		
			if (battalion[i]->getType() == "Sniper"){
				cout<<battalion[i]->getName()<<endl;
			}
		}
	}
	
	if (numBerserkers > 0){
		cout<<"BERSERKER(S):"<<endl;

		for (short i = 0; i < numWariors; i++){
		
			if (battalion[i]->getType() == "Berserker"){
				cout<<battalion[i]->getName()<<endl;
			}
		}
	}

	if (numMedics > 0){
		cout<<"MEDIC(S):"<<endl;

		for (short i = 0; i < numWariors; i++){
		
			if (battalion[i]->getType() == "Medic"){
				cout<<battalion[i]->getName()<<endl;
			}
		}
	}

	if (numEngineers > 0){
		cout<<"ENGINEER(S):"<<endl;

		for (short i = 0; i < numWariors; i++){
		
			if (battalion[i]->getType() == "Engineer"){
				cout<<battalion[i]->getName()<<endl;
			}
		}
	}
	
	
	cout<<endl;

	Zombie** horde = new Zombie*[numWariors];

	for (int i = 0; i < numWariors; ++i){
		horde[i] = new Zombie("bitey", (i+3));
	}


	cout<<numWariors<<" "<<horde[0]->getAttackType()<<" zombies have appeared!"<<endl;

	cout<<endl;

	for (int i = 0; i < numWariors; ++i){
		attackSuccess[i] = battalion[i]->attack(horde[i]);
		cout<<endl;
	}

	int j;
	int numSuccesses = 0;

	for (j = 0; j < numWariors; j++){
		if (attackSuccess[j] == true){
			numSuccesses++;
		}
	}

	if (numSuccesses == 0){
		cout<<"The zombies have taken over!"<<endl;
	}
	else if(numSuccesses == numWariors){
		cout<<"The battalion emerges victorius!"<<endl;

	}
	else {
		cout<<"While even 1 human remains, we will persevere!"<<endl;
	}

	cout<<endl;

	cout<<"4.1: Test your Soldier and Zombie classes by running a single apocalypse simulation using the test program provided"<<endl;
	
	cout<<endl;
	//4.1
	// This main provides a nice interface for testing your completed code.

	// initialize soldier factories (creators)
	const int numFactories = 4;
	SoldierFactory* factories[numFactories];
	factories[0] = new SniperFactory();
	factories[1] = new BerserkerFactory();
	factories[2] = new MedicFactory();
	factories[3] = new EngineerFactory();
	
	short numSoldiers;
	cout << "How may soldiers in your squad? ";
	cin >> numSoldiers;
	
	Soldier** soldiers = new Soldier*[numSoldiers];
	short type;
	char name[30];
	
	for (short i = 0; i < numSoldiers; i++)
	{
		cout << "What is the name of soldier " << i+1 << "? ";
		cin >> name;
		cout << endl;
		cout << "0 - Sniper" << endl;
		cout << "1 - Berserker" << endl;
		cout << "2 - Medic" << endl;
		cout << "3 - Engineer" << endl;
		cout << "What class is soldier " << i+1 << "? ";
		cin >> type;
		
		// The following line of code is a good example of the usefulness of the Factory Method.
		// Here, we are constructing an instance of a different class depending on use input.
		soldiers[i] = factories[type]->createSoldier(name);
	}
	
	// initialize zombie prototypes
	const short numZombieTypes = 3;
	Zombie** zombiePrototypes = new Zombie*[numZombieTypes];
	zombiePrototypes[0] = new Zombie("bite",2);
	zombiePrototypes[1] = new Zombie("slash",3);
	zombiePrototypes[2] = new Zombie("spit",4);
	zombiePrototypes[3] = new Zombie("pounce",5);
	
	Zombie** zombies = new Zombie*[numSoldiers];
	
	for (short i = 0; i < numSoldiers; i++)
	{
		cout << "0 - Biting zombie" << endl;
		cout << "1 - Slashing zombie" << endl;
		cout << "2 - Spitting zombie" << endl;
		cout << "3 - Pouncing zombie" << endl;
		cout << "What type is zombie #" << i+1 << "? ";
		cin >> type;
		
		// The following line of code is a good example of the usefulness of the Prototype design.
		// Since there can be a lot of the same kind of zombie (as is zombie nature), it is natural
		// to be able to duplicate them at will!
		zombies[i] = zombiePrototypes[type]->clone();
	}
	
	cout << "The long and bloody battle commences!" << endl;
	
	for (int i = 0; i < numSoldiers; i++)
	{
		soldiers[i]->attack(zombies[i]);
	}

	return 0;
}

/*
Example Input:
	How many people have gathered to defeat the horde? 5
	What is this brave soul's name? Joan
	What class is <name>? 2

	What is this brave soul's name? Will
	What class is <name>? 1

	What is this brave soul's name? Jana
	What class is <name>? 3

	What is this brave soul's name? Alec
	What class is <name>? 4

	What is this brave soul's name? Hope
	What class is <name>? 2

Expected Output:
	****THE BATTALION****
	SNIPER(S):
	Will
	BERSERKER(S):
	Joan
	Hope
	MEDIC(S):
	Tala
	ENGINEER(S):
	Alec

	5 bitey zombies have appeared!

	Berserker Joan swings a Big Chainsaw at the zombie's head.
	Zombie took 4 damage.
	Joan pretends not to notice the 3 damage she takes.
	Berserker Joan swings a Big Chainsaw at the zombie's head.
	Zombie took 4 damage.
	Joan slices the zombie in half!

	Sniper Will fires a .308 Rifle at the zombie.
	Zombie took 5 damage.
	Will exclaims 'Headshot!'

	Engineer Alec bludgeons the zombie with a Wrench
	Zombie took 3 damage.
	Alec hides behind the nearest rock after taking 5 damage.
	Engineer Alec bludgeons the zombie with a Wrench
	Zombie took 3 damage.
	Alec shakes his Wrench at the zombie's remains.

	Medic Tala frantically stabs at a zombie with a Syringe
	Zombie took 2 damage.
	Tala gives themself painkillers to numb the 6 damage suffered.
	Medic Tala frantically stabs at a zombie with a Syringe
	Zombie took 2 damage.
	Tala gives themself painkillers to numb the 6 damage suffered.
	After saving so many lives, Tala could not save themself.

	Berserker Hope swings a Big Chainsaw at the zombie's head.
	Zombie took 4 damage.
	Hope pretends not to notice the 7 damage she takes.
	Berserker Hope swings a Big Chainsaw at the zombie's head.
	Zombie took 4 damage.
	Hope slices the zombie in half!

	While even 1 human remains, we will persevere!

*/