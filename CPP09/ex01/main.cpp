#include "RPN.hpp"

/*
	ERROR Check :

	1) program must take an inverted Polish mathematical expression as an argument. ( DONE )
	2) The numbers used in this operation will always be less than 10 
	3) program must process this expression and output the correct result on the
		standard output.
	4) If an error occurs during the execution of the program an error message should be
		displayed on the standard output
	5) program must be able to handle operations with these tokens: " + - / * ".

*/


int main(int argc, char *argv[])
{

	if ( argc != 2)
	{
		std::cerr << RED <<  ARG_MISSING << RESET << std::endl;
		return EXIT_FAILURE;
	}

	RPN	rpn(argv[1]);

	return 0;
}