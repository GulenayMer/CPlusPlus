/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:06:43 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/13 17:56:36 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << " (default) Brain constructor called " << RESET << std::endl;
	for(int i = 0; i < 100; i++)
	{
		this->_ideas[i] = " constructing the each idea ";
	}
}

/* copy constructor */
Brain::Brain(const Brain &source_obj)
{
	std::cout << YELLOW << " Brain copy constructor called" << RESET << std::endl;

	for(int i = 0; i < 100; i++)
	{
		this->_ideas[i] = source_obj._ideas[i];
	}
}

/* assignment operator */
Brain &Brain::operator=(const Brain &source_obj)
{
	std::cout << YELLOW << "Brain assignment operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		for(int i = 0; i < 100; i++)
		{
			this->_ideas[i] = source_obj.getIdea(i);
		}
	}
	return (*this);
}

/* setter */
void Brain::setIdea(STR idea, int i)
{
	this->_ideas[i] = idea;
}

/* getter */
STR Brain::getIdea(int i) const
{
	std::cout << BLUE << " Today's Idea: Sleep & Eat & Have Fun " << RESET << std::endl;
	return(this->_ideas[i]);
}


Brain::~Brain()
{
	std::cout << GREEN << " (default) Brain destructor called " << RESET << std::endl;
}
