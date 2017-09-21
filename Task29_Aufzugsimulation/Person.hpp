#ifndef PERSON_HPP
#define PERSON_HPP

class Person
{
public:
	Person(int destinationFloor);
	Person(const Person& other);
	~Person();
	const int getDestinationFloor()const;
	
private:
	int destinationFloor;

};

#endif // PERSON_HPP
