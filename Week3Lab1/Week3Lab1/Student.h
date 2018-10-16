#include<string>
#pragma once
class Student {
private:
	//Declare all data members private and encapsulate them
	std::string name_;
	std::string regID_;
	std::string course_;
	int yearOfStudy_;
	int moduleOneMark_;
	int moduleTwoMark_;
	int moduleThreeMark_;
public:
	//Declare all member functions public to allow access to data members
	Student();
	Student(std::string name, std::string regID, std::string course, int year, int mod1, int mod2, int mod3);
	std::string getName() const;
	std::string getRegID() const;
	std::string getCourse() const;
	int getYear() const;
	int getModule1Mark() const;
	int getModule2Mark() const;
	int getModule3Mark() const;
	void setName(std::string name);
	void setRegID(std::string regID);
	void setCourse(std::string course);
	void setYear(int year);
	void setModule1Mark(int mark);
	void setModule2Mark(int mark);
	void setModule3Mark(int mark);
	std::string ToString() const;
	std::string CaluculateClassification();

};