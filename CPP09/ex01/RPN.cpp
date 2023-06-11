#include "RPN.hpp"

RPN::RPN(std::string arg): _tokens(arg)
{

	rpn_calculation(_tokens);

};

int	RPN::rpn_calculation(std::string tokens)
{

	std::stack<int>		_stack;

	for (size_t i = 0; i < tokens.length(); i++) 
	{
		if ( tokens[i] == ' ' )
			continue ;
       	else if ( isdigit(tokens[i]) || ( tokens[i] == '-' && isdigit(tokens[i + 1]) && i + 1 < tokens.length() ) ) 
        {
            int number = 0;

            if (tokens[i] == '-') 
            {
                number = (tokens[i + 1] - '0') * (-1);
                i++;
            }
            else 
            {
                number = tokens[i] - '0';
            }
            _stack.push(number);
        }
      	else if (tokens[i] == '+' || tokens[i] == '-' || tokens[i] == '*' || tokens[i] == '/') 
        {
            if (_stack.size() < 2) 
            {
                std::cout << RED << OPERANDS_MISSING << RESET << std::endl;
                return 1;
            }

            int num1 = _stack.top();
            _stack.pop();
            int num2 = _stack.top();
            _stack.pop();
            int result; // 17

            switch(tokens[i]) 
            {
                case '+': 
					result = num2 + num1; 
					break;
                case '-': 
					result = num2 - num1; 
					break;
                case '*': 
					result = num2 * num1; 
					break;
                case '/': 
                     if (num2 == 0) 
					{
                    	std::cout << RED << DIV_ZERO_ERR << RESET << std::endl;
                    	return 1;
                	}
                	result = num2 / num1;
                    break;

              /*   default: 
					break; */
            }
            _stack.push(result); // 17
        }
		else 
        {
            std::cout << RED << BAD_INPUT << RESET << std::endl;
            return 1;
        }

    }
	if (_stack.size() != 1) 
	{
        std::cout << RED << BAD_RESULT << RESET << std::endl;
        return 1;
    }
    std::cout << _stack.top() << std::endl;
	return 0;
};


RPN::~RPN(){};


RPN::RPN(RPN const &cpy)
{
	*this = cpy;
};

RPN &RPN::operator=(RPN const &rhs)
{
	if (this == &rhs)
		std::cout << "it is itself" << std::endl;
	return *this;
};