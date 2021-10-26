#ifndef LIVERPOOLSOCCERBALL_H
#define LIVERPOOLSOCCERBALL_H

#include <string>
#include "SoccerBall.h"

using namespace std;

class LiverpoolSoccerBall :  public SoccerBall{

public:
	LiverpoolSoccerBall();

	LiverpoolSoccerBall(bool i, double p);
	
};

#endif