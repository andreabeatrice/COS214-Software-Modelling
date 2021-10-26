#include "NetworkElement.h"
#include "Engineer.h"
#include <iostream>
#include <string>
#include <vector>

void NetworkElement::attach(Engineer* e){
	engineersList.push_back(e);
}

void NetworkElement::detach(Engineer* e){
	vector<Engineer*>::iterator ptr;
	int i = 0;
	for (ptr = engineersList.begin(); ptr < engineersList.end(); ptr++, i++){
		if ((*ptr) == e){
			engineersList.erase(engineersList.begin()+i);
		}

	}
}

/*	• a notify() function which will inform all engineers tending to the network element that there
	is a fault or any other alarm condition on the network element. The function must print an
	appropriate message for each engineer being notified: e.g. networkElement.name + “changed
	status to” + networkElement.alarmState + “! Notifying” + engineer.name + “...”
*/

void NetworkElement::notify(){
	vector<Engineer*>::iterator ptr;

	for (ptr = engineersList.begin(); ptr < engineersList.end(); ptr++){
		cout<<this->name<<" changed status to "<<this->getAlarm()->getAlarmState()<<"! Notifying "<<(*ptr)->getName()<<"."<<endl;
	}

	for (ptr = engineersList.begin(); ptr < engineersList.end(); ptr++){
		(*ptr)->update();
	}
}
