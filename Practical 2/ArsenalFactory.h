#ifndef ARSENALFACTORY_H
#define ARSENALFACTORY_H

#include <string>
#include "MerchandiseFactory.h"
#include "ArsenalShirt.h"
#include "ArsenalSoccerBall.h"

using namespace std;

class ArsenalFactory : public MerchandiseFactory
{
public:
	ArsenalFactory(){};

	~ArsenalFactory(){};
	
	ArsenalShirt* createShirt(char si, double p);

	ArsenalSoccerBall* createSoccerBall(bool i, double p);
};

#endif