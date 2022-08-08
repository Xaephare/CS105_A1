#include <iostream>
#include <string>
#include "player.h"


Player::Player() { //default constructor
	name = "";
	race = HUMAN;
	hitPoints = 0;
	magicPoints = 0;
}

Player::Player(std::string name, Race race, int hitPoints, int magicPoints) {

}

std::string Player::getName() {
	return name;
}

Race Player::getRace() { //returns race as enum
	return race;
}

std::string Player::whatRace() { //returns race as string
	Race temp;
	temp = getRace();

	switch (temp) {
	case HUMAN:
		return "Human";
		break;
	case ELF:
		return "Elf";
		break;
	case DWARF:
		return "Dwarf";
		break;
	case ORC:
		return "Orc";
		break;
	case TROLL:
		return "Troll";
		break;
	}
}

int Player::getHitPoints() {
	return hitPoints;
}

int Player::getMagicPoints() {
	return magicPoints;
}

void Player::setName(std::string input) {
	name = input;
}

void Player::setRace(Race input) {
	race = input;
}

void Player::setHitpoints(int input) {
	hitPoints = input;
}

void Player::setMagicPoints(int input) {
	magicPoints = input;
}

std::string Player::attack() {
	return "No attack method defined yet!\n"; //default attack method before being set by child class
}


//Derived attack function overrides
std::string Warrior::attack() {
	return "I will destroy you with my sword!\n";
}
std::string Priest::attack() {
	return "I will assault you with my holy wrath!\n";
}
std::string Mage::attack() {
	return "I will crush you with my arcane missiles!\n";
}