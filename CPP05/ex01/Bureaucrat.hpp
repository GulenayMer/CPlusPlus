/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:21:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 15:51:14 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
#include <stdexcept>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */


#define STR std::string

class Form;

class Bureaucrat
{
	private:
	
		const STR	_name; // must have a constant name
		int			_grade; // a grade that ranges from 1-150

	public:
		
		/* Constructors */
		Bureaucrat();
		Bureaucrat(const STR name, int grade);
		Bureaucrat(const Bureaucrat &source_obj);
		Bureaucrat &operator=(const Bureaucrat &source_obj);

		/* Destructor */
		~Bureaucrat();
		
		/* set */
		void setGrade(int grade);
		
		/* get */
		STR getName(void) const;
		int getGrade(void) const;
			
		/* + & - */
		void incrementGrade(void);
		void decrementGrade(void);

		/* sign */
		void signForm(Form &form_obj) const;
		
		/* Exception Classes */
		class GradeTooHighException : public std::exception
		{
			public: 
				const char *what() const throw()
				{
					return "Grade is too high";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Grade is too low";
				}
		};
};

std::ostream &operator<<(std::ostream &output_stream, const Bureaucrat &obj);

#endif