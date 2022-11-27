/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:16:33 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/22 15:21:54 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

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

class Form
{
	private:
	
		const STR 	_formName;
		const int	_grade_sign; // required grade to sign
		const int	_grade_exec; // required grade to execute
		bool 		_checkSigned;

	public:
	
		Form();
		Form(const STR formName, const int grade_sign, const int grade_exec);
		Form(const Form &source_obj);
		Form &operator=(const Form &source_obj);
		~Form(); 


		/* sign */
		void	beSigned(const Bureaucrat &bur_obj);
	

		/* get */
		bool	getIfSigned(void) const;
		STR		getName(void) const;
		int		getSign(void) const;
		int		getExec(void) const;
		
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



std::ostream &operator<<(std::ostream &output_stream, const Form &form_obj);


#endif