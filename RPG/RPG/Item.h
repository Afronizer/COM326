/*
Item.h
Version Information: 0.1
Author: Ryan
Date: 18/10/2018
Description: Class definition for Item.cpp
Copyright: Ulster University
*/

#include<iostream>
#include<string>

class Item {
private:
	std::string name_;
	std::string description_;
	int value_;
	
public:
	Item();
	Item(std::string name, std::string description, int value);
	void PrintStatus();
};