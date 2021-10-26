#ifndef REMOTECONTROLVEHICLE_H
#define REMOTECONTROLVEHICLE_H

#include <iostream>
#include <string>

using namespace std;
class RemoteControlVehicle {
private:
	bool isOn; //representing the on/off state of the vehicle

public:

	RemoteControlVehicle(){
		isOn = false;
	};


	virtual void on()=0;

	virtual void off()=0;

	virtual void forward()=0;

	virtual void backward()=0;

	void setOn(){
		if (isOn == false)
			isOn = true;
		else
			isOn = false;
	};

	bool getOn(){
		return isOn;
	};

};

#endif