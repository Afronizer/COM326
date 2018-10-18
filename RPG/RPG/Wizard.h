/*
Wizard.h
Version Information: 0.1
Author: Ryan
Date: 09/10/2018
Description:Class declaration for Wizard.cpp
Copyright: Ulster University
*/

#include<iostream>
#include<string>
class Wizard {
private:
	std::string name_;
	std::string characterType_;
	int health_;
public:
	Wizard();
	Wizard(std::string name, std::string characterType, int health);
	void PrintStatus();
};
