/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:18:43 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 22:37:03 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(/* args */)
{
	std::cout << GREEN << "Default Animal constructor called " << RESET << std::endl;
}

Animal::Animal(STR type): _type(type)
{
	std::cout << RED << this->_type << GREEN << " (animal) constructor called " << RESET << std::endl;
}

Animal::Animal(const Animal &source_obj)
{
	std::cout << YELLOW << " Animal copy constructor called" << RESET << std::endl;

	*this = source_obj;
}

Animal &Animal::operator=(const Animal &source_obj)
{
	std::cout << BLUE << "Animal assignment operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_type = source_obj.getType();
	}
	return (*this);
}

void Animal::setType(STR type)
{
	this->_type = type;
}

STR Animal::getType(void) const
{
	std::cout << BLUE << "Base Virtual Method called" << RESET << std::endl;
	return(this->_type);
}

/*
	+ If we do not use virtual function, we would need to overload the intermediate function
	so it takes a Cat*.
	+ If we have to derive more animals from Animal they would all need their own makeSound()
	function.
	+ A virtual func. helps ensure to call the correct func. via a reference or pointer
*/
void Animal::makeSound(void) const
{
	std::cout << BLUE << "Base Virtual Method makeSound() called" << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << GREEN << "Default Animal Destructor called " << RESET << std::endl;
}
