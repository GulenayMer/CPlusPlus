/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:19 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 22:28:49 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	
	private:
		/* data */

	public:
	
		/* Constructors */
		Dog(/* args */);
		Dog(const Dog &source_obj);

		/* Assingment Operators */
		Dog &operator=(const Dog &source_obj);
		
		/* */
		STR getType(void) const;
		
		/* */
		void makeSound(void) const;
		
		/* Desructor */
		~Dog();
};

#endif