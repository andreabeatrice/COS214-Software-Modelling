#ifndef YELLOWCARDSTATE_H
#define YELLOWCARDSTATE_H

#include <string>
#include "CardState.h"

using namespace std;

class YellowCardState : public CardState{

public:
	YellowCardState();
	void handle();
	CardState* changeCardState();
};

#endif