/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:58:17 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/27 16:14:09 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/* 
	randomly instanciates A, B, or C & returns the instance as a Base pointer
*/
Base *generate(void)
{
	Base 	*baseptr;
	int 	randomChoice;
	
	srand(time(NULL));
	
	randomChoice = rand() % 3;
	
	switch (randomChoice)
	{
		case 0:
			std::cout << GREEN << "A is created\n";
			baseptr = new A;
			break ;
		case 1:
			std::cout << GREEN << "B is created\n";
			baseptr = new B;
			break ;
		case 2:
			std::cout << GREEN << "C is created\n";
			baseptr = new C;
			break ;
	}
	return (baseptr);
}

/*
	prints the actual type of the object pointed to by p: "A", "B" or "C".
*/
void identify(Base *p)
{
	if ( dynamic_cast<A*>(p) )
		std::cout << MAGENTA << "Class Type is A" << RESET << std::endl;
	else if ( dynamic_cast<B*>(p) )
		std::cout << MAGENTA << "Class Type is B" << RESET << std::endl;
	else if ( dynamic_cast<C*>(p) )
		std::cout << MAGENTA << "Class Type is C" << RESET << std::endl;
	else
		std::cout << MAGENTA << "No Type" << RESET << std::endl;
}

/*
	prints the actual type of the object pointed to by p: "A", "B" or "C".
	Using pointer inside this func. not allowed.
*/
void identify(Base &p)
{
	Base temp;
	
	try
	{
		temp = dynamic_cast<A&>(p);
		std::cout << MAGENTA << "Class Type is A" << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		temp = dynamic_cast<B&>(p);
		std::cout << MAGENTA << "Class Type is B" << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		temp = dynamic_cast<C&>(p);
		std::cout << MAGENTA << "Class Type is C" << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}
