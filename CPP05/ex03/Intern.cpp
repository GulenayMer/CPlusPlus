/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:09:02 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 19:18:20 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	// std::cout << GREEN << " (default Intern) constructor called " << RESET << std::endl;	
}

Intern::Intern(const Intern &src_obj)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
	(void)src_obj;
	//*this = src_obj;
}

Intern &Intern::operator=(const Intern &src_obj)
{
	std::cout << BLUE << "Assignment Operator called" << RESET << std::endl;
	
	if (this != &src_obj)
	{
		(void)src_obj;
	}
	return(*this);
}

AForm *Intern::makeprf(const STR target)
{
	AForm *form = new PresidentialPardonForm(target);
	return(form);
}

AForm *Intern::makerrf(const STR target)
{
	AForm *form = new RobotomyRequestForm(target);
	return(form);
}

AForm *Intern::makescf(const STR target)
{
	AForm *form = new ShrubberyCreationForm(target);
	return(form);
}

AForm *Intern::makeForm(STR formName, const STR target)
{
	allMakeFunctions func[3] = { &Intern::makeprf, &Intern::makerrf, &Intern::makescf};
	
	STR arr[3] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};

	bool flag = 0;
	
	try 
	{
		for (int i = 0; i < 3; i++)
		{
			if (formName == arr[i])
				return (this->*func[i])(target);
		}
		if (!flag)
			throw Intern::FormNotFoundException();
	}
	catch(Intern::FormNotFoundException &e)
	{
		std::cout << "Exception " << e.what() << std::endl;
	}
	return nullptr;
}

Intern::~Intern()
{
	std::cout << GREEN << "destructor called " << RESET << std::endl;	

}
