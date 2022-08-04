#pragma once
#include <iostream>

class Location {
private:
	int degrees;
	float minutes;
	char direction;
public:
	void getPos();
	void display();
};