#ifndef SECTION_H
#define SECTION_H

#include "Observer.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Section{

public:
	vector<Observer*> observerList;

	Section(){
		
	};

	~Section(){};

	virtual void print() =0;

	virtual void add(Section*){};
	
	virtual void remove(){};

	void attach(Observer*);

	void detatch(Observer*);

	void notify();
};

#endif