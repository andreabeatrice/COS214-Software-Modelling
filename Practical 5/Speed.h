#ifndef SPEED_H
#define SPEED_H

#include <iostream>
#include <string>
#include "Command.h"
#include "RemoteControlVehicle.h"

using namespace std;
class Speed : public Command {

public:

	Speed(RemoteControlVehicle* r) : Command(r){
		//receiver = r;
	};


	void execute(){
		this->getReceiver()->forward();

	};

	void undo(){
		this->getReceiver()->backward();
	};

	string commandType(){
		return "speed";
	};
};

#endif