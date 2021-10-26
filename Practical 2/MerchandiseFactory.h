#ifndef MERCHANDISEFACTORY_H
#define MERCHANDISEFACTORY_H

#include <string>
#include <iostream>
#include "Merchandise.h"
#include "Shirt.h"
#include "SoccerBall.h"

using namespace std;

class MerchandiseFactory
{
public:
	MerchandiseFactory(){
		
	};

	~MerchandiseFactory(){};
	
	virtual Shirt* createShirt(char si, double p) = 0;

	virtual SoccerBall* createSoccerBall(bool i, double p) = 0;
};

#endif