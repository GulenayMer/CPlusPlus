/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:21:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 15:07:38 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentalPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::cout << YELLOW << " thePresident " << RESET << std::endl;
	std::cout << " ------------ " <<  std::endl;
	try
	{
		Bureaucrat theBureau("Merve ", 21);
		
			std::cout << " ------------ " <<  std::endl;
			std::cout << theBureau;
			std::cout << " ------------ " <<  std::endl;
			PresidentalPardonForm f1;
			std::cout << " ------------ " <<  std::endl;
			std::cout << f1;
			std::cout << " ------------ " <<  std::endl;
			f1.signForm(theBureau);
			std::cout << " ------------ " <<  std::endl;
			theBureau.executeForm(f1);
			std::cout << " ------------ " <<  std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	}
	
	std::cout << " =================== " <<  std::endl;
	
	std::cout << YELLOW << " theRobotomy " << RESET << std::endl;
	std::cout << " ------------ " <<  std::endl;
	try
	{
			Bureaucrat theBureau("Merve ", 21);
		
			std::cout << " ------------ " <<  std::endl;
			std::cout << theBureau;
			std::cout << " ------------ " <<  std::endl;
			RobotomyRequestForm f3;
			std::cout << " ------------ " <<  std::endl;
			std::cout << f3;
			std::cout << " ------------ " <<  std::endl;
			f3.signForm(theBureau);
			std::cout << " ------------ " <<  std::endl;
			theBureau.executeForm(f3);
			std::cout << " ------------ " <<  std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	}
	
	std::cout << " =================== " <<  std::endl;
	
	std::cout  << YELLOW << " theSchrubery " << RESET << std::endl;
	std::cout << " ------------ " <<  std::endl;
	try
	{
			Bureaucrat theBureau("Merve ", 21);
		
			std::cout << " ------------ " <<  std::endl;
			std::cout << theBureau;
			std::cout << " ------------ " <<  std::endl;
			ShrubberyCreationForm f2;
			std::cout << " ------------ " <<  std::endl;
			std::cout << f2;
			std::cout << " ------------ " <<  std::endl;
			f2.signForm(theBureau);
			std::cout << " ------------ " <<  std::endl;
			theBureau.executeForm(f2);
			std::cout << " ------------ " <<  std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	}
	return (0);
}
