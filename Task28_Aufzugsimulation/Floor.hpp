#ifndef FLOOR_HPP
#define FLOOR_HPP

#include "Person.hpp"
#include <iostream>
#include <vector>

class Floor
{
public:
	Floor();
	~Floor();
	int getNumPeople();
	Person getPerson(int i);
	void addWaitingPerson(Person h);
	std::vector<Person> removeAllPeople();
	
private:
	std::vector<Person> containedPeople;
};

#endif // FLOOR_HPP
