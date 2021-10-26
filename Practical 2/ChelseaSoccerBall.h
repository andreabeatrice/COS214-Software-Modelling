#ifndef CHELSEASOCCERBALL_H
#define CHELSEASOCCERBALL_H

#include <string>
#include "SoccerBall.h"

using namespace std;

class ChelseaSoccerBall :  public SoccerBall{

public:
	ChelseaSoccerBall();

	ChelseaSoccerBall(bool i, double p);
	
};

#endif