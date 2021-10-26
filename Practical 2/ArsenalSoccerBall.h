#ifndef ARSENALSOCCERBALL_H
#define ARSENALSOCCERBALL_H

#include <string>
#include "SoccerBall.h"

using namespace std;

class ArsenalSoccerBall :  public SoccerBall{

public:
	ArsenalSoccerBall();

	ArsenalSoccerBall(bool i, double p);
	
};

#endif