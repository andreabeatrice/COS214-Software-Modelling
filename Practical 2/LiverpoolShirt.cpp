#include "LiverpoolShirt.h"
#include "Shirt.h"

#include <iostream>

LiverpoolShirt::LiverpoolShirt()  : Shirt("Liverpool", 62, 'M'){

}

LiverpoolShirt::LiverpoolShirt(char si, double p)  : Shirt("Liverpool", p, si){
	
}
