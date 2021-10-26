#ifndef TRACK_H
#define TRACK_H

#include "Section.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Track : public Section{

public:
	vector<Section*> sections;
	bool crash;

	Track();

	void print();

	void add(Section*);

	void remove();

	bool hasCrash();

	void setCrash(bool c);
};

#endif