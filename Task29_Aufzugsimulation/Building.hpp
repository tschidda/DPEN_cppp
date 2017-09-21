#ifndef BUILDING_HPP
#define BUILDING_HPP

#include "Floor.hpp"
#include "Elevator.hpp"
#include "Person.hpp"

class Building
{
public:
	Building(int numbOfFloors);
	virtual ~Building();
	const int getNumberOfFloors() const;
	const Floor& getFloor(int floor) const;
	const Elevator& getElevator() const;
	void letPeopleIn();
	void moveElevatorToFloor(int i);
	void addWaitingPerson(int floor, Person p);
	std::vector<Person> removeArrivedPeople();
	
private:
	std::vector<Floor> floors;
	Elevator *elevator = new Elevator();
};

#endif // BUILDING_HPP
