#ifndef CHELSEAFACTORY_H
#define CHELSEAFACTORY_H

#include <string>
#include "MerchandiseFactory.h"
#include "ChelseaShirt.h"
#include "ChelseaSoccerBall.h"

using namespace std;

class ChelseaFactory : public MerchandiseFactory
{
public:
	ChelseaFactory(){};

	~ChelseaFactory(){};
	
	ChelseaShirt* createShirt(char si, double p);

	ChelseaSoccerBall* createSoccerBall(bool i, double p);
};

#endif