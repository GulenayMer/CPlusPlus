/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:53:06 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/06 18:01:45 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int Fixed::_fractional_bits = 8;

Fixed::Fixed(): _fixed_point_nb(0)
{
	//std::cout << "\e[0;33mDefault Constructor called\e[0m" << std::endl;

}

Fixed::Fixed(const int n)
{
	//std::cout << "\e[0;35mInt constructor is called\e[0m" << std::endl;
	this->_fixed_point_nb = n * (1 << this->_fractional_bits);
}

Fixed::Fixed(const float n)
{
	//std::cout << "\e[0;35mFloat constructor is called\e[0m" << std::endl;
	this->_fixed_point_nb = roundf(n * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed &source_obj)
{
	//std::cout << "\e[0;36mCopy constructor is called\e[0m" << std::endl;
	*this = source_obj;
}

Fixed &Fixed::operator=(const Fixed &source_obj)
{
	//std::cout << "\e[0;36mCopy assignment operator is called\e[0m" << std::endl;
	
	if (this != &source_obj)
	{
		this->_fixed_point_nb = source_obj.getRawBits();
	}
	return (*this); 
}


void Fixed::setRawBits(int const raw)
{
	this->_fixed_point_nb = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed_point_nb);
}


int Fixed::toInt(void) const
{
	return (this->getRawBits() / (1 << this->_fractional_bits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (float)(1 << this->_fractional_bits));
}

/* comparasion operators */
bool Fixed::operator<(const Fixed &source_obj) const
{
	return (this->getRawBits() < source_obj.getRawBits());
}

bool Fixed::operator>(const Fixed &source_obj) const
{
	return (this->getRawBits() > source_obj.getRawBits());
}

bool Fixed::operator<=(const Fixed &source_obj) const
{
	return (this->getRawBits() <= source_obj.getRawBits());
}

bool Fixed::operator>=(const Fixed &source_obj) const
{
	return (this->getRawBits() >= source_obj.getRawBits());
}

bool Fixed::operator==(const Fixed &source_obj) const
{
	return (this->getRawBits() == source_obj.getRawBits());
}

bool Fixed::operator!=(const Fixed &source_obj) const
{
	return (this->getRawBits() != source_obj.getRawBits());
}

/* operators */
Fixed Fixed::operator+( const Fixed &source_obj ) const
{
	return (Fixed(this->toFloat() + source_obj.toFloat()));
}
	
Fixed Fixed::operator-( const Fixed &source_obj ) const
{
	return (Fixed(this->toFloat() - source_obj.toFloat()));
}

Fixed Fixed::operator*( const Fixed &source_obj ) const
{
	return (Fixed(this->toFloat() * source_obj.toFloat()));
}

Fixed Fixed::operator/( const Fixed &source_obj ) const
{
	if (source_obj.toInt() == 0)
		std::cout << "\e[0;33mZero cannot be divided\e[0m" << std::endl;
	return (Fixed(this->toFloat() / source_obj.toFloat()));
}

/*
	increment & decrement operators
	(pre-increment & post-increment -- pre-decrement & post-decrement)
	+ will increase / decrease the fixed point value from the smallest representable
*/

/* pre-increment */
Fixed &Fixed::operator++(void)
{
	//++this->_fixed_point_nb; //+= 1;
	this->_fixed_point_nb += 1;
	return (*this);
}

/* post-increment */
Fixed Fixed::operator++(int)
{
	Fixed temp = *this; // same as: Fixed temp{*this}
	++(*this);
	//this->_fixed_point_nb++;
	return (temp);
}

/* post-decrement */
Fixed &Fixed::operator--(void)
{
	//--this->_fixed_point_nb;
	this->_fixed_point_nb -= 1;
	return (*this);
}

/* pre-decrement */
Fixed Fixed::operator--(int)
{
	Fixed temp = *this; // same as: Fixed temp{*this}
	//this->_fixed_point_nb--;
	--(*this);
	return (temp);
}

/*
	+ A static member func. min that takes as parameters 2 references on fixed-point numbers,
		& returns a reference to the smallest value.
 */
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

/* 
	+ A static member func. min that takes as parameters 2 references on fixed-point numbers,
		& returns a reference to the greatest value.
 */
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

/* 
	+ A constant static member func. min that takes as parameters 2 references on fixed-point numbers,
		& returns a reference to the smallest value.
 */
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

/* 
	+ A constant static member func. min that takes as parameters 2 references on fixed-point numbers,
		& returns a reference to the greatest value.
 */
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}


std::ostream &operator<<(std::ostream &output_stream, Fixed const &ref)
{
	return (output_stream << ref.toFloat());
}


Fixed::~Fixed()
{
	//std::cout << "\e[0;33mDestructor is called, freeing the memory!\e[0m" << std::endl;
}
