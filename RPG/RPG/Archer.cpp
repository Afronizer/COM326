/*
Archer.cpp
Version Information: 0.1
Author: Ryan
Date: 14/10/2018
Description:Class definition for Archer.h
Copyright: Ulster University
*/
#include<iostream>
#include<string>
#include"Archer.h"
Archer::Archer() {
	std::cout << "An Archer was just born via the default constructor." << std::endl;
}
Archer::Archer(std::string name, std::string characterType, int health)
	:name_{ name }, characterType_{ characterType }, health_{ health }, weapon_{ Weapon{" Bow ",7, 1} } {
	std::cout << "An Archer was just born." << std::endl;

}
void Archer::PrintStatus() {
	std::cout << "Name: " << name_ << "\n";
	std::cout << "Character Type: " << characterType_ << "\n";
	std::cout << "Health: " << health_ << "\n";
	std::cout << "Weapon Type: " << weapon_.getType() << "\n";
}