/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:22 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/13 16:59:28 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */): Animal("Dog")
{
	std::cout << RED << this->_type << GREEN << " (default) constructor called " << RESET << std::endl;

	this->_brain = 0;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &source_obj): Animal(source_obj._type)
{
	std::cout << YELLOW << "Dog Copy Constructor called" << RESET << std::endl;

	this->_type = source_obj.getType();
	this->_brain = new Brain();
	*(this->_brain) = *(source_obj._brain);
}

Dog &Dog::operator=(const Dog &source_obj)
{
	std::cout << BLUE << "Dog assignment operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_type = source_obj.getType();
		this->_brain = new Brain();
		*(this->_brain) = *(source_obj._brain);
	}
	return (*this);
}

STR Dog::getType(void) const
{
	return (this->_type);
}

void Dog::setIdea(STR brain, int i)
{
	this->_brain->setIdea(brain, i);
}

STR Dog::getIdea(int i) const
{
	return (this->_brain->getIdea(i));
}

Brain *Dog::getBrainI()
{
	return(this->_brain);	
}

void Dog::makeSound(void) const
{
	std::cout << RED << this->_type << BLUE << " hawwwws" << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << RED << this->getType() << GREEN << " destructor called " << RESET << std::endl;

	delete this->_brain;
}
