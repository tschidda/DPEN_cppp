#include "MinusExpression.hpp"

MinusExpression::MinusExpression(Expression *left, Expression *right):BinaryExpression(left,right)
{
	std::cout<<"+++ Created MinusExpression +++"<<std::endl;
}

MinusExpression::~MinusExpression()
{
	std::cout<<"--- Deleted MinusExpression ---"<<std::endl;
}

double MinusExpression::compute()
{
		std::cout<<"~~~ Computing MinusExpression ~~~"<<std::endl;
		return this->left->compute()-this->right->compute();
}
