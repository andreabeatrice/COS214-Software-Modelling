#include "NoCardState.h"
#include "YellowCardState.h"
#include <iostream>

using namespace std;

NoCardState::NoCardState(){
	this->setCardColor("none");
}

void NoCardState::handle(){
	cout<<"The player hasn’t committed any previous fouls, and will now be given a yellow card."<<endl;
}

CardState* NoCardState::changeCardState(){

	return new YellowCardState();
}