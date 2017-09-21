#ifndef NUMBEREXPRESSION_HPP
#define NUMBEREXPRESSION_HPP

#include "Expression.hpp"

class NumberExpression : public Expression
{
public:
	NumberExpression(double number);
	virtual ~NumberExpression();
	virtual double compute();
	
private:
	double number;
};

#endif // NUMBEREXPRESSION_HPP
