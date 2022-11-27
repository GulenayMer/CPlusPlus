/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:36:12 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/12 13:07:15 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */): _type_w("WrongAnimal")
{
	std::cout << RED << this->_type_w << GREEN << " (default) constructor called " << RESET << std::endl;
}

WrongAnimal::WrongAnimal(STR type_w): _type_w(type_w)
{
	std::cout << RED << this->_type_w << GREEN << " constructor called " << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &source_obj)
{
	std::cout << YELLOW << " WrongAnimal copy constructor called" << RESET << std::endl;

	*this = source_obj;
}


WrongAnimal &WrongAnimal::operator=(const WrongAnimal &source_obj)
{
	std::cout << YELLOW << "WrongAnimal assignment operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_type_w = source_obj.getType_w();
	}
	return (*this);
}


/* setter */
void WrongAnimal::setType_w(STR type_w)
{
	this->_type_w = type_w;
}

/* getter */
STR WrongAnimal::getType_w(void) const
{
	//std::cout << BLUE << "Base Virtual Method called" << RESET << std::endl;
	return(this->_type_w);
}

void WrongAnimal::makeSound_w(void) const
{
	std::cout << BLUE << "(Base Virtual Method makeSound()) -- wrongAnimal does wrongAnimal sound" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << this->getType_w() << GREEN << " (default) destructor called " << RESET << std::endl;
}