#include "Floor.hpp"

Floor::Floor()
{
	std::cout<<"+++ Created new Floor"<<std::endl;
}

Floor::~Floor()
{
	std::cout<<"--- Deleted floor"<<std::endl;
}

int Floor::getNumPeople(){
	return containedPeople.size();
}

Person Floor::getPerson(int i){
	return containedPeople.at(i);
}

void Floor::addWaitingPerson(Person h){
	containedPeople.push_back(h);
}

std::vector<Person> Floor::removeAllPeople(){
	std::vector<Person> removedPeople = containedPeople;
	containedPeople.clear();
	return removedPeople;
}

