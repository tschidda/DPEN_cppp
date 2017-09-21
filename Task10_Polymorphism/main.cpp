#include <iostream>

#include "Student.hpp"

void printPersonInfo (const Person *person){
	std::cout<<"-/-/-/-/-/-/-\nprintInfo:"<<person->getInfo()<<"\n-/-/-/-/-/-/-"<<std::endl;
}

int main(void)
{
	Person *hans = new Person("Hans");
	printPersonInfo(hans);
	delete hans;

	
	Student *peter = new Student("Peter","2683294");
	printPersonInfo(peter);
	delete peter;
	
	Person *tim = new Student("Tim", "69098644");
	printPersonInfo(tim);
	delete(tim);
	
	return 0;
}