/*
GameCharacter.h
Version Information:0.1
Author: Ryan
Date: 15/10/2018
Description: Class declaration for GameCharacter.cpp
Copyright: Ulster University
*/

#include<iostream>
#include<string>
class GameCharacter {
private:
	std::string name_;
	int health_;
public:
	GameCharacter();
	GameCharacter(std::string name, int health);
	void setHealth(int health);
	int getHealth() const;
	std::string getName() const;
};
