#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP

#include <iostream>

class Expression
{
public:
	Expression();
	virtual ~Expression();
	virtual double compute()=0;
private:
Expression(const Expression&);
};

#endif // EXPRESSION_HPP
