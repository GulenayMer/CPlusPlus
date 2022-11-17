/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:38:52 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/17 19:52:48 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
	++ (literal : constants refer to fixed values that the program may not alter &
		called as literals; int, floating-point num, chars, string, booleans)
	++ takes as parameter a string representation of a C++ literal in its most common form.
	++ the literal must belong to these scalar types: char, int, float or double
	++ except for char parameters, only the decimal notation will be used.
	

	-- first detect the type of the literal passed as parameter,
	-- convert it from string to its actual type,
	-- then, convert it explicitly to the three other data types.
	-- lastly, display the results as shown below.
*/


/*
	++ strtod() ; convert string to double
		parses the C-string str interpreting its content as a floating point nb, 
		& returns its value as a double.
*/

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::string aStr = argv[1];

	double doubleNum = strtod(aStr.c_str(), NULL);

	
	/* 	char 
		+ find_first_of() : Searches the string for the first character that 
			matches any of the characters specified in its arguments.

	*/
	
	if ((aStr.find_first_of("0123456789") == std::string::npos) && aStr.length() == 1)
		std::cout << "char: '" << aStr[0] << "'" << std::endl;
	else if (isprint(doubleNum))
		std::cout << "char: '" << static_cast<char>(doubleNum) << "'" << std::endl;
	else if (doubleNum == 127 || (doubleNum < 32 && doubleNum > 0))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	
	/*  int
		
	*/
	if (!doubleNum && aStr[0] != '0')
		std::cout << "int: " << static_cast<int>(aStr[0]) << std::endl;
	else if (doubleNum > INT_MAX || doubleNum < INT_MIN || isnan(doubleNum))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << atoi(aStr.c_str()) << std::endl;


	return (0);	
}

