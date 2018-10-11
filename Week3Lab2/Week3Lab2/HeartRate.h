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
	getBirthDay(int birthDay);
	getBirthMonth(int birthMonth);
	getBirthYear(int birthYear);
};

