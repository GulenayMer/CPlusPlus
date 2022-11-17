/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:58:08 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 15:09:32 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm: public Form
{
	private:
	
		STR _form_target;

	public:
	
	RobotomyRequestForm();
	RobotomyRequestForm(STR target);
	RobotomyRequestForm(const RobotomyRequestForm &src_obj);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &src_obj);
	
	~RobotomyRequestForm();

	void execute(const Bureaucrat &exec_obj) const;
	STR getTarget(void) const;
		
};


#endif