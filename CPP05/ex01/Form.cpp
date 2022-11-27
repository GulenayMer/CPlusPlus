/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:16:19 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 16:05:58 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* default constructor, -- signed value has to be false at the construction */
Form::Form(): _formName("A Form"), _grade_sign(3), _grade_exec(2), _checkSigned(false)
{
	/* std::cout << RED << this->_formName << GREEN 
	<< " (default) constructor" << " wtih grades " << RED << this->_grade_exec << RED << this->_grade_sign 
	<< GREEN << " with sign status " << RED << this->_checkSigned << GREEN << " called " << RESET << std::endl; */
}

/* constructor with parameters -- signed value has to be false at the construction */
Form::Form(const STR formName, const int grade_sign, const int grade_exec):
 _formName(formName), _grade_sign(grade_sign), _grade_exec(grade_exec), _checkSigned(false)
{
	if (this->_grade_sign < 1 || this->_grade_exec < 1)
		throw Form::GradeTooHighException();
	if (this->_grade_sign > 150 || this->_grade_exec > 150)
		throw Form::GradeTooLowException();
	std::cout << RED << this->_formName << GREEN << " created wtih grades " << RED << this->_grade_sign << " & " 
	<< RED << this->_grade_exec << GREEN << " with sign status " << RED 
	<< this->_checkSigned << RESET << std::endl;
}

/* copy constructor */
Form::Form(const Form &source_obj):
 _formName(source_obj._formName), _grade_sign(source_obj._grade_sign), _grade_exec(source_obj._grade_exec)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
	this->_checkSigned = source_obj._checkSigned;
	//*this = source_obj;
}
		
/* assignment operator */
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

bool Form::getIfSigned(void) const
{
	return(this->_checkSigned);
}

/* get required grade to sign */
int Form::getSign(void) const
{
	return(this->_grade_sign);
}

/* get required grade to execute */
int Form::getExec(void) const
{
	return(this->_grade_exec);
}
		

void Form::beSigned(const Bureaucrat &bur_obj)
{
	if(bur_obj.getGrade() > this->getSign())
			throw Form::GradeTooLowException();
	this->_checkSigned = true;
/* 	try
	{
		if(bur_obj.getGrade() > this->getSign())
			throw Form::GradeTooLowException();
		this->_checkSigned = true;
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << GREEN << "Exception: " << RED << e.what() << RESET << std::endl;
	} */
}

std::ostream &operator<<(std::ostream& output_stream, const Form &form_obj)
{
	STR sign;
	
	if (form_obj.getIfSigned() == true)
	{
		sign = "is signed";
		return(output_stream << BLUE << "Form " << YELLOW << form_obj.getName() << BLUE << " with required sign and execution grades " 
		<< YELLOW << form_obj.getSign() << " & " << form_obj.getExec() << ", " << YELLOW << sign << RESET << std::endl);
	}
	else
	{
		sign = " could not be signed";
		return(output_stream << YELLOW << "Form " << RED << form_obj.getName() << YELLOW << ", " 
			<< sign << ", min requested grade to sign: " 
			<< RED << form_obj.getSign() << YELLOW << ", and min requested grade to execute: " 
			<< RED << form_obj.getExec() << RESET << std::endl);
	}
}

Form::~Form()
{
	std::cout << RED << this->_formName << GREEN << " destructor called" << RESET << std::endl;
}