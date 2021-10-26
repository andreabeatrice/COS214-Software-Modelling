#ifndef FLY_H
#define FLY_H

#include <iostream>
#include <string>
#include "Command.h"
#include "RemoteControlVehicle.h"

using namespace std;
class Fly : public Command {

public:

	Fly(RemoteControlVehicle* r) : Command(r){
		//receiver = r;
	};


	void execute(){
		this->getReceiver()->on();

	};

	void undo(){
		this->getReceiver()->off();
	};

	string commandType(){
		return "fly";
	};
};

#endif