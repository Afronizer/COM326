/*
Warrior.cpp
Version Information: 0.1
Author: Ryan
Date: 14/10/2018
Description:Class definition for Wizard.cpp
Copyright: Ulster University
*/
#include<iostream>
#include<string>
#include"Warrior.h"
Warrior::Warrior() {
	std::cout << "A Warrior was just born via the default constructor." << std::endl;

}
Warrior::Warrior(std::string name, std::string characterType, int health)
	:name_{ name }, characterType_{ characterType }, health_{ health }, weapon_{ Weapon{"Axe",9, 1} } {
	std::cout << "A Warrior was just born." << std::endl;
}
void Warrior::PrintStatus() {
	std::cout << "Name: " << name_ << "\n";
	std::cout << "Character Type: " << characterType_ << "\n";
	std::cout << "Health: " << health_ << "\n";
	std::cout << "Weapon Type: " << weapon_.getType() << "\n";
}