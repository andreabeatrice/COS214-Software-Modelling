#ifndef SOCCERBALL_H
#define SOCCERBALL_H

#include <string>
#include "Merchandise.h"

using namespace std;

class SoccerBall :  public Merchandise{
private:
	bool inflated;

public:
	SoccerBall(const char* c, double p, bool i);

	SoccerBall();

	SoccerBall(bool i, double p);

	virtual ~SoccerBall();

	string getDescription();
	
};

#endif