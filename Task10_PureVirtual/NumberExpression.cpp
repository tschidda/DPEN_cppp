#include "NumberExpression.hpp"

NumberExpression::NumberExpression(double number)
{
	std::cout<<"+++ Created NumberExpression +++"<<std::endl;
	this->number=number;
	std::cout<<"Saved value 'number': "<<this->number<<std::endl;
}

NumberExpression::~NumberExpression()
{
	std::cout<<"--- Deleted NumberExpression ---"<<std::endl;
}

double NumberExpression::compute()
{
	return this->number;
}
