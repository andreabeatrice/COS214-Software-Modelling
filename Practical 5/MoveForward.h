#ifndef MOVEFORWARD_H
#define MOVEFORWARD_H

#include <iostream>
#include <string>
#include "Command.h"
#include "RemoteControlVehicle.h"

using namespace std;
class MoveForward : public Command {

public:

	MoveForward(RemoteControlVehicle* r) : Command(r){
		//receiver = r;
	};


	void execute(){
		this->getReceiver()->forward();

	};

	void undo(){
		this->getReceiver()->backward();
	};

	string commandType(){
		return "forward";
	};
};

#endif