/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:53:21 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/06 17:59:55 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a(10);
	std::cout << "a: " << a << std::endl;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ));
	std::cout <<  "b: " << b << std::endl;
	Fixed const c( Fixed( 5.05f ) / Fixed( 2 ));
	std::cout <<  "c: " << c << std::endl;
		
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	
		
	std::cout << "max: " << Fixed::max( a, b ) << std::endl;
	std::cout << "min: " << Fixed::min( a, b ) << std::endl;
	
/* 	Fixed a(2.0f);
	Fixed b(6.0f);
	Fixed c(a / b);
	std::cout << c;
	if ((1/3) == (1/3))
		std::cout << "intsf"; */
	return 0;
}
