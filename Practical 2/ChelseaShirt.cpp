#include "ChelseaShirt.h"
#include "Shirt.h"

#include <iostream>

ChelseaShirt::ChelseaShirt()  : Shirt("Chelsea", 50, 'M'){

}

ChelseaShirt::ChelseaShirt(char si, double p)  : Shirt("Chelsea", p, si){
	
}
