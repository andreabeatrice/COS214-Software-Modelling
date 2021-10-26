#ifndef NETWORKELEMENT_H
#define NETWORKELEMENT_H

#include <iostream>
#include <string>
#include <vector>
#include "Engineer.h"
#include "AlarmState.h"

using namespace std;

//Create a NetworkElement class that will represent the Subject participant in the Observer Design
//pattern with the following specification:
class NetworkElement {
private:
	/*• a list of engineers using any data structure of your choice.*/
	vector<Engineer*> engineersList;

	AlarmState* alarmState;

	string name;

public:
	/*	• a virtual destructor.*/
	virtual ~NetworkElement(){};

	/*	• an attach() function which takes a reference to an Engineer to allow a newly-employed engineer
			to register for maintaining the network element.*/
	void attach(Engineer*);


	/*	• a detach() function to allow an engineer who is resigning to deregister for maintenance of the
			network element.*/
	void detach(Engineer*);
		
	/*	• a notify() function which will inform all engineers tending to the network element that there
			is a fault or any other alarm condition on the network element. The function must print an
			appropriate message for each engineer being notified: e.g. networkElement.name + “changed
			status to” + networkElement.alarmState + “! Notifying” + engineer.name + “...”*/
	void notify();
	
	/*• a relevant constructor.*/
	NetworkElement(string n, string aS){
		cout<<"Powering up "<<name<<endl;
	};


	NetworkElement(string n){
		cout<<"Powering up "<<name<<endl;

	};

	NetworkElement(){};

	vector<Engineer*> getEngineersList(){
		return engineersList;
	}

	/*• a getAlarm() function that returns the alarm status of the node.*/
	AlarmState* getAlarm(){
		return alarmState;
	}

	void setAlarm(string aS){
		alarmState = new AlarmState(aS);
		this->notify();
	}

	void changeAlarm(string aS){
		alarmState->setAlarmState(aS);
		this->notify();
	}

	void resetAlarm(){
		alarmState->setAlarmState("clear");
	}

	string getAlarmString(){
		return alarmState->getAlarmState();
	}

	void setName(string n){
		name = n;
	};

	string getName(){
		return name;
	}

};

#endif