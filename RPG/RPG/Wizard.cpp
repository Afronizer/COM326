/*
Wizard.cpp
Version Information: 0.1
Author: Ryan
Date: 09/10/2018
Description:Class definition for Wizard.h
Copyright: Ulster University
*/
#include<iostream>
#include<string>
#include"Wizard.h"
#include"Weapon.h"
Wizard::Wizard() {
	std::cout << "An Wizard was just born via the default constructor." << std::endl;

}
Wizard::Wizard(std::string name, std::string characterType, int health)
	:name_{ name }, characterType_{ characterType }, health_{ health }, weapon_{ Weapon{ " Magic Staff ",10, 1 } }{
	std::cout << "A Wizard was just born." << std::endl;
}
void Wizard::PrintStatus() {
	std::cout << "Name: " << name_ << "\n";
	std::cout << "Character Type: " << characterType_ << "\n";
	std::cout << "Health: " << health_ << "\n";
	std::cout << "Weapon Type: " << weapon_.getType() << "\n";
}