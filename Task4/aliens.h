#pragma once

class Alien {

	int weight;
	int height;
	char gender;

public:
	Alien(int weight, int height, char gender);
	int get_weight();
	int get_height();
	char get_gender();
	int get_prestige();

	//assignment
	Alien operator+(Alien& other);
	void operator=(Alien& other);
	//comparison
	bool operator==(Alien& other);
	bool operator!=(Alien& other);
	bool operator>(Alien& other);
	bool operator>=(Alien& other);
	bool operator<(Alien& other);
	bool operator<=(Alien& other);
};