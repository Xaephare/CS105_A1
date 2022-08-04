#include <iostream>
#include "location.h"
#include "yacht.h"


Yacht::Yacht() {
	objCount++;
	serial = objCount;

	std::cout << "*****************************\n";
	std::cout << "Enter the location of ship " << serial << std::endl;
	latitude.getPos();
	longitude.getPos();
}

int Yacht::getObjCount() {
	return objCount;
}