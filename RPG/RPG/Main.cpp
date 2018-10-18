/*
Main.cpp
Version Information: 0.1
Author: Jamie Neill
Date: 08/10/2018
Description: Main.cpp driver application class
Copyright: Ulster University
*/

#include <iostream>
#include <string>
#include <random>
#include "Wizard.h"
#include "Archer.h"
#include "Warrior.h"
#include "GameCharacter.h"

void Fight(GameCharacter npc1, GameCharacter npc2);
double attack();
int main() {

	//RPG
	//Create an object of each class
	Wizard HarryPotter{ "Harry Potter", "Wizard", 100 };
	Warrior Grommash{"Grommash", "Warrior", 100};
	Archer Archie{"Archie", "Archer", 100};
	GameCharacter Ryan{ "Ryan", 100 };
	GameCharacter Chloe{ "Chloe", 100 };
	Fight(Ryan, Chloe);

	//Print Information about each class
	HarryPotter.PrintStatus();
	Grommash.PrintStatus();
	Archie.PrintStatus();

	

}

//Fight! Fight! Fight!
void Fight(GameCharacter npc1, GameCharacter npc2) {
	while (npc1.getHealth() > 0 && npc2.getHealth() > 0) {
		double attackResult = attack();
		if (attackResult >= 0.5) {
			std::cout << npc2.getName() << " has landed a hit." << std::endl;
			npc1.setHealth(-20);
		}
		else {
			std::cout << npc1.getName() << " has landed a hit." << std::endl;
			npc2.setHealth(-20);
		}
	}
	if (npc1.getHealth() <= 0) {
		std::cout << npc2.getName() << " wins!" << std::endl;

	}
	else {
		std::cout << npc1.getName() << " wins!" << std::endl;
	}
}
double attack() {
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_real_distribution<> dis(0.0, 1.0);
	double result = dis(gen);
	return result;
}