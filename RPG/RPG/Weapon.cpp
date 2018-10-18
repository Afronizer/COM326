/*
Weapon.cpp
Version Information: 0.1
Author: Ryan
Date: 14/10/2018
Description:Class definition for Weapon.h
Copyright: Ulster University
*/
#include<iostream>
#include<string>
#include"Weapon.h"
Weapon::Weapon() {
	std::cout << "This sword is banging mate" << std::endl;
}
Weapon::Weapon(std::string type, int damage, int level)
	: type_{ type }, damage_{ damage }, level_{ level } {
	std::cout << "This sword is banging mate" << std::endl;

}
std::string Weapon::getType() const {
	return type_;
}
int Weapon::getDamage() const {
	return damage_;
}
int Weapon::getLevel() const {
	return level_;
}
