/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:36:26 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/12 13:10:51 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

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

class WrongAnimal
{
	private:
	
		STR _type_w;
		
	public:
		
		WrongAnimal(/* args */);
		WrongAnimal(STR type_w);
		
		WrongAnimal(const WrongAnimal &source_obj);
		WrongAnimal &operator=(const WrongAnimal &source_obj);

		void makeSound(void);
		
		STR getType_w(void) const; // virtual
		void setType_w(STR type_w);

		void makeSound_w(void) const; // virtual
		
		virtual ~WrongAnimal();
};

#endif