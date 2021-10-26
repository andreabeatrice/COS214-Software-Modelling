#ifndef BSC_H
#define BSC_H

#include "NetworkElement.h"
#include "AlarmState.h"
 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BSC : public NetworkElement { /*Base Station Controller*/
private:

	/*The concrete subjects must override the functions defined as virtual in the subject participant. In
	addition to this, each concrete subject must have the following:*/


public:
	~BSC() override{
		delete this->getAlarm();
		cout<<"Switching off Base Station Controller "<<this->getName()<<endl;
	};

	/*• The constructor must at least be parameterized with the name attribute or alternatively imple-
	ment a setter and a getter for this attribute.*/

	BSC(string n){
		this->setName(n);
		this->setAlarm("clear");
	};

	BSC(){
		this->setName("BSC");
		this->setAlarm("clear");
	};


	

};

#endif