#ifndef CARDSTATE_H
#define CARDSTATE_H

#include <string>

using namespace std;

class CardState{

protected:
	string cardColor;

public:
	CardState(){};
	virtual void handle()=0;
	virtual CardState* changeCardState()=0;
	string getCardColour(){
		return cardColor;
	}
	void setCardColor(string cc){
		cardColor = cc;
	}
};

#endif