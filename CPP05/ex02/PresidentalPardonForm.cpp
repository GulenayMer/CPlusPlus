/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentalPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:55:21 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 15:04:01 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentalPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm(): _form_target("president"), Form::Form("President", 25, 5)
{
	// std::cout << RED << this->_form_targer << GREEN 
	// << " (default form) constructor called " << RESET << std::endl;
}

PresidentalPardonForm::PresidentalPardonForm(STR target): _form_target(target), Form::Form("President", 25, 5)
{
		std::cout << " PresidentalPardonForm created " << std::endl;

}

PresidentalPardonForm::PresidentalPardonForm(const PresidentalPardonForm &src_obj): _form_target(src_obj._form_target)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
	
	*this = src_obj;
}

PresidentalPardonForm &PresidentalPardonForm::operator=(const PresidentalPardonForm &src_obj)
{
	std::cout << BLUE << "Assignment Operator called" << RESET << std::endl;
	
	if (this != &src_obj)
	{
		this->_form_target = src_obj.getTarget();
	}
	return(*this);
}

STR PresidentalPardonForm::getTarget(void) const
{
	return(this->_form_target); 
}

void PresidentalPardonForm::execute(const Bureaucrat &exec_obj) const
{
	if (this->getIfSigned() == false)
		throw Form::FormNotSignedException();
	if (this->getExec() < exec_obj.getGrade())
		throw Form::GradeTooLowException();
	std::cout << this->_form_target << " pardoned by thePresident" << std::endl;
}

PresidentalPardonForm::~PresidentalPardonForm()
{
	std::cout << RED << this->_form_target << GREEN << " destruction called" << RESET << std::endl;
}