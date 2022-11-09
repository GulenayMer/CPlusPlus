/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:18:55 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 22:27:58 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */


#define STR std::string


class Animal
{
	private:
		/* data */				

	protected:

		STR _type;	
		
	public:
		
		/* Constructors */
		Animal(/* args */);
		Animal(STR type);
		
		/* Copy Constructor */
		Animal(const Animal &source_obj);

		/* Assginment Operator*/
		Animal &operator=(const Animal &source_obj);
		
		/* Accessors */
		void	setType(STR type);
		virtual	STR getType(void) const;

		/*  */
		virtual void makeSound(void) const;

		/* Desructor */		
		~Animal();
};

#endif