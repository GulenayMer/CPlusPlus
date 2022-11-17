/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:59:21 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 14:51:31 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(): _form_target("Robotomy"), Form::Form("Robotomy", 72, 45)
{
	// std::cout << RED << this->_form_targer << GREEN 
	// << " (default form) constructor called " << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(STR target): _form_target(target), Form::Form("Robotomy", 72, 45)
{
		std::cout << " PresidentalPardonForm created " << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src_obj): _form_target(src_obj._form_target)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
	
	*this = src_obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src_obj)
{
	std::cout << BLUE << "Assignment Operator called" << RESET << std::endl;
	
	if (this != &src_obj)
	{
		this->_form_target = src_obj.getTarget();
	}
	return(*this);
}

STR RobotomyRequestForm::getTarget(void) const
{
	return(this->_form_target); 
}

void RobotomyRequestForm::execute(const Bureaucrat &exec_obj) const
{
	if (this->getIfSigned() == false)
		throw Form::FormNotSignedException();
	if (this->getExec() < exec_obj.getGrade())
		throw Form::GradeTooLowException();
	std::cout << " some drilling noice -- capcapcaaap " << std::endl;
	srand(time(NULL));
	if ((rand() % 2) == 0)
		std::cout << " Robotomoy request failed " << std::endl;
	else
		std::cout << this->getTarget() << " : has been robotomized successfully " << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << this->_form_target << GREEN << " destruction called" << RESET << std::endl;
}