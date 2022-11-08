/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:53:13 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/05 12:43:51 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>


class Fixed
{
	private:

		int					_fixed_point_nb;
		static const int	_fractional_bits;
		
	public:
		
		/* Constructors */
		Fixed();	
		Fixed(const int nb);
		Fixed(const float nb);
		
		/* Copy Contructor */
		Fixed( const Fixed &source_obj );

		/* Assignment Operator */
		Fixed &operator=( const Fixed &source_obj );
	
		/* Comparasion Operators */
		bool operator<( const Fixed &source_obj ) const;
		bool operator>( const Fixed &source_obj ) const;
		bool operator<=( const Fixed &source_obj ) const;
		bool operator>=( const Fixed &source_obj ) const;
		bool operator==( const Fixed &source_obj ) const;
		bool operator!=( const Fixed &source_obj ) const;

		/* Arithmetic Operators */
		Fixed operator+( const Fixed &source_obj ) const;
		Fixed operator-( const Fixed &source_obj ) const;
		Fixed operator*( const Fixed &source_obj ) const;
		Fixed operator/( const Fixed &source_obj ) const;

		/* Increment & Decrement Operators */
		Fixed &operator++( void );
		Fixed &operator--( void );
		Fixed operator++( int );
		Fixed operator--( int );

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		/* Static functions */
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);

		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);

		/* Destructor */
		~Fixed();

};

/* 
An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter 
*/
std::ostream &operator<<(std::ostream &output_stream, Fixed const &ref);

#endif