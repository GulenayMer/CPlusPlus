/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:16:33 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 16:34:47 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

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

class Bureaucrat;

class AForm
{
	private:
	
		const STR 	_formName;
		const int	_grade_sign; // required grade to sign
		const int	_grade_exec; // required grade to execute
		bool 		_checkSigned;

	public:
	
		AForm();
		AForm(const STR formName, const int grade_sign, const int grade_exec);
		AForm(const AForm &source_obj);
		AForm &operator=(const AForm &source_obj);
		virtual ~AForm(); 


		/* sign */
		void	beSigned(const Bureaucrat &bur_obj);

		/* execute */
		virtual void 	execute(Bureaucrat const &executor) const = 0;
		
		/* get */
		bool	getIfSigned(void) const;
		STR		getName(void) const;
		int		getSign(void) const;
		int		getExec(void) const;
		
		
		/* Exception Classes */
		class GradeTooHighException : public std::exception
		{
			public:
			
				virtual const char *what() const throw()
				{
					return "Grade is too high";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public: 
				virtual const char *what() const throw()
				{
					return "Grade is too low";
				}
		};

		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Form is not signed";
				}
			
		};
				
};



std::ostream &operator<<(std::ostream &output_stream, const AForm &form_obj);


#endif