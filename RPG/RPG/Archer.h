
/*
Archer.h
Version Information: 0.1
Author: Ryan
Date: 09/10/2018
Description:Class declaration for Archer.cpp
Copyright: Ulster University
*/
#pragma once
#include<iostream>
#include<string>

class Archer {
private:
	std::string name_;
	std::string characterType_;
	int health_;
public:
	Archer();
	Archer(std::string name, std::string characterType, int health);
	void PrintStatus();
};