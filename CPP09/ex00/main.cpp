#include "./BitcoinExchange.hpp"


/*
	ERROR CHEKCS:
	1) program must take a file as argument. ( DONE )
	2) Each line in this file must use the following format: "date | value" ( DONE )
	3) A valid date will always be in the following format: Year-Month-Day.
	4) A valid value must be either a float or a positive integer between 0 and 1000. (DONE)
*/


int main(int argc, char *argv[])
{

	if ( argc != 2 )
	{
		std::cerr << RED <<  FILE_MISSING << RESET << std::endl;
		return EXIT_FAILURE;
	}
	else
		BitcoinExchange	bts(argv[1]);

	return EXIT_SUCCESS;
}
