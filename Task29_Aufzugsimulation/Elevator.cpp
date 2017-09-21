#include "Elevator.hpp"

Elevator::Elevator():currentFloor(0),energyConsumed(0)
{
	std::cout<<"+++ Created new Elevator with:"
		<<"\n currentFloor: "<<currentFloor
		<<"\n energyConsumed: "<<energyConsumed<<std::endl;
}

Elevator::~Elevator()
{
	std::cout<<"--- Deleted Elevator"<<std::endl;
}

int Elevator::getFloor(){
	return currentFloor;
}

double Elevator::getEnergyConsumed(){
	return energyConsumed;
}

int Elevator::getNumPeople(){
	return containedPeople.size();
}

Person Elevator::getPerson(int i){
	return containedPeople.at(i);
}

void Elevator::moveToFloor(int floor){
	energyConsumed += std::abs(currentFloor-floor);
	currentFloor = floor;
	std::cout<<">>> Elevator moved to floor: "<<currentFloor<<std::endl;
	std::cout<<">>> Elevator stats:" 
		<<"\n currentFloor: "<<currentFloor
		<<"\n energyConsumed: "<<energyConsumed
		<<"\n containedPeople: "<<containedPeople.size()<<std::endl;
}

void Elevator::addPeople(std::vector<Person> people){
		containedPeople.insert(containedPeople.end(), people.begin(), people.end());
		std::cout<<"+++ Added "<<people.size()<<" People to elevator"<<std::endl;
}

std::vector<Person> Elevator::removeArrivedPeople(){
	std::vector<Person> stay, arrived;
	for (size_t i=0;i<containedPeople.size();++i){
		if(containedPeople.at(i).getDestinationFloor() == currentFloor){
			arrived.push_back(containedPeople.at(i));
		}
		else{
			stay.push_back(containedPeople.at(i));
		}
	}
	containedPeople.clear();
	containedPeople=stay;
	
	std::cout<<">>> "<<arrived.size()<<" left elevator"<<std::endl;
	std::cout<<">>> "<<stay.size()<<" stay in elevator"<<std::endl;
	
	return arrived;
}