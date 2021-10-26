#ifndef BUTTON_H
#define BUTTON_H

#include <iostream>
#include <string>
#include "Command.h"

using namespace std;
class Button {
private:

	Command* command;

public:

	Button(Command* c){
		command = c;
	};


	void press(){
		command->execute();
	};


};

#endif