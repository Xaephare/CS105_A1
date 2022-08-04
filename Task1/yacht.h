#pragma once

class Yacht {
private:
	static int objCount;
public:
	int serial;
	Location longitude, latitude;
	Yacht();
	static int getObjCount();
};