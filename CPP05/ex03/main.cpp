/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:21:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 17:12:06 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentalPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << YELLOW << " thePresident " << RESET << std::endl;
	std::cout << " ------------ " <<  std::endl;
	try
	{
		Bureaucrat theBureau("Merve ", 21);
		Intern		theIntern;
		Form		*prf;
		
		prf = theIntern.makeForm("presidential form", "aPreForm");
		if (prf)
		{
			std::cout << *prf << std::endl;
			std::cout << " ------------ " <<  std::endl;
			prf->signForm(theBureau);
			std::cout << " ------------ " <<  std::endl;
			theBureau.executeForm(*prf);
			std::cout << std::endl;
		}
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
		Intern		theIntern;
		Form		*rrf;
		
		rrf = theIntern.makeForm("robotomical form", "aRobForm");
		if (rrf)
		{
			std::cout << *rrf << std::endl;
			std::cout << " ------------ " <<  std::endl;
			rrf->signForm(theBureau);
			std::cout << " ------------ " <<  std::endl;
			theBureau.executeForm(*rrf);
			std::cout << std::endl;
		}
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
		Intern		theIntern;
		Form		*scf;
		
		scf = theIntern.makeForm("Schrubery form", "aSchruberyForm");
		if (scf)
		{
			std::cout << *scf << std::endl;
			std::cout << " ------------ " <<  std::endl;
			scf->signForm(theBureau);
			std::cout << " ------------ " <<  std::endl;
			theBureau.executeForm(*scf);
			std::cout << std::endl;
		}
	}
	catch(std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	}
	return (0);
}
