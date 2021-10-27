#ifndef REMOTECONTROLCAR_H
#define REMOTECONTROLCAR_H

#include <iostream>
#include <string>
#include "RemoteControlVehicle.h"

using namespace std;
class RemoteControlCar: public RemoteControlVehicle{

public:
	RemoteControlVehicle* nextHandler;

	RemoteControlCar() : RemoteControlVehicle() {

	};

	RemoteControlCar(RemoteControlVehicle* nextHandler) : RemoteControlVehicle() {
		this->nextHandler = nextHandler;
	};

	void handleRequest(string cmd){
		if(cmd.compare("speed") == 0){
			if(this->getOn())
				cout<<"RC car accelerates."<<endl;
			else
				cout<<"RC car is off."<<endl;
		}
		else if (this->nextHandler != NULL){
			this->nextHandler->handleRequest(cmd);
		}
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