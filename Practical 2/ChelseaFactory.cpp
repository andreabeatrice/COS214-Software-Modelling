#include <string>
#include "MerchandiseFactory.h"
#include "ChelseaFactory.h"
#include "ChelseaShirt.h"
#include "ChelseaSoccerBall.h"

using namespace std;

ChelseaShirt* ChelseaFactory::createShirt(char si, double p){
	return new ChelseaShirt(si, p);
}

ChelseaSoccerBall* ChelseaFactory::createSoccerBall(bool i, double p){
	return new ChelseaSoccerBall(i, p);
}