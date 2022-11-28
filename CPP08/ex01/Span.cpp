/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:23:37 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/28 18:46:41 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
	Span class that can store a max. of N integers.
	N -- an unsigned int var, only parameter to pass to constructor.
*/

Span::Span():_limit(0)
{
	
}

Span::Span(unsigned int N): _limit(N)
{
	
}

Span::Span(const Span &src_obj)
{
	*this = src_obj;
}

Span &Span::operator=(const Span &src_obj)
{
	if (this == &src_obj)
		return (*this);
	this->_limit = src_obj._limit;
	this->_vec.clear();
	this->_vec = src_obj._vec;
	return (*this);
}

unsigned int Span::getSize(void)
{
	return (this->_vec.size());
}

void Span::printVector(void)
{
	std::vector<int>::const_iterator iter;
	
	std::cout << GREEN << "---- VECTOR ---- ";
	
	for (iter = this->_vec.begin(); iter != this->_vec.end(); ++iter)
		std::cout << *iter << " ";
	std::cout << GREEN << " [SIZE: " << this->getSize() << "]" << RESET << std::endl;
}


/* adds a single number to the Span , will be used in order to fill it
	Any attempt to add a new element if there are already N elements stored 
	should throw an exception.
*/
void Span::addNumber(int new_nb)
{
	if (this->_vec.size() >= this->_limit)
		throw Span::OutOfBoundsException();
	this->_vec.push_back(new_nb);
}

/*
	these func.s will respectively find out the shortest span or the longest span (or distance, if
	you prefer) btw all the numbers stored, and return it. 
	If there are no numbers stored, or only one, no span can be found. Thus, throw an exception.
*/
unsigned int Span::shortestSpan(void)
{
	unsigned int difference;
		
	if(this->_vec.size() <= 1)
		throw Span::NoSpanException();
	
	std::vector <int> temp = this->_vec;
	std::sort(temp.begin(), temp.end());
	difference = *max_element(temp.begin(), temp.end());
	for (unsigned int i = 0; i < temp.size() - 1; i++)
	{
		if (abs(temp[i + 1] - temp[i]) < difference)
			difference = abs(temp[i + 1] - temp[i]);
	}
	return (difference);
}


unsigned int Span::longestSpan(void)
{
	unsigned int min;
	unsigned int max;
	unsigned int difference;
	
	if(this->_vec.size() <= 1)
		throw Span::NoSpanException();

	min = *min_element(this->_vec.begin(),this->_vec.end());
	max = *max_element(this->_vec.begin(),this->_vec.end());
	difference = max - min;
	return (difference);
}

void Span::addMany(unsigned int N)
{
	srand(time(NULL));
	
	int s = this->_vec.size();
	int r = rand() % 100;

	if (s + N > this->_limit)
		throw Span::OutOfBoundsException();
	for (unsigned int i = s; i < this->_limit && i < N; i++)
	{
		this->_vec.push_back(r + i);
	}
}

Span::~Span()
{
	this->_vec.clear();
}