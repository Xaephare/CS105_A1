#include <iostream>
#include <vector>
#include "includes.h" //header of headers

int Yacht::objCount = 0; //initialize obj count at 0

int main() {
	std::vector<Yacht> yacht; //vector of Yacht objects so that you can create any amount
	
	std::cout << "*******************Ocean Race 2021-22*******************\n\n";
	for (int i = 0; i < 3; i++) { //creates three new yacht objects and pushes them into the vector
		Yacht temp;
		yacht.push_back(temp);
	}
	
	std::cout << "\n*******************Welcome to Ocean Race 2021-22*******************\n\n";
	for (int i = 0; i < yacht.size(); i++) { //prints all yachts in vector and their locations
		std::cout << "The ship serial number is: " << yacht[i].serial << std::endl;
		std::cout << "and it's position is: ";
		yacht[i].latitude.display();
		std::cout << " Latitude  ";
		yacht[i].longitude.display();
		std::cout << " Longitude\n\n";
	}
	return 0;
}
