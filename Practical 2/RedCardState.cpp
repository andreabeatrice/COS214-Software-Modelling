#include "RedCardState.h"
#include <iostream>

using namespace std;

RedCardState::RedCardState(){
	this->setCardColor("red");
}

void RedCardState::handle(){
	cout<<"The player has already been sent off with a red card."<<endl;
}

CardState* RedCardState::changeCardState(){

	return NULL;
}