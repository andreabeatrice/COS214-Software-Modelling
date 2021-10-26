#ifndef SHIRT_H
#define SHIRT_H

#include "Merchandise.h"
#include <string>

using namespace std;

class Shirt :  public Merchandise{
private:
	string size;

public:

	Shirt(const char* c, double p, char s);

	Shirt();

	Shirt(char si, double p);

	virtual ~Shirt();

	string getDescription();
	
};

#endif