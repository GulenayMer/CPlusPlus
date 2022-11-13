/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:19 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/13 17:58:05 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	
	private:
		
		Brain *_brain;

	public:
	
		/* Constructors */
		Dog(/* args */);
		Dog(const Dog &source_obj);

		/* Assingment Operators */
		Dog &operator=(const Dog &source_obj);
		
		/* */
		void setIdea(STR brain, int i);
		STR getType(void) const;
		STR getIdea(int i) const;
		
		/* */
		void makeSound(void) const;
		Brain *getBrainI();
		
		/* Desructor */
		virtual ~Dog();
};

#endif