/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:09:06 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 19:09:39 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
	
	AForm *makeprf(const STR target);
	AForm *makerrf(const STR target);
	AForm *makescf(const STR target);

	public:
	
		Intern();
		Intern(const Intern &src_obj);
		Intern &operator=(const Intern &src_obj);
		
		~Intern();

		/* */
		AForm *makeForm(const STR formName, const STR target);
		typedef AForm *(Intern::*allMakeFunctions)(const STR target);
		
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