#ifndef CSCOREENGINEER_H
#define CSCOREENGINEER_H

#include "AlarmState.h"
#include "Engineer.h"
#include "NetworkElement.h"
#include "MSC.h"
#include <iostream>
#include <string>

using namespace std;

//Create an Engineer class which will be the observer interface within the Observer pattern with the
//following specification:
class CSCoreEngineer : public Engineer{
private:
	AlarmState* alarmStatus;
	NetworkElement* _networkElement;

public:
	/*• a relevant constructor.*/
	CSCoreEngineer(){
		_networkElement = new MSC("MSC01");
		_networkElement->attach(this);
		alarmStatus = _networkElement->getAlarm();

		cout<<this->getName()<<" has entered the building."<<endl;
	};

	/*• a virtual destructor.*/
	~CSCoreEngineer() override{

		cout<<this->getName()<<" went home."<<endl;
	};

	CSCoreEngineer(string n, NetworkElement* ne){
		_networkElement = ne;

		this->setName(n);
		_networkElement->attach(this);
		alarmStatus = _networkElement->getAlarm();
		cout<<this->getName()<<" has entered the building."<<endl;
	};


	CSCoreEngineer(string n){
		this->setName(n);
		_networkElement = new MSC("MSC02");
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
			cout<<this->getName()<<" will be alerted that the problem has been solved!"<<endl;
		}
	};
};

#endif