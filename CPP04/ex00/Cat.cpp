/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:27 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 22:31:48 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */): Animal::Animal("Cat")
{
	std::cout << RED << this->_type << GREEN << " (default) constructor called " << RESET << std::endl;
}

Cat::Cat(const Cat &source_obj)
{
	std::cout << YELLOW << "Cat copy constructor called" << RESET << std::endl;

	*this = source_obj;
}

Cat &Cat::operator=(const Cat &source_obj)
{
	std::cout << BLUE << "Cat assignment operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_type = source_obj._type;
	}
	return (*this);
}

STR Cat::getType(void) const
{
	return (this->_type);
}

void Cat::makeSound(void) const
{
	std::cout << RED << this->_type << BLUE << " miavvsss" << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << RED << this->getType() << GREEN << " destructor called " << RESET << std::endl;
}
