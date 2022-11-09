/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:22 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 22:40:06 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */): Animal::Animal("Dog")
{
	std::cout << RED << this->_type << GREEN << " (default) constructor called " << RESET << std::endl;
}

Dog::Dog(const Dog &source_obj)
{
	std::cout << YELLOW << "Dog Copy Constructor called" << RESET << std::endl;

	*this = source_obj;
}

Dog &Dog::operator=(const Dog &source_obj)
{
	std::cout << BLUE << "Dog assignment operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_type = source_obj._type;
	}
	return (*this);
}

STR Dog::getType(void) const
{
	return (this->_type);
}

void Dog::makeSound(void) const
{
	std::cout << RED << this->_type << BLUE << " huuwwws" << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << RED << this->getType() << GREEN << " destructor called " << RESET << std::endl;
}
