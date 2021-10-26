#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <string>
#include "RemoteControlVehicle.h"

using namespace std;
class Command {
private:

	RemoteControlVehicle* receiver;

public:

	Command(RemoteControlVehicle* r){
		receiver = r;
	};


	virtual void execute()=0;

	virtual void undo()=0;

	virtual string commandType()=0;

	RemoteControlVehicle* getReceiver(){
		return receiver;
	}

};

#endif