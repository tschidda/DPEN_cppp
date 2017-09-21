#include "Floor.hpp"

Floor::Floor()
{
	std::cout<<"+++ Created new Floor"<<std::endl;
}

Floor::~Floor()
{
	std::cout<<"--- Deleted floor"<<std::endl;
}

const int Floor::getNumPeople() const{
	return containedPeople.size();
}

const Person Floor::getPerson(int i)const{
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

