/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:39:52 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/12 13:09:54 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */): _type_w("WrongCat")
{
	std::cout << RED << this->_type_w << GREEN <<  " (default WrongCat) constructor called " << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &source_obj): WrongAnimal(source_obj._type_w)
{
	std::cout << YELLOW << "WrongCat copy constructor called" << RESET << std::endl;

	*this = source_obj;
}

WrongCat &WrongCat::operator=(const WrongCat &source_obj)
{
	std::cout << YELLOW << "WrongCat assignment operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_type_w = source_obj._type_w;
	}
	return (*this);
}

void WrongCat::setType_w(STR type_w)
{
	this->_type_w = type_w;
}

STR WrongCat::getType_w(void) const
{
	return (this->_type_w);
}

void WrongCat::makeSound_w(void) const
{
	std::cout << RED << this->_type_w << BLUE << " a lot of wrong miavvsss" << RESET << std::endl;
}


WrongCat::~WrongCat()
{
	std::cout << RED << this->getType_w() << GREEN << " (default) destructor called " << RESET << std::endl;
}
