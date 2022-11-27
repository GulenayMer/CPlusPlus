/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:18:55 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/06 12:32:38 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

/* 
	public members:
	+ a default constructor that initializes 
		the fixed-point number value to 0
	+ a copy constructor
	+ a copy assignment operator overload
	+ a destructor
	+ a member func. int getRawBits( void ) const;
		that returns the raw value of the fixed-point value
	+ void setRawBits( int const raw ); that sets the raw 
		value of the fixed-point number
*/

/*
	private members:
	+ an integer to store the fixed-point number value
	+ a static constant integer to store the number of fractional bits. 
	  Its value will always be the integer literal 8.
*/

class Fixed
{
	private:

		int					_fixed_point_nb;
		static const int	_fractional_bits;
		
	public:
	
		/* Constructors */
		Fixed();
		
		/* Copy (cannonical)*/
		Fixed(const Fixed &source_obj);

		/* operators */
		Fixed &operator=(const Fixed &source_obj);
		
		/* Accessors -- Setter & Getter */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		/* destructor */
		~Fixed();
};

#endif