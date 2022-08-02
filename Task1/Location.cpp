#include <iostream>

class Location {
private:
	int degrees;
	float minutes;
	char direction;
public:
	void GetPos(int yachtCnt) {
		std::cout << "**************************************";
		std::cout << "Enter the location of ship " << yachtCnt << std::endl;
		std::cout << "Enter degrees between 0-180: ";
		std::cin >> degrees;
		std::cout << "Enter minutes between 0-60: ";
		std::cin >> minutes;
		std::cout << "Enter direction (N/S/E/W): ";
		std::cin >> direction;
	}
};