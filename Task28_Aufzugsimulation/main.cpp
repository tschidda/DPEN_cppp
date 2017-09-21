#include <iostream>
#include "Building.hpp"


int main(void)
{
	Building b(3);
	b.addWaitingPerson(0, Person(2)); // person in floor 0 wants to floor 2
	b.addWaitingPerson(1, Person(0)); // person in floor 1 wants to floor 0
	b.addWaitingPerson(2, Person(0)); // person in floor 2 wants to floor 0
	        
	// check each floor
	for (int f = 0; f < b.getNumberOfFloors(); ++f) {
		b.moveElevatorToFloor(f);
		// collect all people at current floor
		b.letPeopleIn();
		// move each person to its destination and let it out
		while (b.getElevator().getNumPeople() > 0) {
			int dest = b.getElevator().getPerson(0).getDestinationFloor();
			b.moveElevatorToFloor(dest);
			b.removeArrivedPeople();
		}
	}
	std::cout << "\n### END ###\n### Elevator empty + All People arrived\n### Total Energy consumed: " << b.getElevator().getEnergyConsumed()<<"\n\n" << std::endl;
	
	return 0;
}