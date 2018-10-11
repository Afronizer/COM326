#pragma once
#include <iostream>;

class HeartRate
{
private:
	std::string fName, lName;
	int birthDay, birthMonth, birthYear, currentDay, currentMonth, currentYear;
public:
	HeartRate();
// Constructor receives input for attriubtes
	int getBirthDay();
	int getBirthMonth();
	int getBirthYear();
	

	void setBirthDay(int birthDay);
	void setBirthMonth(int birthMonth);
	void setBirthYear(int birthYear);
};

