#include "Section.h"
#include "Decorator.h"
#include <iostream>
#include <string>
#include <vector>


Decorator::Decorator(){
	section = NULL;
}

void Decorator::print(){

	section->print();

}

void Decorator::add(Section* s){

	if (section == NULL){
		section = s;
	}
	else {
		section->add(s);
	}
}

void Decorator::remove(){
	if(section != NULL){
		section = NULL;
	}
}