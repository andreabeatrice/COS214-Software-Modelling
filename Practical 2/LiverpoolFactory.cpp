#include <string>
#include "MerchandiseFactory.h"
#include "LiverpoolFactory.h"
#include "LiverpoolShirt.h"
#include "LiverpoolSoccerBall.h"

using namespace std;

LiverpoolShirt* LiverpoolFactory::createShirt(char si, double p){
	return new LiverpoolShirt(si, p);
}

LiverpoolSoccerBall* LiverpoolFactory::createSoccerBall(bool i, double p){
	return new LiverpoolSoccerBall(i, p);
}