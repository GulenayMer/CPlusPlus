/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:09:06 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/16 17:00:56 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentalPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
	
	Form *makeprf(const STR target);
	Form *makerrf(const STR target);
	Form *makescf(const STR target);

	public:
	
		Intern(/* args */);
		Intern(const Intern &src_obj);
		Intern &operator=(const Intern &src_obj);
		
		~Intern();

		/* */
		Form *makeForm(STR formName, const STR target);
		typedef Form *(Intern::*allMakeFunctions)(const STR target);
		
		/* Exceptions */
		class FormNotFoundException : public std::exception
		{
			public: 
				const char *what() const throw()
				{
					return "Form Not Found";
				}
		};
};



#endif