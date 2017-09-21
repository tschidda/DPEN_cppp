#ifndef ELEVATOR_HPP
#define ELEVATOR_HPP

#include "Person.hpp"
#include <vector>
#include <iostream>

class Elevator
{
public:
	Elevator();
	~Elevator();
	int getFloor();
	double getEnergyConsumed();
	void moveToFloor(int floor);
	int getNumPeople();
	Person getPerson(int i);
	void addPeople(std::vector<Person> people);
	std::vector<Person> removeArrivedPeople();
	
private:
	int currentFloor;
	std::vector<Person> containedPeople;
	double energyConsumed;
};

#endif // ELEVATOR_HPP
