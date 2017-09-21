#ifndef BINARYEXPRESSION_HPP
#define BINARYEXPRESSION_HPP
#include "Expression.hpp"

class BinaryExpression : public Expression
{
public:
	BinaryExpression(Expression *left, Expression *right);
	virtual ~BinaryExpression();

protected:

	Expression *left, *right;
};

#endif // BINARYEXPRESSION_HPP
