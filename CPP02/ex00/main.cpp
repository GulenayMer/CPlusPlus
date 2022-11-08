/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:18:46 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/06 17:16:14 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	/* source object */
	Fixed a;
	std::cout << "a-----------" << std::endl;
	/* new object copied from the object a */
	Fixed b( a );
	std::cout << "b-----------" << std::endl;
	/* object c */
	Fixed c;
	std::cout << "c-----------" << std::endl;
	/* values of the object b is assigned to the object c */
	c = b;
	std::cout << "d-----------" << std::endl;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "e-----------" << std::endl;
	return 0;
}