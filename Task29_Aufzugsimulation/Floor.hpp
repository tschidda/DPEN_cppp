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
	const int getNumPeople()const;
	const Person getPerson(int i)const ;
	void addWaitingPerson(Person h);
	std::vector<Person> removeAllPeople();
	
private:
	std::vector<Person> containedPeople;
};

#endif // FLOOR_HPP
