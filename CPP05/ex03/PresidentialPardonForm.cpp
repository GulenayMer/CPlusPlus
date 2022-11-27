/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:55:21 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 18:49:27 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* default constructor */
PresidentialPardonForm::PresidentialPardonForm(): AForm::AForm("PPForm", 25, 5), _form_target("Mr.President")
{
	/* std::cout << RED << this->_form_target << GREEN 
	<< " (default) constructor" << " wtih grades " << RED << this->getSign() << " & " << this->getExec()
	<< GREEN << " with sign status " << RED << this->getIfSigned() << GREEN << " created" << RESET << std::endl; */
}

/*  constructor */
PresidentialPardonForm::PresidentialPardonForm(STR target): AForm::AForm("PPForm", 25, 5), _form_target(target)
{
	std::cout << GREEN << " PresidentalPardonForm created with target to " << RED << this->_form_target << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src_obj): AForm::AForm(src_obj.getName(), src_obj.getSign(), src_obj.getExec()), _form_target(src_obj._form_target)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
	
	*this = src_obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src_obj)
{
	std::cout << BLUE << "Assignment Operator called" << RESET << std::endl;
	
	if (this != &src_obj)
	{
		this->_form_target = src_obj.getTarget();
	}
	return(*this);
}

STR PresidentialPardonForm::getTarget(void) const
{
	return(this->_form_target); 
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getIfSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExec())
		throw AForm::GradeTooLowException();
	std::cout << MAGENTA << this->_form_target << " has been pardoned by Zaphod Beeblebrox" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << this->_form_target << GREEN << " destruction called" << RESET << std::endl;
}