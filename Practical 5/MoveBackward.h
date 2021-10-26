#ifndef MOVEBACKWARD_H
#define MOVEBACKWARD_H

#include <iostream>
#include <string>
#include "Command.h"
#include "RemoteControlVehicle.h"

using namespace std;
class MoveBackward : public Command {

public:

	MoveBackward(RemoteControlVehicle* r) : Command(r){
		//receiver = r;
	};


	void execute(){
		this->getReceiver()->backward();

	};

	void undo(){
		this->getReceiver()->forward();
	};

	string commandType(){
		return "backward";
	};
};

#endif