#include "SoccerPlayer.h"
#include "NoCardState.h"
#include "YellowCardState.h"
#include "RedCardState.h"
#include <string>
#include <iostream>

SoccerPlayer::SoccerPlayer(){
	state = new NoCardState();
}

void SoccerPlayer::commitFoul(){
	state->handle();
	state = state->changeCardState();
}

SoccerPlayer::SoccerPlayer(string _name, PlayStyle* _playstyle){
	state = new NoCardState();
	name = _name;
	strategy = _playstyle;
}

void SoccerPlayer::play(){
	if (state->getCardColour().compare("red") == 0){
		cout<<"The player cannot demonstrate their play-style, as they have been sent off."<<endl;
	}
	else {
		cout<<name<<strategy->play();
	}
}