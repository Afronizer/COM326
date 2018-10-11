#include "HeartRate.h"
#include <iostream>;


HeartRate::HeartRate()
{

}

int HeartRate::getBirthDay(int birthDay)
{
	std::cout << "Enter day of birth";
	std::cin >> birthDay;
	return birthDay;
	
}

int HeartRate::getBirthMonth(int birthMonth)
{
	std::cout << "Enter month of birth.";
	std::cin >> birthMonth;
	return birthMonth;
	
}

int HeartRate::getBirthYear(int birthYear)
{
	std::cout << "Enter year of birth";
	std::cin >> birthYear;
	return birthYear;
}


