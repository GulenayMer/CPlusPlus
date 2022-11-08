/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:22 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/08 21:19:14 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */)
{
	std::cout << GREEN << "Default Dog constructoR called " << RESET << std::endl;
}

Dog::Dog(const Dog &source_obj)
{
	std::cout << YELLOW << "Dog Copy ConstructoR called" << RESET << std::endl;

	*this = source_obj;
}

Dog &Dog::operator=(const Dog &source_obj)
{
	std::cout << BLUE << "Dog Assignment OperatoR called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_type = source_obj._type;
	}
	return (*this);
}


Dog::~Dog()
{
	std::cout << GREEN << "Dog destructoR called " << RESET << std::endl;
}
