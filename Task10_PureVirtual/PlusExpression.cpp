#include "PlusExpression.hpp"

PlusExpression::PlusExpression(Expression *left, Expression *right) : BinaryExpression(left,right)
{
	std::cout<<"+++ Created PlusExpression +++"<<std::endl;
}

PlusExpression::~PlusExpression()
{
	std::cout<<"--- Deleted PlusExpression ---"<<std::endl;
}

double PlusExpression::compute()
{
		std::cout<<"~~~ Computing PlusExpression ~~~"<<std::endl;
		return this->left->compute()+this->right->compute();
}
