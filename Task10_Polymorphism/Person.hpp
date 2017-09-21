#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <iostream>

class Person
{
public:
	Person(const std::string &name);
	virtual ~Person();
	virtual std::string getInfo() const;

protected:
	std::string name;
};


	
#endif // PERSON_HPP
