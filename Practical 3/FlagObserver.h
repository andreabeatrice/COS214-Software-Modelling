#ifndef FLAGOBSERVER_H
#define FLAGOBSERVER_H

#include "Observer.h"
#include "Track.h"
#include <iostream>
#include <string>

using namespace std;

class FlagObserver : public Observer{

public:
	Track* raceTrack;
	bool waving;


	FlagObserver(Track*);

	~FlagObserver(){};

	void print();

	void update();
};

#endif