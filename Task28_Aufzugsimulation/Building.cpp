#include "Building.hpp"

Building::Building(int numbOfFloors)
{
	std::cout<<"+++ Created new Building with "<<numbOfFloors<<" Floors"<<std::endl;
	for(int i=0; i<numbOfFloors;++i){
		floors.push_back(Floor());
	}
}
	

Building::~Building()
{
	delete elevator;
	std::cout<<"--- Deleted Building with "<<floors.size()<<" Floors"<<std::endl;
}

Elevator& Building::getElevator(){
	return *elevator;
}

Floor& Building::getFloor(int floor){
	return floors.at(floor);
}

int Building::getNumberOfFloors(){
	return floors.size();
}

void Building::letPeopleIn(){
	std::vector<Person> people = getFloor(elevator->getFloor()).removeAllPeople();
	elevator->addPeople(people);
}

void Building::moveElevatorToFloor(int i){
	elevator->moveToFloor(i);
}

void Building::addWaitingPerson(int floor, Person p){
	getFloor(floor).addWaitingPerson(p);
}

std::vector<Person> Building::removeArrivedPeople(){
	return elevator->removeArrivedPeople();
}