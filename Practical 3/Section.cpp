#include "Observer.h"
#include "Section.h"
#include <iostream>
#include <string>
#include <vector>

void Section::attach(Observer* o){
	observerList.push_back(o);
}

void Section::detatch(Observer* o){
	vector<Observer*>::iterator ptr;
	int i = 0;
	for (ptr = observerList.begin(); ptr < observerList.end(); ptr++, i++){
		if ((*ptr) == o){
			observerList.erase(observerList.begin()+i);
		}

	}
	//remove(observerList.begin(),observerList.end(),o);
}

void Section::notify(){
	vector<Observer*>::iterator ptr;

	for (ptr = observerList.begin(); ptr < observerList.end(); ptr++){
		(*ptr)->update();
	}
}