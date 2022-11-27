/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:01:13 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 14:23:42 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():  AForm::AForm("SCF", 145, 137), _form_target("Shrubbery")
{
	/* std::cout << RED << this->_form_target << GREEN 
	<< " (default) constructor" << " wtih grades " << RED << this->getSign() << " & " << this->getExec()
	<< GREEN << " with sign status " << RED << this->getIfSigned() << GREEN << " created" << RESET << std::endl; */
}


ShrubberyCreationForm::ShrubberyCreationForm(STR target): AForm::AForm("SCF", 145, 137), _form_target(target)
{
	std::cout << GREEN << "ShrubberyCreationForm created with target to " << RED << this->_form_target << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src_obj): AForm::AForm(src_obj.getName(), src_obj.getSign(), src_obj.getExec()), _form_target(src_obj._form_target)
{
	std::cout << YELLOW << "Copy constructor called" << RESET << std::endl;
	//*this = src_obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src_obj)
{
	std::cout << BLUE << "Assignment Operator called" << RESET << std::endl;
	
	if (this != &src_obj)
	{
		this->_form_target = src_obj.getTarget();
	}
	return(*this);
}

STR ShrubberyCreationForm::getTarget(void) const
{
	return(this->_form_target); 
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->getIfSigned() == false)
		throw AForm::FormNotSignedException();
	else
	{
		if (this->getExec() < executor.getGrade())
			throw AForm::GradeTooLowException();
		else
		{
			STR name = this->getTarget() + " _schrubbery";
			std::ofstream outfile(name);
			
			outfile << "                     - - -" << std::endl;
			outfile << "                   -        -  -     --    -" << std::endl;
			outfile << "                -                 -         -  -" << std::endl;
			outfile << "                                -" << std::endl;
			outfile << "                               -                --" << std::endl;
			outfile << "               -          -            -              -" << std::endl;
			outfile << "               -            '-,        -               -" << std::endl;
			outfile << "               -              'b      *" << std::endl;
			outfile << "                -              '$    #-                --" << std::endl;
			outfile << "               -    -           $:   #:               -" << std::endl;
			outfile << "             --      -  --      *#  @):        -   - -" << std::endl;
			outfile << "                          -     :@,@):   ,-**:'   -" << std::endl;
			outfile << "              -      -,         :@@*: --**'      -   -" << std::endl;
			outfile << "                       '#o-    -:(@'-@*'  -" << std::endl;
			outfile << "               -  -       'bq,--:,@@*'   ,*      -  -" << std::endl;
			outfile << "                          ,p$q8,:@)'  -p*'      -" << std::endl;
			outfile << "                   -     '  - '@@Pp@@*'    -  -" << std::endl;
			outfile << "                   -  - --    Y7'.'     -  -" << std::endl;
			outfile << "                              :@):." << std::endl;
			outfile << "                             .:@:'." << std::endl;
			outfile << "                           .::(@:.      -Sam Blumenstein-" << std::endl;
			outfile.close();
		}
	}
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << " Shrubbery destruction called" << RESET << std::endl;
}