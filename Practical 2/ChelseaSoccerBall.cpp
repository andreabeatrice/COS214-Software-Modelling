#include "ChelseaSoccerBall.h"
#include "SoccerBall.h"

#include <iostream>
#include <string>


ChelseaSoccerBall::ChelseaSoccerBall() : SoccerBall("Chelsea", 23, true){
	//new SoccerBall("Chelsea", 23, true);
}

ChelseaSoccerBall::ChelseaSoccerBall(bool i, double p) : SoccerBall("Chelsea", p, i){

}


