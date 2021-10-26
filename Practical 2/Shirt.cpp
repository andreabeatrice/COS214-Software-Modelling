#include "Merchandise.h"
#include "Shirt.h"

#include <iostream>



Shirt::Shirt(const char* c, double p, char s) : Merchandise(){
	this->setClub(c);
	this->setPrice(p);
	this->setType("Shirt");
	size.push_back(s);
	cout<<this->getDescription();
}

Shirt::Shirt(){

}

Shirt::Shirt(char si, double p){
	
}

Shirt::~Shirt()
{

}

string Shirt::getDescription(){
	string price = to_string(this->getPrice());
	price = price.substr(0,5);
	string result =  "Item #" + to_string(this->getID())  + ": " + this->getClub() + " " + this->getType() + ", Price: " + price + ", Size: " + size + "\n";


	return result;
}


