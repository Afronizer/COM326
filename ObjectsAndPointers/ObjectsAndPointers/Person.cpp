#include "Person.h"
#include<string>
#include<iostream>


//main method
int main() {
	Person Paul{ "Paul", "Doherty", "Ninja", 33 };
	Person Mary{ "Mary", "McGonigle", "CTO", 28 };
	Person Paul2{ "Paul", "Doherty", "Ninja", 33 };
}

//constructors
Person::Person(std::string firstName_)
	:firstName_{ firstName } {
	cout << "Name: " << firstName_ << endl;
}

Person::Person(std::string secondName_)
	:secondName_{ secondName } {
	cout << "Second Name: " << secondName_ << endl;
}
Person::Person(std::string occupation_)
	: occupation_{ occupation } {
	cout << "Occupation: " << occpation_ << endl;
}

Person::Person(std::int age_)
	: age_{ age } {
	cout << "Age: " << age_ << endl;
}

//Getters and setters
void Person::SetFirstName(std::string firstName) {
	firstName_ = firstName;
}

std::string Person::GetFirstName()const {
	return firstName_;
}

void Person::SetSecondName(std::string secondName) {
	secondName_ = secondName;
}

std::string Person::GetSecondName()const {
	return secondName_;
}

void Person::SetOccupation(std::string occupation) {
	occupation_ = occupation;
}

std::string Person::GetOccupation()const {
	return occupation_;
}

void Person::SetAge(int age) {
	age_ = age;
}

int Person::GetAge()const {
	return age_;
}


