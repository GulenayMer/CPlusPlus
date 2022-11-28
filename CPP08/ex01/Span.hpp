/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:23:07 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/28 18:40:42 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>


#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */


class Span
{
	private:

		unsigned int _limit;
		std::vector<int> _vec;
	
	public:
		
		Span();
		Span(unsigned int N);
		Span(const Span &src_obj);
		Span &operator=(const Span &src_obj);
		~Span();

		/* funcs */
		void addNumber(int new_nb);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		unsigned int getSize(void);
		void printVector(void);
		void addMany(unsigned int N);

		/* Exceptions */
		class OutOfBoundsException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Out of limits!";
				}
		};

		class NoSpanException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "No span can be found";
				}
		};
};


#endif