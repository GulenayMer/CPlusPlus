/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:14:10 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/28 18:45:28 by mgulenay         ###   ########.fr       */
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

		/* std::cout << "Copy test" << std::endl;
		Span sp2 = Span(1);
		sp2.addNumber(15);
		sp2 = sp;
		sp2.printVector();
		std::cout << std::endl;
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl; */
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
	
	try{
		//Span sp = Span(100000);
		//sp.addMany(10000);
		Span sp = Span(3);
		
		sp.addMany(5);
		
		//sp.printVector();
		std::cout << std::endl;
		std::cout << MAGENTA << "The shortest span is " << sp.shortestSpan() << RESET << std::endl;
		std::cout << MAGENTA << "The longest span is " << sp.longestSpan() << RESET << std::endl;

	}
	catch(std::exception & e){
		std::cout << RED << e.what() << RESET << std::endl;
	}
	
    return 0;
}