#ifndef REMOTECONTROLCAR_H
#define REMOTECONTROLCAR_H

#include <iostream>
#include <string>
#include "RemoteControlVehicle.h"

using namespace std;
class RemoteControlCar: public RemoteControlVehicle{

public:

	RemoteControlCar() : RemoteControlVehicle() {

	};


	void on(){
		
		if(this->getOn() == false){
			setOn();
			cout<<"RC car is turned on."<<endl;
		}
		else {
			cout<<"RC car is already on."<<endl;
		}

	};

	void off(){
		
		if(this->getOn() == true){
			setOn();
			cout<<"RC car is turned off."<<endl;
		}
		else {
			cout<<"RC car is already off."<<endl;
		}

	};

	void forward(){
		
		if(this->getOn()){
			cout<<"RC car drives forward quickly."<<endl;
		}
		else {
			cout<<"RC car is off."<<endl;
		}

	};

	void backward(){
		
		if(this->getOn()){
			cout<<"RC car reverses backward carfully."<<endl;
		}
		else {
			cout<<"RC car is off."<<endl;
		}

	};

	

};

#endif