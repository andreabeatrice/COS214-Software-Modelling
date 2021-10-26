#include "Merchandise.h"
#include <iostream>


Merchandise::Merchandise(){
	cout<<"Creating - ";
	id = sumMerch++;
	
}

Merchandise::Merchandise(const char* c, double p, char t){
	club = c;
	price = p;
	type = t;
	//id = new Counter();
}

Merchandise::~Merchandise()
{

}