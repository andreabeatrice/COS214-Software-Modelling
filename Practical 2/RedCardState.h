#ifndef REDCARDSTATE_H
#define REDCARDSTATE_H

#include <string>
#include "CardState.h"

using namespace std;

class RedCardState : public CardState{

public:
	RedCardState();
	void handle();
	CardState* changeCardState();
};

#endif