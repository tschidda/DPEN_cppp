#include "Student.hpp"

Student::Student(const std::string &name, const std::string &studentID): Person(name)
{
	std::cout<<"+++++++++++++\nCreated Student"<<std::endl;
	this->studentID=studentID;
	std::cout<<"Set students parameters to"<<this->getInfo()<<std::endl;
}

Student::~Student()
{
	std::cout<<"Deleted Student"<<this->getInfo()<<"\n+++++++++++++"<<std::endl;
}

std::string Student::getInfo() const{
	return Person::getInfo()+std::string("\n ID: ")+this->studentID;
}