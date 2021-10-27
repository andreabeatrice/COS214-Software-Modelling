#ifndef REMOTECONTROLPLANE_H
#define REMOTECONTROLPLANE_H

#include <iostream>
#include <string>
#include "RemoteControlVehicle.h"

using namespace std;
class RemoteControlPlane: public RemoteControlVehicle{

public:
	RemoteControlVehicle* nextHandler;

	RemoteControlPlane() : RemoteControlVehicle() {

	};

	RemoteControlPlane(RemoteControlVehicle* nextHandler) : RemoteControlVehicle() {
		this->nextHandler = nextHandler;
	};

	void handleRequest(string cmd){
		if(cmd.compare("fly") == 0){
			if(this->getOn())
				cout<<"RC plane flies higher."<<endl;
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