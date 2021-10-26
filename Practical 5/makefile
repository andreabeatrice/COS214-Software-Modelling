ofiles = Main.o
gpp_o = g++ -g -c -std=c++11 -static

Main: $(ofiles)
	g++ -g -std=c++11 -static $(ofiles) -o Main

Main.o: Main.cpp
	$(gpp_o) Main.cpp

RemoteControlVehicle.o: RemoteControlVehicle.cpp RemoteControlVehicle.h 
	$(gpp_o) RemoteControlVehicle.cpp

RemoteControlCar.o: RemoteControlCar.cpp RemoteControlCar.h RemoteControlVehicle.h
	$(gpp_o) RemoteControlCar.cpp

RemoteControlPlane.o: RemoteControlPlane.cpp RemoteControlPlane.h RemoteControlVehicle.h
	$(gpp_o) RemoteControlPlane.cpp

Command.o: Command.cpp Command.h 
	$(gpp_o) Command.cpp

TurnOn.o: TurnOn.cpp TurnOn.h Command.h RemoteControlVehicle.h 
	$(gpp_o) TurnOn.cpp

TurnOff.o: TurnOff.cpp TurnOff.h Command.h RemoteControlVehicle.h 
	$(gpp_o) TurnOff.cpp

MoveForward.o: MoveForward.cpp MoveForward.h Command.h RemoteControlVehicle.h 
	$(gpp_o) MoveForward.cpp

MoveBackward.o: MoveBackward.cpp MoveBackward.h Command.h RemoteControlVehicle.h 
	$(gpp_o) MoveBackward.cpp

Button.o: Button.cpp Button.h Command.h
	$(gpp_o) Button.cpp

RemoteControlRocket.o: RemoteControlRocket.cpp RemoteControlRocket.h
	$(gpp_o) RemoteControlRocket.cpp

RocketAdapter.o: RocketAdapter.cpp RocketAdapter.h RemoteControlRocket.h RemoteControlVehicle.h
	$(gpp_o) RocketAdapter.cpp

run: Main
	./Main

clean:
	rm *.o Main
