 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:53:06 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/05 11:48:51 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int Fixed::_fractional_bits = 8;


Fixed::Fixed(): _fixed_point_nb(0)
{
	std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;
}

/* This constructor takes a constant integer as a parameter
	& converts it to the corresponding fixed-point value
	+ We take the input value and multiply it by (2powerfractional_bits):
*/
Fixed::Fixed(const int n)
{
	std::cout << "\e[0;34mInt constructor is called\e[0m" << std::endl;
	
	this->_fixed_point_nb = n * (1 << this->_fractional_bits);
}

/*
	This constructor takes a constant floating-point number as a parameter
	& converts it to the corresponding fixed-point value
	+ We take the input value and multiply it by (2powerfractional_bits),
	 putting the result into a float:
*/
Fixed::Fixed(const float n)
{
	std::cout << "\e[0;34mFloat constructor is called\e[0m" << std::endl;
	
	this->_fixed_point_nb = roundf(n * (1 << this->_fractional_bits));
}


Fixed::Fixed(const Fixed &source_obj)
{
	std::cout << "\e[0;35mCopy Constructor is called\e[0m" << std::endl;
	*this = source_obj;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_point_nb = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed_point_nb);
}

Fixed &Fixed::operator=(const Fixed &source_obj)
{
	std::cout << "\e[0;36mCopy assignment operator is called\e[0m" << std::endl;
	
	if (this != &source_obj)
	{
		this->_fixed_point_nb = source_obj.getRawBits();
	}
	return (*this); 
}

/*
	converts the fixed-point value to an integer
	+ We take the input value and divide it by (2powerfractional_bits):
*/
int Fixed::toInt(void) const
{
	return (this->getRawBits() / (1 << this->_fractional_bits));
}

/* 
	converts the fixed-point value to a floating-point value
	+ We take the input value and divide it by (2powerfractional_bits),
	 putting the result into a float:
*/
float Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (float)(1 << this->_fractional_bits));
}

/*
	An overload of the insertion («) operator that inserts a floating-point 
	representation of the fixed-point number into the output stream object
	passed as parameter
*/
std::ostream &operator<<(std::ostream &output_stream, Fixed const &ref)
{
	return (output_stream << ref.toFloat());
}

Fixed::~Fixed()
{
	std::cout << "\e[0;33mDefault Destructor is called\e[0m" << std::endl;
}
