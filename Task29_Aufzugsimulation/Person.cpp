#include "Person.hpp"
#include <iostream>

Person::Person(int destinationFloor):destinationFloor(destinationFloor)
{
	std::cout<<"+++ Created person with destination floor: "<<destinationFloor<<std::endl;
}

Person::Person(const Person& other):destinationFloor(other.destinationFloor)
{
	std::cout<<"~~~ Copied person with destination floor: "<<other.destinationFloor<<std::endl;
}

Person::~Person()
{
	std::cout<<"--- Deleted person with destination floor: "<<destinationFloor<<std::endl;
}

const int Person::getDestinationFloor()const{
	return destinationFloor;
}

