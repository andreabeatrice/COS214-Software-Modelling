#ifndef LIVERPOOLFACTORY_H
#define LIVERPOOLFACTORY_H

#include <string>
#include "MerchandiseFactory.h"
#include "LiverpoolShirt.h"
#include "LiverpoolSoccerBall.h"

using namespace std;

class LiverpoolFactory : public MerchandiseFactory
{
public:
	LiverpoolFactory(){};

	~LiverpoolFactory(){};
	
	LiverpoolShirt* createShirt(char si, double p);

	LiverpoolSoccerBall* createSoccerBall(bool i, double p);
};

#endif