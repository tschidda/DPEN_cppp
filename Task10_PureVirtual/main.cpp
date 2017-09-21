#include <iostream>

#include "MinusExpression.hpp"
#include "NumberExpression.hpp"
#include "PlusExpression.hpp"


int main(void)
{
	Expression *num1 = new NumberExpression(2.0d);
	Expression *num2 = new NumberExpression(3.0d);
	Expression *num3 = new NumberExpression(2.0d);
	Expression *num4 = new NumberExpression(2.0d);
	Expression *num5 = new NumberExpression(3.0d);	
	Expression *num6 = new NumberExpression(3.0d);
	
	BinaryExpression *plus1 = new PlusExpression(num1,num2);
	BinaryExpression *min1 = new MinusExpression(num3,num4);
	BinaryExpression *plus3 = new PlusExpression(num5,num6);
	BinaryExpression *plus2 = new PlusExpression(plus1,min1);
	BinaryExpression *min2 = new MinusExpression(plus2,plus3);
	
	std::cout<<"Solution = "<<min2->compute()<<std::endl;
	
	
	
	return 0;
}