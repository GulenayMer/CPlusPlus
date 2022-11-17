/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentalPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:54:44 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 13:18:49 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP


#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentalPardonForm: public Form
{
	private:
	
		STR _form_target;

	public:
	
	PresidentalPardonForm();
	PresidentalPardonForm(STR target);
	PresidentalPardonForm(const PresidentalPardonForm &src_obj);
	PresidentalPardonForm &operator=(const PresidentalPardonForm &src_obj);
	~PresidentalPardonForm();

	void execute(const Bureaucrat &exec_obj) const;
	STR getTarget(void) const;
	
};










#endif