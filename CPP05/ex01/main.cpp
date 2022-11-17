/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:21:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 12:17:44 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	//try
	//{
		Bureaucrat theBureau("Merve ", 21);
		try
		{
			Form form1("From1", 10, 10);
			std::cout << " ------------ " <<  std::endl;
			form1.signForm(theBureau);
			std::cout << form1;
			theBureau.signForm(form1);
			std::cout << " ------------ " <<  std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	/* }
	catch(std::exception &e)
	{
		std::cerr << "Exception caught " << e.what() << std::endl;
	} */
}

