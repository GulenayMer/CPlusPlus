/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:21:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 19:32:06 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << YELLOW << " ################# FORMS AND INTERN ################# " << RESET << std::endl;
	
	Intern theIntern;
	
	std::cout << MAGENTA << "----------------------------------------" << RESET << std::endl;
	std::cout << MAGENTA << "Intern is creating Presidential Pardon Form" << RESET << std::endl;
	
	AForm *form_PPF;
	
	form_PPF = theIntern.makeForm("Presidential Pardon", "Johny English");
	
	Bureaucrat someGuy("John", 5);
	std::cout << RED << std::endl 
				<< someGuy << std::endl 
				<< std::endl;
	
	if (form_PPF)
	{
		someGuy.signForm(*form_PPF);
		std::cout << std::endl 
				<< *form_PPF << std::endl; 
		someGuy.executeForm(*form_PPF);
	}
	
	std::cout << MAGENTA << "----------------------------------------" << RESET << std::endl;
	std::cout << MAGENTA << "Intern is creating Robotomy Request Form" << RESET << std::endl;

	AForm *form_RRF;

	form_RRF = theIntern.makeForm("Robotomy Request", "RobotWorld");

		Bureaucrat another("Jane", 82);
	std::cout << RED << std::endl 
				<< another << std::endl 
				<< std::endl;
	
	if (form_RRF)
	{
		another.signForm(*form_PPF);
		std::cout << std::endl 
				<< *form_PPF << std::endl; 
		another.executeForm(*form_PPF);
	}
	
	std::cout << MAGENTA << "----------------------------------------" << RESET << std::endl;
	std::cout << MAGENTA << "Intern is creating Shrubbery Creation Form" << RESET << std::endl;

	AForm *form_SCF;

	form_SCF = theIntern.makeForm("Shrubbery Creation", "Home");

		Bureaucrat lalala("Mike", 56);
		
		std::cout << RED << std::endl 
				<< lalala << std::endl 
				<< std::endl;
	
	if (form_SCF)
	{
		lalala.signForm(*form_SCF);
		std::cout << std::endl 
				<< *form_SCF << std::endl; 
		lalala.executeForm(*form_SCF);
	}

	/* 
	AForm *form_invalid = NULL;
	form_invalid = theIntern.makeForm("Hello", "Aloha");
	if (form_invalid == NULL)
		std::cout << "Form is null" << std::endl; */

	delete form_PPF;
	delete form_RRF;
	delete form_SCF;
	
	return (0);
}
