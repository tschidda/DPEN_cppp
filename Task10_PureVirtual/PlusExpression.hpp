#ifndef PLUSEXPRESSION_HPP
#define PLUSEXPRESSION_HPP

#include "BinaryExpression.hpp"

class PlusExpression : public BinaryExpression
{
public:
	PlusExpression(Expression *left, Expression *right);
	virtual ~PlusExpression();
	virtual double compute();

};

#endif // PLUSEXPRESSION_HPP
