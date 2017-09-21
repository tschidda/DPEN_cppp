#ifndef MINUSEXPRESSION_HPP
#define MINUSEXPRESSION_HPP

#include "BinaryExpression.hpp"

class MinusExpression : public BinaryExpression
{
public:
	MinusExpression(Expression *left, Expression *right);
	virtual ~MinusExpression();
	virtual double compute();
};

#endif // MINUSEXPRESSION_HPP
