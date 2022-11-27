/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:53:21 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/06 17:26:30 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* 
	The f tells the compiler to interpret the literal as a floating point number 
	of type float
*/

int main( void )
{
	Fixed a;
	std::cout << "a-----------" << std::endl;
	
	Fixed b( 10 );
	std::cout << "b-----------" << std::endl;
	
	Fixed c( 42.42987899999f );
	std::cout << "c-----------" << std::endl;
	
	/* copy constructor */
	Fixed d( b );
	std::cout << "d-----------" << std::endl;
	
	/* calling the float constructor and assigning it to a */
	a = Fixed( 1234.4321f );
	std::cout << "e-----------" << std::endl;


	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "-----------" << std::endl;
		
	std::cout << "a is " << a.toInt() << " as an integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as an integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as an integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as an integer" << std::endl;

	std::cout << "-----------" << std::endl;
	
	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;
	
	std::cout << "-----------" << std::endl;
	
	return 0;
}
