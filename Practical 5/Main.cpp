#include "RemoteControlVehicle.h"
#include "RemoteControlCar.h"
#include "RemoteControlPlane.h"
#include "RemoteControlRocket.h"
#include "RocketAdapter.h"

#include "Command.h"
#include "TurnOn.h"
#include "TurnOff.h"
#include "MoveForward.h"
#include "MoveBackward.h"
#include "Fly.h"
#include "Speed.h"

#include "Button.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	RemoteControlVehicle* zoomerPlane = new RemoteControlPlane();

	cout<<"****RemoteControlVehicle class (RemoteControlPlane)****"<<endl;
	zoomerPlane->on();
	zoomerPlane->forward();
	zoomerPlane->backward();
	zoomerPlane->off();
	cout<<endl;

	RemoteControlVehicle* zoomer = new RemoteControlCar();

	Command* onCommand = new TurnOn(zoomer);
	Command* offCommand = new TurnOff(zoomer);
	Command* forCommand = new MoveForward(zoomer);
	Command* backCommand = new MoveBackward(zoomer);

	//command tests
	cout<<"****RemoteControlVehicle class (RemoteControlCar)****"<<endl;

	cout<<"****Command class****"<<endl;
	onCommand->execute();
	onCommand->undo();

	offCommand->execute();
	offCommand->undo();

	forCommand->execute();
	forCommand->undo();

	backCommand->execute();
	backCommand->undo();
	cout<<endl;

	Button* onButton = new Button(onCommand);
	Button* offButton = new Button(offCommand);
	Button* goButton = new Button(forCommand);
	Button* backButton = new Button(backCommand);

	//button tests
	cout<<"****Button class****"<<endl;
	onButton->press();
	goButton->press();
	backButton->press();
	offButton->press();
	offButton->press();
	cout<<endl;

	//Rocket adapter tests -- 
	//YOU MUST ALSO EXPLICITLY SHOW WHERE YOU DEMONSTRATE THE ADAPTER PATTERN.

	RemoteControlVehicle* falcon9 = new RocketAdapter(new RemoteControlRocket());
	cout<<"****RocketAdapter class****"<<endl;
	falcon9->on();
	falcon9->forward();
	falcon9->backward();

	Button* rocketGoButton = new Button(new MoveForward(falcon9));
	rocketGoButton->press();

	Button* rocketPowerDown = new Button(new TurnOff(falcon9));
	rocketPowerDown->press();

	cout<<endl;
	

	return 0;
}