#ifndef RPN_HPP
#define RPN_HPP


#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <stdlib.h>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define PURPLE "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"


#define ARG_MISSING "Error : Polish mathematical expression as argument is missing"
#define OPERANDS_MISSING  "Error: Not enough operands for operator"
#define DIV_ZERO_ERR "Error: Division by zero"
#define BAD_INPUT "Error: Bad input"
#define BAD_RESULT "Error: Bad result"

class RPN
{
	private:
	
	std::string	_tokens;
	RPN(){};
	
	public:
	
	RPN(std::string tokens);
	RPN(RPN const &cpy);
	RPN &operator=(RPN const &rhs);
	~RPN();

	int	rpn_calculation(std::string tokens);
	
};


#endif