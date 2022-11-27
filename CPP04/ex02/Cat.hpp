/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:25 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/13 17:57:58 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		
		Brain *_brain;
		
	public:
	
		/* Consructors */
		Cat(/* args */);
		
		/* Copy Constructor */
		Cat(const Cat &source_obj);
		
		/* Assignment Operator*/
		Cat &operator=(const Cat &source_obj);
		
		/* Accessor */
		void setIdea(STR brain, int i);
		STR getType(void) const;
		STR getIdea(int i) const;
		
		/* */
		void makeSound(void) const;
		Brain *getBrainI() const;
		
		/* Desructor */
		virtual ~Cat();
};

#endif