#ifndef TURNOFF_H
#define TURNOFF_H

#include <iostream>
#include <string>
#include "Command.h"
#include "RemoteControlVehicle.h"

using namespace std;
class TurnOff : public Command {

public:

	TurnOff(RemoteControlVehicle* r) : Command(r){
		//receiver = r;
	};


	void execute(){
		this->getReceiver()->off();

	};

	void undo(){
		this->getReceiver()->on();
	};

	string commandType(){
		return "off";
	};


};

#endif