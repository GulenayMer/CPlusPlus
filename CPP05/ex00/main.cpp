/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:21:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 15:20:24 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat theBureau("Merve ", 21);
		std::cout << theBureau;
		theBureau.incrementGrade();
		//theBureau.decrementGrade();
		//std::cout << "Grade set to " << theBureau.getGrade() << std::endl;
		std::cout << theBureau;
		std::cout << std::endl;
		
	 	/* 
		std::cout << " ========== " <<  std::endl;
		Bureaucrat anotherB("Jane", 149);
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
		std::cerr << RED << "Exception caught: " << YELLOW << e.what() << RESET << std::endl;
	}
}
