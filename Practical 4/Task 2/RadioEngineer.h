#ifndef RADIOENGINEER_H
#define RADIOENGINEER_H

#include "AlarmState.h"
#include "Engineer.h"
#include "NetworkElement.h"
#include "BTS.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono;

//Create an Engineer class which will be the observer interface within the Observer pattern with the
//following specification:
class RadioEngineer : public Engineer{
private:
	AlarmState* alarmStatus;
	NetworkElement* _networkElement;

public:
	/*• a relevant constructor.*/
	RadioEngineer(){
		_networkElement = new BTS("BTS01");
		_networkElement->attach(this);
		alarmStatus = _networkElement->getAlarm();

		cout<<this->getName()<<" has entered the building."<<endl;
	};

	/*• a virtual destructor.*/
	~RadioEngineer() override{
		cout<<this->getName()<<" went home."<<endl;
	};

	RadioEngineer(string n, NetworkElement* ne){
		_networkElement = ne;

		this->setName(n);
		_networkElement->attach(this);
		alarmStatus = _networkElement->getAlarm();
		cout<<this->getName()<<" has entered the building."<<endl;
	};


	RadioEngineer(string n){
		this->setName(n);
		_networkElement = new BTS("BTS02");
		_networkElement->attach(this);
		alarmStatus = _networkElement->getAlarm();
		cout<<this->getName()<<" has entered the building."<<endl;
	};

	/*• a pure virtual function update() which will update the observer object with the state of the
	concrete subject to which it is registered.*/
	void update() override{
		alarmStatus = _networkElement->getAlarm();
		this->fixIt();

	};

	void fixIt(){
		int x = alarmStatus->getAlarmState().compare("clear");

		if (x != 0){
			sleep_for(seconds(1));

			_networkElement->resetAlarm();

			alarmStatus = _networkElement->getAlarm();

			cout<<_networkElement->getName()<<" has been fixed and it back to "<<_networkElement->getAlarmString()<<"."<<endl;

			
		}
		else {
			cout<<this->getName()<<" will be alerted that the problem has been solved."<<endl;
		}
	};

};

#endif