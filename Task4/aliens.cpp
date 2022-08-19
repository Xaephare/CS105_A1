#include "aliens.h"
#include <ctime>
#include <cstdlib>


	Alien::Alien(int weight, int height, char gender) {
		this->weight = weight;
		this->height = height;
		this->gender = gender;
	}
	
	int Alien::get_weight() {
		return weight;
	}
	
	int Alien::get_height() {
		return height;
	}
	
	char Alien::get_gender() {
		return gender;
	}
	
	int Alien::get_prestige() {
		int gender_points;
		
		if (gender == 'M') {
			gender_points = 2;
		}
		else {
			gender_points = 3;
		}
		
		return (weight * height * gender_points);
	}

	//assignment
	Alien Alien::operator+(Alien& other) {
		srand(time(nullptr));
		
		int rand_binary = rand()%2;
		
		int new_weight = (weight + other.weight) / 2;
		int new_height = (height + other.height) / 2;
		
		char new_gender;
		if (rand_binary == 0) {
			new_gender = 'M';
		}
		else {
			new_gender = 'F';
		}
		
		return Alien(new_weight, new_height, new_gender);
	}
	void Alien::operator=(Alien& other) {
		weight = other.weight;
		height = other.height;
		gender = other.gender;
	}
	//comparison
	bool Alien::operator==(Alien& other) {
		return get_prestige() == other.get_prestige();
	}
	bool Alien::operator!=(Alien& other) {
		return get_prestige() != other.get_prestige();
	}
	bool Alien::operator>(Alien& other) {
		return get_prestige() > other.get_prestige();
	}
	bool Alien::operator>=(Alien& other) {
		return get_prestige() >= other.get_prestige();
	}
	bool Alien::operator<(Alien& other) {
		return get_prestige() < other.get_prestige();
	}
	bool Alien::operator<=(Alien& other) {
		return get_prestige() <= other.get_prestige();
	}