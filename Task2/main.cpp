#include <iostream>
#include <string>
#include <vector>
#include "player.h"


void charPrint(); //required for charCreate

//declare a vector of each derived class
std::vector<Warrior> warrior;
std::vector<Priest> priest;
std::vector<Mage> mage;


Race raceSel() { //enum values are in the player.h, starting at human = 1
	int sel;

	std::cout << "Select a race.\n";
	std::cout << "	1. Human\n";
	std::cout << "	2. Elf\n";
	std::cout << "	3. Dwarf\n";
	std::cout << "	4. Orc\n";
	std::cout << "	5. Troll\n";
	std::cin >> sel;

	switch (sel) {
	case HUMAN:
		return HUMAN;
		break;
	case ELF:
		return ELF;
		break;
	case DWARF:
		return DWARF;
		break;
	case ORC:
		return ORC;
		break;
	case TROLL:
		return TROLL;
		break;
	default:
		std::cout << "Invalid selection.\n";
		raceSel();
		break;
	}
}

std::string nameSel() {
	std::string name;
	std::cout << "Enter a name for your character.\n";
	std::cin >> name;
	return name;
}

bool charCreate() {
	Warrior tempw; //temp variables for each player class
	Priest tempp;
	Mage tempm;
	int sel;

	std::cout << "	CHARACTER CREATION\n";
	std::cout << "Select a class\n";
	std::cout << "	1. Warrior\n";
	std::cout << "	2. Priest\n";
	std::cout << "	3. Mage\n";
	std::cout << "	4. Finish character creation.\n";
	std::cin >> sel;

	switch (sel) {
	case WARRIOR:
		tempw.setHitpoints(200); //different health and mana values depending on player class selected
		tempw.setMagicPoints(0);
		tempw.setRace(raceSel());
		tempw.setName(nameSel());
		warrior.push_back(tempw); //appends new values onto the vector
		return true;
		break;
	case PRIEST:
		tempp.setHitpoints(100);
		tempp.setMagicPoints(200);
		tempp.setRace(raceSel());
		tempp.setName(nameSel());
		priest.push_back(tempp);
		return true;
		break;
	case MAGE:
		tempm.setHitpoints(200);
		tempm.setMagicPoints(0);
		tempm.setRace(raceSel());
		tempm.setName(nameSel());
		mage.push_back(tempm);
		return true;
		break;
	case 4:
		charPrint();
		return false;
		break;
	default:
		std::cout << "Invalid selection.\n";
		charCreate();
		break;
	}
}

//iterates through all the vectors and prints each player's stats as a voiceline
void charPrint() {
	std::cout << "-----------------\n";
	std::cout << "WARRIOR LIST:\n";
	std::cout << "-----------------\n";
	for (int i = 0; i < warrior.size(); i++) {
		std::cout << "I am " << warrior[i].getName() << ", my race is " << warrior[i].whatRace() << ", I am a warrior and " << warrior[i].attack();
	}
	std::cout << "-----------------\n";
	std::cout << "PRIEST LIST:\n";
	std::cout << "-----------------\n";
	for (int i = 0; i < priest.size(); i++) {
		std::cout << "I am " << priest[i].getName() << ", my race is " << priest[i].whatRace() << ", I am a priest and " << priest[i].attack();
	}
	std::cout << "-----------------\n";
	std::cout << "MAGE LIST:\n";
	std::cout << "-----------------\n";
	for (int i = 0; i < mage.size(); i++) {
		std::cout << "I am " << mage[i].getName() << ", my race is " << mage[i].whatRace() << ", I am a mage and " << mage[i].attack();
	}
}

int main() {
	int sel;
	bool cont = true;

	while (cont) {
		cont = charCreate();
	}
	
	std::cout << "\nCharacter creation done!.......\n" <<
		"You can now move to the next level!\n";
	
	system("pause");
	return 0;
}