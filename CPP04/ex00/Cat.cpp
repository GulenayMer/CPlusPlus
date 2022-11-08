/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:27 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/08 21:26:14 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */): Animal("Cat")
{
	std::cout << GREEN << this->_type << "Default Cat constructoR called " << RESET << std::endl;
}

Cat::Cat(const Cat &source_obj)
{
	std::cout << YELLOW << "Cat Copy ConstructoR called" << RESET << std::endl;

	*this = source_obj;
}

Cat &Cat::operator=(const Cat &source_obj)
{
	std::cout << BLUE << "Cat Assignment OperatoR called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_type = source_obj._type;
	}
	return (*this);
}

STR Cat::getType() const
{
	return (this->_type);
}

Cat::~Cat()
{
	std::cout << GREEN << "Cat destructoR called " << RESET << std::endl;
}
