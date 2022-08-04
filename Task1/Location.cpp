#include <iostream>
#include "location.h"


const char degsym = '\xF8'; //degrees symbol

void Location::getPos() {
	std::cout << "Enter degrees between 0-180: ";
	std::cin >> degrees;
	std::cout << "Enter minutes between 0-60: ";
	std::cin >> minutes;
	std::cout << "Enter direction (N/S/E/W): ";
	if (std::cin >> direction) {
		if (direction == 'N' || direction == 'n') {
			direction = 'N';
		}
		else if (direction == 'S' || direction == 's') {
			direction = 'S';
		}
		else if (direction == 'E' || direction == 'e') {
			direction = 'E';
		}
		else if (direction == 'W' || direction == 'w') {
			direction = 'W';
		}
		else {
			std::cout << "Invalid direction.\n";
			getPos();
		}
	}
}

void Location::display() {
	std::cout << degrees << degsym << minutes << "' " << direction;
}