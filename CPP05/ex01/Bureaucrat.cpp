/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:21:08 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 09:40:43 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
	Any attempt to instantiate a Bureaucrat 
	using an invalid grade must throw an exception:
	either a Bureaucrat::GradeTooHighException or 
			a Bureaucrat::GradeTooLowException
*/

Bureaucrat::Bureaucrat(): _name("serious bureaucrat")
{
	// std::cout << RED << this->_name << GREEN 
	// << " (default bureaucrat) constructor called " << RESET << std::endl;
}

Bureaucrat::Bureaucrat(STR name, int grade): _name(name), _grade(grade)
{
	std::cout << RED << this->_name << GREEN << " constructor called " << RESET << std::endl;
	
	if (grade > 150)	
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &source_obj)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
	
	*this = source_obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &source_obj)
{
	std::cout << BLUE << "Assignment Operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		//this->_name = source_obj.getName();
		this->_grade = source_obj.getGrade();
	}
	return(*this);
}

/* 
void Bureaucrat::setName(STR name)
{
	this->_name = name;
}
 */
void Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}
		
STR Bureaucrat::getName(void) const
{
	return(this->_name);
}

int  Bureaucrat::getGrade(void) const
{
	return(this->_grade);
}

void Bureaucrat::incrementGrade(void)
{
	try
	{
		if (this->getGrade() - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		this->setGrade(getGrade() - 1); 
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::decrementGrade(void)
{
	try
	{
		if (this->getGrade() + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		this->setGrade(getGrade() + 1);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::signForm(const Form &form_obj)
{
	if (form_obj.getIfSigned() == true)
		std::cout << this->getName() << " signed the " << form_obj.getName() << std::endl;
	else
		std::cout << this->getName() << " could not sign " << form_obj.getName() << std::endl;
}


Bureaucrat::~Bureaucrat()
{
	std::cout << RED << this->_name << GREEN << " destructor called" << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &output_stream, const Bureaucrat &obj)
{
	return(output_stream << "Bureaucrat " + obj.getName() << "has the grade " << obj.getGrade());
}
