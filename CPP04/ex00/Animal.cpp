/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:18:43 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/08 20:57:44 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(/* args */)
{
	std::cout << GREEN << "Default Animal constructoR called " << RESET << std::endl;
}

Animal::Animal(STR type): _type(type)
{
	std::cout << GREEN << this->_type << "Animal ConstructoR called " << RESET << std::endl;
}

Animal::Animal(const Animal &source_obj)
{
	std::cout << YELLOW << "Animal Copy ConstructoR called" << RESET << std::endl;

	*this = source_obj;
}

Animal &Animal::operator=(const Animal &source_obj)
{
	std::cout << BLUE << "Animal Assignment OperatoR called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_type = source_obj._type;
	}
	return (*this);
}

void Animal::setType(STR type)
{
	this->_type = type;
}

STR Animal::getType(void) const
{
	std::cout << BLUE << "Base Virtual Method" << RESET << std::endl;
	return(this->_type);
}

/*
	If we do not use virtual function, we would need to overload the intermediate function
	so it takes a Cat*.
	If we have to derive more animals from Animal they would all need their own makeSound()
	function.
*/
void Animal::makeSound(STR type) const
{
	std::cout << BLUE << "Base Virtual Method" << RESET << std::endl;
	std::cout << RED << this->_type << BLUE << " makes sounds" << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << GREEN << "Default DestructoR called " << RESET << std::endl;
}
