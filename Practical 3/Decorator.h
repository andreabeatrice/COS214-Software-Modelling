#ifndef DECORATOR_H
#define DECORATOR_H

#include "Section.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Decorator : public Section{

public:
	Section* section;

	Decorator();

	Decorator(Section*){};

	void print();

	void add(Section*);

	void remove();
};

#endif