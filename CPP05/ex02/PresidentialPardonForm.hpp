/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:54:44 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 18:49:08 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm: public AForm
{
	private:
	
		STR _form_target;

	public:
	
	PresidentialPardonForm();
	PresidentialPardonForm(STR target);
	PresidentialPardonForm(const PresidentialPardonForm &src_obj);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &src_obj);
	~PresidentialPardonForm();
	
	/* get */
	STR 	getTarget(void) const;
	
	void 	execute(Bureaucrat const &executor) const;
};

#endif