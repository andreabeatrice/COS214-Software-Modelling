#ifndef GGSN_H
#define GGSN_H

#include "NetworkElement.h"
#include "AlarmState.h"
 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class GGSN : public NetworkElement { /*Gateway GPRS Support Node*/
private:

	/*The concrete subjects must override the functions defined as virtual in the subject participant. In
	addition to this, each concrete subject must have the following:*/


public:
	~GGSN() override{
		delete this->getAlarm();
		cout<<"Switching off Gateway GPRS Support Node "<<this->getName()<<endl;
	};

	/*• The constructor must at least be parameterized with the name attribute or alternatively imple-
	ment a setter and a getter for this attribute.*/


	GGSN(string n){
		this->setName(n);
		this->setAlarm("clear");
	};

	GGSN(){
		this->setName("GGSN");
		this->setAlarm("clear");
	};


	

};

#endif