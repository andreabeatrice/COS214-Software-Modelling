#ifndef MSC_H
#define MSC_H

#include "NetworkElement.h"
#include "AlarmState.h"
 
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MSC : public NetworkElement { /*Mobile Switching Centre*/
private:

	/*The concrete subjects must override the functions defined as virtual in the subject participant. In
	addition to this, each concrete subject must have the following:*/


public:
	~MSC() override{
		delete this->getAlarm();
		cout<<"Switching off Mobile Switching Centre "<<this->getName()<<endl;
	};

	/*• The constructor must at least be parameterized with the name attribute or alternatively imple-
	ment a setter and a getter for this attribute.*/

	MSC(string n){
		this->setName(n);
		this->setAlarm("clear");
	};

	MSC(){
		this->setName("MSC");
		this->setAlarm("clear");
	};


	

};

#endif