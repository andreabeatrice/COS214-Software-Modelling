#ifndef ALARMSTATE_H
#define ALARMSTATE_H

#include <string>

using namespace std;

class AlarmState{

private:
	string alarm;

public:
	AlarmState(){};

	AlarmState(string S){
		alarm = S;

	};


	~AlarmState(){
		cout<<"Removing alarm state."<<endl;
	};

	void setAlarmState(string s){
		alarm = s;
	};

	string getAlarmState(){
		return alarm;
	}
};

#endif