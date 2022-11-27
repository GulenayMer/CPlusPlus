/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:20:27 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/27 17:25:17 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/*  
	handle these pseudo literals :  -inff, +inff & nanf
	handle these pseudo literals :	-inf, +inf & nan
*/

int	check_pseudos(STR arg)
{
	if (arg == "-inff" || arg == "inff" || arg == "nanf" || arg == "-inf" || arg == "inf" || arg == "nan")
		return (1);
	return (0);
}


/* */
int	check_char(STR arg)
{
	int length;

	length = arg.length();
	if ( length == 1 && !isdigit(arg[0]) && isprint(arg[0]) )
		return (1);
	return (0);
}

/* 
	++ strtod() ; convert string to double
		parses the C-string str interpreting its content as a floating point nb, 
		& returns its value as a double.
*/

void	cast_literals(STR arg)
{

	double  d_value;
	float 	f_value;
	
	/* strtod -- convert a str to a floating-point num */
	d_value = strtod(arg.c_str(), NULL);
	
	/*  ------------  char -------------------- */
	if ( check_char(arg) == 1)
		std::cout << "char: '" << arg[0] << "'" << std::endl;
	else if ( check_pseudos(arg) == 1 || d_value < 0 || d_value > 127)
			std::cout << "char: impossible" << std::endl;
	else if (isprint(d_value))
		std::cout << "char: '" <<  static_cast<char>(d_value) << "'" <<  std::endl;
	else if (d_value == 127 || (d_value < 32 && d_value >= 0))
		std::cout << "char: Non displayable" <<  std::endl;

	/* ---------------- int ---------------- */
	if ( !d_value && arg[0] != '0' )
		std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
	else if ( check_pseudos(arg) == 1 || d_value > std::numeric_limits<int>::max() || d_value < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << atoi(arg.c_str()) << std::endl;


	/* --------------- float ---------------- */
	//precision() -- get/set floating-point decimal precision
	
	std::cout.precision(1);
	
	f_value = strtof(arg.c_str(), NULL);

	if (!f_value && arg[0] != '0')
		std::cout << std::fixed << "float: " << static_cast<float>(arg[0]) << "f" << std::endl;
	else
		std::cout << std::fixed << "float: " << f_value << "f" << std::endl;


	/* ----------- double ------------ */
	if (!d_value && arg[0] != '0')
		std::cout << "double: " << static_cast<double>(arg[0]) << "f" << std::endl;
	else
		std::cout << "double: " << d_value << std::endl;
}
