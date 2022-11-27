/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:01:25 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/21 20:30:31 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
	private:
	
		STR _form_target;

	public:
	
	ShrubberyCreationForm(/* args */);
	ShrubberyCreationForm(STR target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src_obj);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src_obj);
	
	~ShrubberyCreationForm();

	STR getTarget(void) const;

	void 	execute(Bureaucrat const &executor) const;
	
};


#endif