#pragma once
#include <string>
#include<iostream>

class Person {
private:
	std::string firstName_;
	std::string secondName_;
	std::string occupation_;
	int age_;

public:
	Person();

	void SetFirstName(std::string firstName);
	std::string GetFirstName()const;
	void SetSecondName(std::string secondName);
	std::string GetSecondName()const;
	void SetOccupation(std::string occupation);
	std::string GetOccupation()const;
	void SetAge(int age);
	int GetAge()const;


};
