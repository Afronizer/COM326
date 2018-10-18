/*
Warrior.h
Version Information: 0.1
Author: Ryan
Date: 14/10/2018
Description:Class definition for Wizard.cpp
Copyright: Ulster University
*/
#include<iostream>
#include<string>

class Warrior {
private:
	std::string name_;
	std::string characterType_;
	int health_;
public:
	Warrior();
	Warrior(std::string name, std::string characterType, int health);
	void PrintStatus();
};
