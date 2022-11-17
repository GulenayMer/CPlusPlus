/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:16:19 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 14:25:38 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _formName("A Form"), _grade_exec(2), _grade_sign(3), _checkSigned(false)
{
	// std::cout << RED << this->_fromName << GREEN 
	// << " (default form) constructor called " << RESET << std::endl;
}

Form::Form(const STR formName, const int grade_sign, const int grade_exec):
 _formName(formName), _grade_exec(grade_exec), _grade_sign(grade_sign), _checkSigned(false)
{
	if (this->_grade_sign < 1 || this->_grade_exec < 1)
		throw Form::GradeTooHighException();
	if (this->_grade_sign > 150 || this->_grade_exec > 150)
		throw Form::GradeTooLowException();
	std::cout << " Form created " << std::endl;
}

Form::Form(const Form &source_obj):
 _formName(source_obj._formName), _grade_exec(source_obj._grade_exec), _grade_sign(source_obj._grade_sign)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
	
	this->_checkSigned = source_obj._checkSigned;
	//*this = source_obj;
}
		

Form &Form::operator=(const Form &source_obj)
{
	std::cout << BLUE << "Assignment Operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_checkSigned = source_obj._checkSigned;
	}
	return(*this);

}

STR Form::getName(void) const
{
	return(this->_formName);
}

bool Form::getIfSigned() const
{
	return(this->_checkSigned);
}


int Form::getSign() const
{
	return(this->_grade_sign);
}


int Form::getExec() const
{
	return(this->_grade_exec);
}
		

void Form::signForm(const Bureaucrat &bur_obj)
{
	try
	{
		if(bur_obj.getGrade() > this->getSign())
			throw Form::GradeTooLowException();
		this->_checkSigned = true;
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream& output_stream, const Form &form_obj)
{
	STR sign;
	
	if (form_obj.getIfSigned() == true)
	{
		sign = " signed";
		return(output_stream << "Form " << form_obj.getName() << ", " << sign << std::endl);
	}
	else
	{
		sign = " could not be signed";
		return(output_stream << "Form " << form_obj.getName() << ", " << sign << ", check min requested grade to sign " << form_obj.getSign() << ", and min requested grade to execute " << form_obj.getExec() << std::endl);
	}
}


Form::~Form()
{
	std::cout << RED << this->_formName << GREEN << " destruction called" << RESET << std::endl;
}