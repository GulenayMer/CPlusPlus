/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:01:13 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 15:02:15 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): _form_target("Shrubbery"), Form::Form("ShrubberyCreationForm", 145, 137)
{
	// std::cout << RED << this->_form_target << GREEN 
	// << " (default form) constructor called " << RESET << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(STR target): _form_target(target), Form::Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << " ShrubberyCreationForm created " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src_obj): _form_target(src_obj._form_target)
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

void ShrubberyCreationForm::execute(const Bureaucrat &exec_obj) const
{
	if (this->getIfSigned() == false)
		throw Form::FormNotSignedException();
	if (this->getExec() < exec_obj.getGrade())
		throw Form::GradeTooLowException();
	std::cout << " some sounds " << std::endl;
	
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


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << " Shrubbery destruction called" << RESET << std::endl;
}