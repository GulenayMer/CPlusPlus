/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:18:32 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/06 17:13:04 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*    fixed-point numbers  */
/* 
	the orthodox canonical class form
	+ a default constructor: used internally to initialize objects & data 
		members when no other value is available
	+ a copy constructor: used in the implementation of call-by-value
		parameters
	+ an assignment operator: used to assign one value to another
	+ a destructor: invoked when an object is deleted
	
*/

const int Fixed::_fractional_bits = 8;


Fixed::Fixed(): _fixed_point_nb(0)
{
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}

/* copy constructor:  
	+ is a constructor which creates an object by initializing it with an object
		of the same class, which has been created previously.
	+ copy const. takes a reference to an object of the same class as an arg.
	+ copies the values of the data variables of one object of a class to the data 
		members of another object of the same class
*/
Fixed::Fixed(const Fixed &source_obj)
{
	std::cout << "\e[0;35mCopy Constructor is called\e[0m" << std::endl;
	*this = source_obj;
}

/*
	Assignment operator is used to copy values from one object to another
	already existing object
*/
Fixed &Fixed::operator=(const Fixed &source_obj)
{
	std::cout << "\e[0;36mAssignment operator is called\e[0m" << std::endl;
	
	/* protect against invalid self-assignment */
	if (this != &source_obj)
	{
		this->_fixed_point_nb = source_obj.getRawBits();
	}
	/* returning the pointer to the object assigned */ 
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function is called" << std::endl;
	this->_fixed_point_nb = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "\e[0;91mgetRawBits member function is called\e[0m" << std::endl;
	return (this->_fixed_point_nb);
}

Fixed::~Fixed()
{
	std::cout << "\e[0;33mDefault Destructor is called\e[0m" << std::endl;
}
