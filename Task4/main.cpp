#include <iostream>
#include "aliens.h"
#include <vector>
#include <cstdlib>

std::vector <Alien> aliens;
std::vector <Alien> offspring;

void create_pairs() {
	Alien alien1(50, 84, 'M');
	Alien alien2(40, 70, 'F');
	Alien alien3(55, 70, 'M');
	Alien alien4(55, 40, 'F');

	aliens.push_back(alien1);
	aliens.push_back(alien2);
	aliens.push_back(alien3);
	aliens.push_back(alien4);
	std::cout << "Alien pairs created.\n\n";
}

void create_offspring() {
	if (aliens.size() < 4) {
		std::cout << "Not enough aliens to create offspring\n\n";
	}
	else {
		Alien alien5 = aliens[0] + aliens[1];
		Alien alien6 = aliens[2] + aliens[3];
		
		offspring.push_back(alien5);
		offspring.push_back(alien6);
		std::cout << "Offspring created... (Alien5 & Alien6)\n\n";
	}
}

void compare_offspring() {
	if (offspring.size() < 2) {
		std::cout << "Not enough offspring to compare.\n\n";
	}
	else {
		std::cout << "Alien offspring prestige comparison:\n";
		std::cout << "Alien5 == Alien6 ? " << std::boolalpha << (offspring[0] == offspring[1]) << std::endl;
		std::cout << "Alien5 != Alien6 ? " << std::boolalpha << (offspring[0] != offspring[1]) << std::endl;
		std::cout << "Alien5 > Alien6 ? " << std::boolalpha << (offspring[0] > offspring[1]) << std::endl;
		std::cout << "Alien5 >= Alien6 ? " << std::boolalpha << (offspring[0] >= offspring[1]) << std::endl;
		std::cout << "Alien5 < Alien6 ? " << std::boolalpha << (offspring[0] < offspring[1]) << std::endl;
		std::cout << "Alien5 <= Alien6 ? " << std::boolalpha << (offspring[0] <= offspring[1]) << std::endl << std::endl;
	}
}

bool main_menu() {
	int sel;
	std::cout << "Enter your selection: ";
	std::cin >> sel;

	switch (sel) {
	case 1:
		create_pairs();
		break;
	case 2:
		create_offspring();
		break;
	case 3:
		compare_offspring();
		break;
	case 4:
		return false;
		break;
	default:
		std::cout << "Invalid selection\n";
		break;
	}
	return true;
}

int main() {
	srand(time(nullptr)); //must be called outside of function otherwise granularity is too low to give accurate results

	
	std::cout << "Main menu:\n";
	std::cout << "	1. Create alien pairs.\n";
	std::cout << "	2. Create offspring.\n";
	std::cout << "	3. Compare offspring prestige.\n";
	std::cout << "	4. Exit\n";
	while (main_menu()) {};

	return 0;
}