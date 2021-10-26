#ifndef ROCKETADAPTER_H
#define ROCKETADAPTER_H

#include <iostream>
#include <string>
#include "RemoteControlRocket.h"
#include "RemoteControlVehicle.h"

using namespace std;

class RocketAdapter :public RemoteControlVehicle{
private:

	RemoteControlRocket* adaptee;

public:

	RocketAdapter(RemoteControlRocket* r) : RemoteControlVehicle() {
		adaptee = r;
	};


	void on(){
		if(this->getOn() == false){
			adaptee->takeOff();
			setOn();
		}
		else {
			cout<<"RC rocket has already taken off."<<endl;
		}
	};

	void off(){
		if(this->getOn() == true){
			adaptee->stopLaunch();
			setOn();
		}
		else {
			cout<<"RC rocket is already on the ground."<<endl;
		}
	};

	void forward(){
		if(this->getOn()){
			adaptee->increaseThrottle();
		}
		else {
			cout<<"RC rocket hasn't taken off."<<endl;
		}
	};

	void backward(){
		if(this->getOn()){
			adaptee->decreaseThrottle();
		}
		else {
			cout<<"RC rocket hasn't taken off."<<endl;
		}
	};

};

#endif