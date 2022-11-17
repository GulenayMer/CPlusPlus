/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:21:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/15 18:42:02 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat theBureau("Merve ", 1);
		std::cout << " ------------ " <<  std::endl;
		std::cout << theBureau;
		std::cout << " ------------ " <<  std::endl;
		theBureau.incrementGrade();
		std::cout << " ------------ " <<  std::endl;
		std::cout << theBureau;
		std::cout << " ------------ " <<  std::endl;
		std::cout << std::endl;
		
		std::cout << " ========== " <<  std::endl;
		
	/* 	Bureaucrat anotherB;
		std::cout << " ------------ " <<  std::endl;
		std::cout << anotherB;
		anotherB.decrementGrade();
		std::cout << " ------------ " <<  std::endl;
		std::cout << anotherB;
		std::cout << " ------------ " <<  std::endl;
		std::cout << std::endl; */
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	}
}
