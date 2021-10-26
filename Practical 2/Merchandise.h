#ifndef MERCHANDISE_H
#define MERCHANDISE_H

#include <string>

using namespace std;

class Merchandise
{
private:
	string club;
	double price;
	string type;
	int id;
    static int sumMerch;

public:
	Merchandise();

	Merchandise(const char* c, double p, char t);

	virtual ~Merchandise();

	virtual string getDescription() = 0;

	void setClub(const char* c){
		club = c;
	}

	void setPrice(double p){
		price = p;
	}

	void setType(const char* t){
		type = t;
	}

	void setID(){
		id++;
	}

	string getClub(){
		return club;
	}

	double getPrice(){
		return price;
	}

	string getType(){
		return type;
	}

	int getID(){
		return id;
	}
	
};

#endif