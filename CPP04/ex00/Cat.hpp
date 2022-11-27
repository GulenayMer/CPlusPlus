/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:25 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/12 12:38:33 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		/* data */
		
	public:
	
		/* Consructors */
		Cat(/* args */);
		
		/* Copy Constructor */
		Cat(const Cat &source_obj);
		
		/* Assignment Operator*/
		Cat &operator=(const Cat &source_obj);
		
		/* Accessor */
		STR getType(void) const;
		
		/* */
		void makeSound(void) const;
		
		/* Desructor */
		~Cat();
};

#endif