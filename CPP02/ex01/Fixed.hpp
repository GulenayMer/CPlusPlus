/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:53:13 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/04 18:45:30 by mgulenay         ###   ########.fr       */
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

		/* Copy (cannonical)*/
		Fixed( const Fixed &source_obj );

		/* Operators */
		Fixed &operator=( const Fixed &source_obj );
			
		/* Destructor */
		~Fixed();

		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
		
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

/* 
An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter 
*/
std::ostream &operator<<(std::ostream &output_stream, Fixed const &ref);



#endif
