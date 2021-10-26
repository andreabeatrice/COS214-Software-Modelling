#include <string>
#include <iostream>
#include "MerchandiseFactory.h"
#include "ArsenalFactory.h"
#include "ArsenalShirt.h"
#include "ArsenalSoccerBall.h"

using namespace std;

ArsenalShirt* ArsenalFactory::createShirt(char si, double p) {
	return new ArsenalShirt(si, p);
}

ArsenalSoccerBall* ArsenalFactory::createSoccerBall(bool i, double p){
	return new ArsenalSoccerBall(i, p);
}