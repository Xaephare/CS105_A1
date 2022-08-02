#include <iostream>
#include "Location.h"


class Yacht {
private:
	int serial;
	static int objCount;
	
public:
	Yacht() {
		objCount++;
		serial = objCount;
		Location longitude,latitude;
		latitude.GetPos(serial);
	}
	~Yacht() {
		objCount--;
	}
	static int getObjCount() {
		return objCount;
	}
};

int Yacht::objCount = 0;

int main() {
	Yacht yacht;
	std::cout << Yacht::getObjCount();
	return 0;
}