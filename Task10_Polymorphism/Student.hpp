#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include "Person.hpp"

class Student : public Person
{
public:
	Student(const std::string &name, const std::string &studentID);
	virtual ~Student();
	virtual std::string getInfo() const;
	
private:
	std::string studentID;
};

#endif // STUDENT_HPP
