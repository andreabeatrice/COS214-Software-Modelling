#ifndef TURNON_H
#define TURNON_H

#include <iostream>
#include <string>
#include "Command.h"
#include "RemoteControlVehicle.h"

using namespace std;
class TurnOn : public Command {

public:

	TurnOn(RemoteControlVehicle* r) : Command(r){
		//receiver = r;
	};


	void execute(){
		this->getReceiver()->on();

	};

	void undo(){
		this->getReceiver()->off();
	};

	string commandType(){
		return "on";
	};
};

#endif