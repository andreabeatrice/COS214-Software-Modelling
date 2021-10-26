#include "Merchandise.h"
#include "SoccerBall.h"
#include "ChelseaSoccerBall.h"
#include "ArsenalSoccerBall.h"
#include "LiverpoolSoccerBall.h"
#include "Shirt.h"
#include "ChelseaShirt.h"
#include "ArsenalShirt.h"
#include "LiverpoolShirt.h"
#include "ArsenalFactory.h"
#include "ChelseaFactory.h"
#include "LiverpoolFactory.h"
#include "SoccerPlayer.h"
#include "NoCardState.h"
#include "YellowCardState.h"
#include "RedCardState.h"
#include "AttackPlayStyle.h"
#include "DefendPlayStyle.h"
#include "PossessionPlayStyle.h"

#include <string>
#include <iostream>

using namespace std;

int Merchandise::sumMerch = 1;

void printClubs(string x){
		
		cout << "1 - Arsenal" << endl;
		cout << "2 - Chelsea" << endl;
		cout << "3 - Liverpool" << endl;
		cout<<"Which club is this "<<x<<" for? ";
/*		cin >> club;
		cout<<endl;*/
}

int main(){

	//Task 3
	short numMerch;
	cout << "How many types of Merchandise are in this store? ";
	cin >> numMerch;

	const int numFactories = 3;
	MerchandiseFactory* factories[numFactories];
	factories[0] = new ArsenalFactory();
	factories[1] = new ChelseaFactory();
	factories[2] = new LiverpoolFactory();


	Merchandise*** stock = new Merchandise**[numMerch];
	short type, club, amount;
	double price;
	char inflated, size;
	bool in;
	//bool continueCreating = true;
	int i = 0;
	int numItems[numMerch];


	while (i < numMerch){

		cout << "1 - Shirt" << endl;
		cout << "2 - Soccerball" << endl;
		cout << "Type of merch item [1/2]: ";

		while(true){
			cin >> type;
			if (type == 1)
				break;
			else if (type == 2)
				break;
			else
				cout<<"invalid input"<<endl;
				cout<<"Type of merch item [1/2]: ";
		}

		switch(type) {
			case 1:
				cout << "Size of shirt [S|M|L]: ";
				
				while(true){
					cin >> size;

					if (toupper(size) == 'S')
						break;
					else if (toupper(size) == 'M')
						break;
					else if (toupper(size) == 'L')
						break;
					else
						cout<<"invalid input"<<endl;
						cout<<"Size of shirt [S|M|L]: ";
				}

				printClubs("shirt");

				while(true){
					cin >> club;
					if (club == 1 || club == 2 || club == 3)
						break;
					else
						cout<<"invalid input"<<endl;
						cout<<"Which club is this shirt for? ";
				}


				switch(club) {
				  case 1:
				  	cout<<"Cost of "<<(char) toupper(size)<<" Arsenal Shirt: ";
				  break;
				  case 2:
				  	cout<<"Cost of "<<(char) toupper(size)<<" Chelsea Shirt: ";
				  break;
				  case 3:
				  	cout<<"Cost of "<<(char) toupper(size)<<" Liverpool Shirt: ";
				  	
				  break;
				}
				cin >> price;

				cout<<"How many of this item do you want to create? ";
				cin>>amount;
				numItems[i] = amount;

				stock[i] = new Merchandise*[amount];

				for (int x = 0; x < amount; x++)
				{
					stock[i][x] = factories[club-1]->createShirt((char) toupper(size), price);
				}

				//stock[i] = factories[club-1]->createShirt((char) toupper(size), price);
			break;
			case 2:
				cout << "Is the soccerball inflated [y/n]: ";

				while(true){
					cin >> inflated;

					if (toupper(inflated) == 'Y'){
						in = true;
						break;
					}
					else if(toupper(inflated) == 'N'){
						in = false;
						break;
					}
					else
						cout<<"invalid input"<<endl;
						cout << "Is the soccerball inflated [y/n]: ";
				}
				

				printClubs("soccer ball");
				while(true){
					cin >> club;
					if (club == 1 || club == 2 || club == 3)
						break;
					else
						cout<<"invalid input"<<endl;
						cout<<"Which club is this soccer ball for? ";
				}

				switch(club) {
				  case 1:
				  	if(in)
				  		cout<<"Cost of inflated Arsenal soccer ball: ";
				  	else
				  		cout<<"Cost of deflated Arsenal soccer ball: ";
				  break;
				  case 2:
				  	if(in)
				  		cout<<"Cost of inflated Chelsea soccer ball: ";
				  	else
				  		cout<<"Cost of deflated Chelsea soccer ball: ";
				  break;
				  case 3:
				  	if(in)
				  		cout<<"Cost of inflated Liverpool soccer ball: ";
				  	else
				  		cout<<"Cost of deflated Liverpool soccer ball: ";
				  break;
				  
				}
				cin >> price;

				cout<<"How many of this item do you want to create? ";
				cin>>amount;
				numItems[i] = amount;

				stock[i] = new Merchandise*[amount];

				for (int x = 0; x < amount; x++)
				{
					stock[i][x] = factories[club-1]->createShirt((char) toupper(size), price);
				}
			break;

		}


		if (i >= numMerch)
			break;

		i++;
	}


	cout<<endl;
	cout<<"****STOCK****"<<endl;

	for(int i = 0; i < numMerch; i++){
		for(int j = 0; j < numItems[i]; j++){
			cout<<stock[i][j]->getDescription();
		}
	}


	return 0;
}

