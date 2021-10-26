#include "Section.h"
#include "Track.h"
#include <iostream>
#include <string>
#include <vector>


Track::Track(){

}

void Track::print(){
	/*The print function should print out all the sections that are stored in the vector (by calling the print
	function on each section in the vector - have a look at vector iterators) on a new line so that you can see
	the logical layout of the track.*/

	vector<Section*>::iterator ptr;

	cout<<"\t"<<"Section:"<<"\t"<<"Added Decorations:"<<endl;
	cout<<"       ----------      --------------------"<<endl;

	for (ptr = sections.begin(); ptr < sections.end(); ptr++){
		(*ptr)->print();
		cout<<endl;
	}

}

void Track::add(Section* s){

	sections.push_back(s);
}

void Track::remove(){
	sections.pop_back();
}

void Track::setCrash(bool c){
	crash = c;
}

bool Track::hasCrash(){
	return crash;
}