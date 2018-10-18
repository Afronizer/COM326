#include<iostream>
#include<string>
#include<regex>
#include "Student.h"
//default constructor
Student::Student() {
}
//field constructor
Student::Student(std::string name, std::string regID, std::string course, int year,
	int mod1, int mod2, int mod3)
	:name_{ name }, regID_{ regID }, course_{ course }, yearOfStudy_{ year },
	moduleOneMark_{ mod1 }, moduleTwoMark_{ mod2 }, moduleThreeMark_{ mod3 } {
}
//Getters and setters
void Student::setName(std::string name) {
	if (name.length() >= 1 && name.length() <= 100) {
		name_ = name;
	}
	else {
		throw std::exception("Name invalid");
	}
}
void Student::setRegID(std::string regID) {
	std::regex regIDMask("\\w\\d{8}");
	if (!std::regex_match(regID, regIDMask)) {
		throw std::exception("Registration ID invalid");
	}
	else {
		regID_ = regID;
	}
}
void Student::setCourse(std::string course) {
	course_ = course;
}
void Student::setYear(int year) {
	if (year > 0 && year < 5) {
		yearOfStudy_ = year;
	}
	else {
		throw std::exception("Year of Study invalid");
	}
}
void Student::setModule1Mark(int mark) {
	if (mark >= 0 && mark <= 100) {
		moduleOneMark_ = mark;
	}
	else {
		throw std::exception("Module 1 mark invalid");
	}
}
void Student::setModule2Mark(int mark) {
	if (mark >= 0 && mark <= 100) {
		moduleTwoMark_ = mark;
	}
	else {
		throw std::exception("Module 2 mark invalid");
	}
}
void Student::setModule3Mark(int mark) {
	if (mark >= 0 && mark <= 100) {
		moduleThreeMark_ = mark;
	}
	else {
		throw std::exception("Module 3 mark invalid");
	}
}
std::string Student::getName() const {
	return name_;
}
std::string Student::getRegID() const {
	return regID_;
}
std::string Student::getCourse() const {
	return course_;
}
int Student::getYear() const {
	return yearOfStudy_;
}
int Student::getModule1Mark() const {
	return moduleOneMark_;
}
int Student::getModule2Mark() const {
	return moduleTwoMark_;
}
int Student::getModule3Mark() const {
	return moduleThreeMark_;
}
//Function to return a string of the objects information
std::string Student::ToString() const {
	std::string info;
	info.append("Student Name: " + name_ + "\n");
	info.append("Student ID: " + regID_ + "\n");
	info.append("Student Course: " + course_ + "\n");
	info.append("Student Year: ");
	info.append(std::to_string(yearOfStudy_));
	info.append("\nModule One Mark: ");
	info.append(std::to_string(moduleOneMark_));
	info.append("\nModule Two Mark: ");
	info.append(std::to_string(moduleTwoMark_));
	info.append("\nModule Three Mark: ");
	info.append(std::to_string(moduleThreeMark_) + "\n");
	return info;
}
//Function to calculate the degree classification of the object
std::string Student::CaluculateClassification() {
	double average{ (moduleOneMark_ + moduleTwoMark_ + moduleThreeMark_) / 3.0 };
	if (average >= 70) {
		return "First Class";
	}
	else if (average >= 60) {
		return "2:1";
	}
	else if (average >= 50) {
		return "Second Class";
	}
	else if (average >= 40) {
		return "Third Class";
	}
	else {
		return "Fail";
	}
	
}