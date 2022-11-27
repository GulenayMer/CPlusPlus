/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:27 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/13 17:38:26 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(0)
{
	std::cout << RED << this->_type << GREEN << " (default) constructor called " << RESET << std::endl;

	this->_brain = new Brain();
}

Cat::Cat(const Cat &source_obj): Animal(source_obj._type)
{
	std::cout << YELLOW << "Cat copy constructor called" << RESET << std::endl;

	this->_type = source_obj.getType();
	this->_brain = new Brain();
	*(this->_brain) = *(source_obj._brain);
}

Cat &Cat::operator=(const Cat &source_obj)
{
	std::cout << YELLOW << "Cat assignment operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_type = source_obj.getType();
		this->_brain = new Brain();
		*(this->_brain) = *(source_obj._brain);
	}
	return (*this);
}

STR Cat::getType(void) const
{
	return (this->_type);
}

void Cat::setIdea(STR brain, int i)
{
	this->_brain->setIdea(brain, i);
}

STR Cat::getIdea(int i) const
{
	return (this->_brain->getIdea(i));
}

Brain *Cat::getBrainI() const
{
	return(this->_brain);	
}

void Cat::makeSound(void) const
{
	std::cout << RED << this->_type << BLUE << " miavvsss" << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << RED << this->getType() << GREEN << " destructor called " << RESET << std::endl;
	
	delete this->_brain;
}
