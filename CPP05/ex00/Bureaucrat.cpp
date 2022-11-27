/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:21:08 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/21 18:56:06 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* default constructor with default/random values */
Bureaucrat::Bureaucrat(): _name("serious bureaucrat"), _grade(3)
{
	std::cout << RED << this->_name << GREEN << " (default) constructor" << " wtih grade " << RED << this->_grade << GREEN << " called " << RESET << std::endl;
}

/* constructor with parameters */
Bureaucrat::Bureaucrat(STR name, int grade): _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
	std::cout << RED << this->_name << GREEN << "constructor" << " wtih grade " << RED << this->_grade << GREEN << " called " << RESET << std::endl;
}

/* copy constructor */
Bureaucrat::Bureaucrat(const Bureaucrat &source_obj): _name(source_obj.getName()), _grade(source_obj.getGrade())
{
	std::cout << YELLOW << "Copy constructor called from " << source_obj.getName() << RESET << std::endl;
	//*this = source_obj;
}

/* assignment op */
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

/* void Bureaucrat::setName(STR const name)
{
	this->_name = name;
} */

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
		std::cout << YELLOW <<"Grade of " << this->getName() << "increased to " << this->getGrade() << RESET << '\n';
	}
	catch(const std::exception &e)
	{
		std::cerr << RED << "Exception caught: " << GREEN << e.what() << '\n';
		this->setGrade(1);
	}
}

void Bureaucrat::decrementGrade(void)
{
	try
	{
		if (this->getGrade() + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		this->setGrade(getGrade() + 1);
		std::cout << YELLOW <<"Grade of " << this->getName() << "decreased to " << this->getGrade() << RESET << '\n';
	}
	catch(const std::exception &e)
	{
		std::cerr << RED << "Exception caught: " << GREEN << e.what() << RESET << '\n';
		this->setGrade(150);
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << this->_name << GREEN << " destructor called" << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &output_stream, const Bureaucrat &obj)
{
	return(output_stream << BLUE << "Bureaucrat " + obj.getName() << "has the grade " << obj.getGrade() << RESET << std::endl);
}
