/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:59:21 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 14:05:06 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("RRF", 72, 45), _form_target("Robot")
{
	/* std::cout << RED << this->_form_target << GREEN 
	<< " (default) constructor" << " wtih grades " << RED << this->getSign() << " & " << this->getExec()
	<< GREEN << " with sign status " << RED << this->getIfSigned() << GREEN << " created" << RESET << std::endl; */
}

RobotomyRequestForm::RobotomyRequestForm(STR target): AForm::AForm("RRF", 72, 45), _form_target(target)
{
	std::cout << GREEN << "RobotomyRequestForm created with target to " << RED << this->_form_target << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src_obj): AForm::AForm(src_obj.getName(), src_obj.getSign(), src_obj.getExec()), _form_target(src_obj._form_target)
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

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->getIfSigned() == false)
		throw AForm::FormNotSignedException();
	else
	{
		if (executor.getGrade() > this->getExec())
			throw AForm::GradeTooLowException();
		else
		{
			std::cout << BLUE << " some drilling noice -- capcapcaaap " << RESET << std::endl;
			srand(time(NULL));
			if ((rand() % 2) == 0)
				std::cout << MAGENTA << this->getTarget() << " : has been robotomized successfully " << RESET << std::endl;
			else
				std::cout << " Robotomoy request failed " << std::endl;
		}
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << this->_form_target << GREEN << " destruction called" << RESET << std::endl;
}