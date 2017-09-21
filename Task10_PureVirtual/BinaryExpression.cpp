#include "BinaryExpression.hpp"
#include <iostream>

BinaryExpression::BinaryExpression(Expression *left, Expression *right):left(left),right(right)
{
	std::cout<<"+++ Created BinaryExpression +++"<<std::endl;
}

BinaryExpression::~BinaryExpression()
{
	std::cout<<"--- Deleted BinaryExpression ---"<<std::endl;
}
/*
double BinaryExpression::compute()
{
	return 0.0d;
}
*/