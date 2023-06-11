/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:14:10 by mgulenay          #+#    #+#             */
/*   Updated: 2022/12/03 17:25:24 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	std::cout << YELLOW << " ------- Test 1 --------- " << RESET << std::endl;
	std::cout << YELLOW << " ######################### " << RESET << std::endl;
	
	try{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(30);

		sp.printVector();
		std::cout << std::endl;
		std::cout << MAGENTA << "The shortest span is " << sp.shortestSpan() << RESET << std::endl;
		std::cout << MAGENTA << "The longest span is " << sp.longestSpan() << RESET << std::endl;

	}
	catch(std::exception & e){
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << YELLOW << RESET << std::endl;
	std::cout << YELLOW << " ------- Test 2 --------- " << RESET << std::endl;
	std::cout << YELLOW << " ######################### " << RESET << std::endl;
	
	try{
		
		Span sp2 = Span(5);

		sp2.addNumber(10);
		//sp.addNumber(30);

		sp2.printVector();
		std::cout << YELLOW << RESET << std::endl;
		std::cout << MAGENTA << "The shortest span : " << sp2.shortestSpan() << RESET << std::endl;
		std::cout << MAGENTA << "The longest span : " << sp2.longestSpan() << RESET << std::endl;
	}
	catch(std::exception & e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	
	std::cout << YELLOW << RESET << std::endl;
	std::cout << YELLOW << " ------- Test 3 --------- " << RESET << std::endl;
	std::cout << YELLOW << " ######################### " << RESET << std::endl;
	

	//Span sp = Span(3);
	//sp.addMany(5);
	try
	{
		Span sp = Span(5);
		sp.addMany(5);
	/* 	sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(30);
		sp.addMany(8); */
		//sp.printVector();
		std::cout << std::endl;
		std::cout << MAGENTA << "The shortest span is " << sp.shortestSpan() << RESET << std::endl;
		std::cout << MAGENTA << "The longest span is " << sp.longestSpan() << RESET << std::endl;

	}
	catch(std::exception & e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	
	std::cout << YELLOW << RESET << std::endl;
	std::cout << YELLOW << " ------- Test 4 --------- " << RESET << std::endl;
	std::cout << YELLOW << " ######################### " << RESET << std::endl;
	
	Span array(10000);
	
	try
	{
		std::cout << GREEN << "-----------EMPTY ARRAY-----------" << RESET << std::endl;
		array.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}
	try
	{
		std::cout << GREEN << "----------ONE ELEMENT ------------" << RESET << std::endl;
		array.addNumber(5);
		array.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

	std::cout << YELLOW << RESET << std::endl;
	std::cout << YELLOW << " ------- Test 5 Copy Obj --------- " << RESET << std::endl;
	std::cout << YELLOW << " ######################### " << RESET << std::endl;

	Span orginal = Span(3);
	Span sp2 = Span(orginal);
	sp2.addMany(3);

	/* assignment */
	//Span sp3 = sp2;
	try
	{
		sp2.printVector();
		std::cout << YELLOW << RESET << std::endl;
		std::cout << MAGENTA << "The shortest span : " << sp2.shortestSpan() << RESET << std::endl;
		std::cout << MAGENTA << "The longest span : " << sp2.longestSpan() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

    return 0;
}