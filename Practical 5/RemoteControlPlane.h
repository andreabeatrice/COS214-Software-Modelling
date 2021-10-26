#ifndef REMOTECONTROLPLANE_H
#define REMOTECONTROLPLANE_H

#include <iostream>
#include <string>
#include "RemoteControlVehicle.h"

using namespace std;
class RemoteControlPlane: public RemoteControlVehicle{

public:

	RemoteControlPlane() : RemoteControlVehicle() {

	};


	void on(){
		
		if(this->getOn() == false){
			setOn();
			cout<<"RC plane is turned on."<<endl;
		}
		else {
			cout<<"RC plane is already on."<<endl;
		}

	};

	void off(){
		
		if(this->getOn() == true){
			setOn();
			cout<<"RC plane is turned off."<<endl;
		}
		else {
			cout<<"RC plane is already off."<<endl;
		}

	};

	void forward(){
		
		if(this->getOn()){
			cout<<"RC plane pulls up into a vertical climb."<<endl;
		}
		else {
			cout<<"RC plane is off."<<endl;
		}

	};

	void backward(){
		
		if(this->getOn()){
			cout<<"RC plane points its nose down into a dive."<<endl;
		}
		else {
			cout<<"RC plane is off."<<endl;
		}

	};

};

#endif