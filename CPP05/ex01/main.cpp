/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:21:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 18:57:09 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat theBureau("Merve", 20);
		//Bureaucrat theBureau("Merve", 150);
		//Bureaucrat theBureau("Merve", 151);
		try
		{
			Form form1("From1", 20, 10);
			theBureau.signForm(form1);
			form1.beSigned(theBureau);
			std::cout << form1;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch(std::exception &e)
	{
		std::cerr << YELLOW << "Exception caught: " << e.what() << RESET << std::endl;
	}
}
