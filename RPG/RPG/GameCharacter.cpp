/*
GameCharacter.cpp
Version Informaton: 0.1
Author: Ryan
Date: 15/10/2018
Description: Class definition for GameCharacter.h
Copyright: Ulster University
*/

#include "GameCharacter.h"
#include <iostream>
#include <string>

GameCharacter::GameCharacter() {
	std::cout << "An new character was just born via the default constructor." << std::endl;
}

GameCharacter::GameCharacter(std::string name, int health) {
	:name_{ name }, , health_{ health }, {
	std::cout << "A " name << " was just born." << std::endl;
}

void GameCharacter::setHealth(int health) {
	health_ += health;
}
int GameCharacter::getHealth() const {
	return health_;
}
std::string GameCharacter::getName() const {
	return name_;
}