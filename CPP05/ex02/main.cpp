/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:21:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 18:50:53 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::cout << YELLOW << " ################# FORMS ################# " << RESET << std::endl;

	Bureaucrat theBureau("Jane", 1);
	//Bureaucrat theBureau("Jane", 145);
	//Bureaucrat theBureau("Jane", 150);
	
	std::cout << GREEN << "--------------------------" << std::endl;

	PresidentialPardonForm form_PPF("Johny English");
	RobotomyRequestForm	form_RRF("RobotWorld");
	ShrubberyCreationForm form_SCF("Home");

	theBureau.signForm(form_PPF);
	theBureau.signForm(form_RRF);
	theBureau.signForm(form_SCF);

	std::cout << std::endl
        		<< form_PPF << std::endl
    			<< form_RRF << std::endl
    			<< form_SCF << std::endl;
 
	theBureau.executeForm(form_PPF);
	theBureau.executeForm(form_RRF);
	theBureau.executeForm(form_SCF);

  	std::cout << std::endl
           	 	<< YELLOW
            	<< "---------------------"
            	<< std::endl;

	return (0);
}
