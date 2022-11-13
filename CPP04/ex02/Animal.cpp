/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:18:43 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/12 12:46:14 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* default constructor */
Animal::Animal(/* args */): _type("Animal")
{
	std::cout << RED << this->_type << GREEN << " (default animal) constructor called " << RESET << std::endl;
}

/* constructor with the type parameter */
Animal::Animal(STR type): _type(type)
{
	std::cout << RED << this->_type << GREEN << " (animal) constructor called " << RESET << std::endl;
}

/* copy constructor */
Animal::Animal(const Animal &source_obj)
{
	std::cout << YELLOW << " Animal copy constructor called" << RESET << std::endl;

	*this = source_obj;
}

/* assignment operator */
Animal &Animal::operator=(const Animal &source_obj)
{
	std::cout << BLUE << "Animal assignment operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_type = source_obj.getType();
	}
	return (*this);
}

/* setter */
void Animal::setType(STR type)
{
	this->_type = type;
}

/* getter */
STR Animal::getType(void) const
{
	//std::cout << BLUE << "Base Virtual Method getType() called" << RESET << std::endl;
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
	std::cout << BLUE << "(Base Virtual Method makeSound()): Animal is making a generic sound" << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << RED << this->getType() << GREEN << " (default animal) destructor called " << RESET << std::endl;
}
