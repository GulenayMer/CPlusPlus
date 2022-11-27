/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:33:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/27 16:14:37 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base *p1;
	Base *p2;
	Base *p3;

	p1 = generate();
	p2 = generate();
	p3 = generate();

	std::cout << std::endl << YELLOW << "[ Pointer identify test ]" << RESET << std::endl;
	std::cout << "Type : ";
	identify(p1);
	std::cout << "Type : ";
	identify(p2);
	std::cout << "Type : ";
	identify(p3);

	std::cout << std::endl << YELLOW << "[ Reference identify test ]" << RESET << std::endl;
	std::cout << "Type : ";
	identify(*p1);
	std::cout << "Type : ";
	identify(*p2);
	std::cout << "Type : ";
	identify(*p3);

	delete p1;
	delete p2;
	delete p3;

	return 0;
};
