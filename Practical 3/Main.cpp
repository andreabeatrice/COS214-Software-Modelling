#include "Section.h"
#include "Straight.h"
#include "Turn.h"
#include "Chicane.h"
#include "Track.h"
#include "Decorator.h"
#include "Barrier.h"
#include "GravelTrap.h"
#include "Pitstop.h"
#include "Startline.h"
#include "Observer.h"
#include "FlagObserver.h"

#include <string>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;


int main(){

	Track* raceTrack = new Track();
	char in[] = "";
	int dec;
	int numSection =0;

	while(strcmp(in, "X") != 0 && strcmp(in, "x") != 0){
		cout << "1 - Straight" << endl;
		cout << "2 - Right Turn" << endl;
		cout << "3 - Left Turn" << endl;
		cout << "4 - Chicane" << endl;
		cout<<"The next section of the race track is a? [X to end track] ";
		cin >> in;

		int sw = atoi(in);
		Section* nextPiece;
		Section* pieceDecor;

		switch(sw){
			case 1:
				nextPiece = new Straight();
				numSection++;
			break;
			case 2:
				nextPiece = new Turn(0);
				numSection++;
			break;
			case 3:
				nextPiece = new Turn(180);
				numSection++;
			break;
			case 4:
				nextPiece = new Chicane();
				numSection++;
			break;
			default:
				nextPiece = NULL;
			break;
		}

		if(nextPiece!=NULL){
			if (numSection==1){
				pieceDecor = new Startline();
				pieceDecor->add(nextPiece);
				raceTrack->add(pieceDecor);
			}
			else {
				cout << "0 - No details" << endl;
				cout << "1 - Barrier" << endl;
				cout << "2 - Gravel Trap" << endl;
				cout << "3 - Pit Stop" << endl;
				
				cout<<"What kind of extra details does this piece of track have? ";
				cin>>dec;

				switch(dec){
					case 0:
						pieceDecor = nextPiece;
						//pieceDecor = new Chicane();
						numSection++;
					break;
					case 1:
						pieceDecor = new Barrier();
						pieceDecor->add(nextPiece);
						numSection++;
					break;
					case 2:
						pieceDecor = new GravelTrap();
						pieceDecor->add(nextPiece);
						numSection++;
					break;
					case 3:
						pieceDecor = new Pitstop();
						pieceDecor->add(nextPiece);
						numSection++;
					break;
					default:
						pieceDecor = nextPiece;
					break;
				}

				raceTrack->add(pieceDecor);
			}
		}
	}

	raceTrack->print();


	return 0;
}