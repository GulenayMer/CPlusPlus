/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:58:08 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/21 23:29:09 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm: public AForm
{
	private:
	
		STR _form_target;

	public:
	
	RobotomyRequestForm();
	RobotomyRequestForm(STR target);
	RobotomyRequestForm(const RobotomyRequestForm &src_obj);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &src_obj);
	
	~RobotomyRequestForm();

	STR getTarget(void) const;

	void 	execute(Bureaucrat const &executor) const;
		
};


#endif