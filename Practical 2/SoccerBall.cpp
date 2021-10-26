#include "Merchandise.h"
#include "SoccerBall.h"

#include <iostream>
#include <string>


SoccerBall::SoccerBall(const char* c, double p, bool i) : Merchandise(){
	this->setClub(c);
	this->setPrice(p);
	this->setType("Ball");
	inflated = i;
	cout<<this->getDescription();
}

SoccerBall::SoccerBall(){

}

SoccerBall::SoccerBall(bool i, double p){

}


SoccerBall::~SoccerBall()
{

}

string SoccerBall::getDescription(){

	string i;

	if (inflated)
		i = "True";
	else
		i = "False";

	string price = to_string(this->getPrice());
	price = price.substr(0,5);

	string result = "Item #"  + to_string(this->getID())+ ": " + this->getClub() + " " + this->getType() + ", Price: " + price + ", Inflated: " + i + "\n";


	return result;
}


