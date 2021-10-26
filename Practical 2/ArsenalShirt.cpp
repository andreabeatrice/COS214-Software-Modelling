#include "ArsenalShirt.h"
#include "Shirt.h"

#include <iostream>

ArsenalShirt::ArsenalShirt()  : Shirt("Arsenal", 46, 'M'){

}

ArsenalShirt::ArsenalShirt(char si, double p)  : Shirt("Arsenal", p, si){
	
}
