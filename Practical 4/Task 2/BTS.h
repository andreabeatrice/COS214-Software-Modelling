#ifndef BTS_H
#define BTS_H

#include "NetworkElement.h"
#include "AlarmState.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BTS : public NetworkElement { /*Base Transceiver Station*/
private:

	/*The concrete subjects must override the functions defined as virtual in the subject participant. In
	addition to this, each concrete subject must have the following:*/


public:
	~BTS() override{
		delete this->getAlarm();
		cout<<"Switching off Base Transceiver Station "<<this->getName()<<endl;
	};

	/*• The constructor must at least be parameterized with the name attribute or alternatively imple-
	ment a setter and a getter for this attribute.*/

	BTS(string n){
		this->setName(n);
		this->setAlarm("clear");
	};

	BTS(){
		this->setName("BTS");
		this->setAlarm("clear");
	};


};

#endif