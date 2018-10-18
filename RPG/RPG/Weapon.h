/*
Weapon.h
Version Information: 0.1
Author: Ryan
Date: 11/10/2018
Description:Class declaration for Weapon.cpp
Copyright: Ulster University
*/

#include<string>
#include<iostream>

class Weapon {
private:
	std::string type_;
	int damage_;
	int level_;
public:
	Weapon();
	Weapon(std::string type, int damage, int level);
	std::string getType() const;
	int getDamage() const;
	int getLevel() const;
};

