#include "Person.hpp"


Person::Person(const std::string &name){
	
	std::cout<<"*************\nCreated Person"<<std::endl;
	this->name=name;
	std::cout<<"Set persons parameters to"<<this->getInfo()<<std::endl;
}

Person::~Person()
{
	std::cout<<"Deleted Person"<<this->getInfo()<<"\n*************\n\n"<<std::endl;
}

std::string Person::getInfo() const{
	return std::string("\n Name: ")+this->name;
}
