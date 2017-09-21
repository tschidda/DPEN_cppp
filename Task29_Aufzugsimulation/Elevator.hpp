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
	const int getFloor()const;
	const double getEnergyConsumed()const;
	void moveToFloor(int floor);
	const int getNumPeople()const;
	const Person getPerson(int i)const;
	void addPeople(std::vector<Person> people);
	std::vector<Person> removeArrivedPeople();
	
private:
	int currentFloor;
	std::vector<Person> containedPeople;
	double energyConsumed;
};

#endif // ELEVATOR_HPP
