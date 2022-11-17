/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:01:25 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 14:03:19 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm: public Form
{
	private:
	
		STR _form_target;

	public:
	
	ShrubberyCreationForm(/* args */);
	ShrubberyCreationForm(STR target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src_obj);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src_obj);
	
	~ShrubberyCreationForm();


	void execute(const Bureaucrat &exec_obj) const;
	STR getTarget(void) const;
	
};


#endif