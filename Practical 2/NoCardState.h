#ifndef NOCARDSTATE_H
#define NOCARDSTATE_H

#include "CardState.h"
#include <string>

using namespace std;

class NoCardState : public CardState {

public:
	NoCardState();
	void handle();
	CardState* changeCardState();
};

#endif