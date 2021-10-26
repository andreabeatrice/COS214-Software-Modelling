#ifndef REMOTECONTROLROCKET_H
#define REMOTECONTROLROCKET_H

#include <iostream>
#include <string>

using namespace std;
class RemoteControlRocket {

public:

	RemoteControlRocket() {

	};


	void takeOff(){
		cout<<"RC rocket blasts off its take-off platform."<<endl;

	};

	void stopLaunch(){
		cout<<"RC rocket deploys its parachute and floats down to the ground."<<endl;
	};

	void increaseThrottle(){
		cout<<"The RC rocket increases its throttle and accelerates."<<endl;

	};

	void decreaseThrottle(){
		cout<<"RC rocket decreases its throttle and ascends at a slower rate."<<endl;
	};

};

#endif