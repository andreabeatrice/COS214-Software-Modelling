#ifndef SOCCERPLAYER_H
#define SOCCERPLAYER_H

#include <string>
#include "CardState.h"
#include "PlayStyle.h"

using namespace std;

class SoccerPlayer{

private:
	string name;
	CardState* state;
	PlayStyle* strategy;

public:
	SoccerPlayer();
	SoccerPlayer(string _name, PlayStyle* _playstyle);
	void commitFoul();
	void play();
	void setPlayStyle(PlayStyle* _playstyle){
		strategy = _playstyle;
	}
	
};

#endif