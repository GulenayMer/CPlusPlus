/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:14:10 by mgulenay          #+#    #+#             */
/*   Updated: 2022/12/03 16:31:39 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	int toFind;
	
	std::cout << GREEN << " #########################  " << RESET << std::endl;
	std::cout << GREEN << "------- TEST : VECTOR EXP -------" << RESET << std::endl;

	std::vector<int> dynamic_arr;
	
	dynamic_arr.push_back(2);
	dynamic_arr.push_back(12);
	dynamic_arr.push_back(21);
	dynamic_arr.push_back(3);
	dynamic_arr.push_back(1);
	dynamic_arr.push_back(10);

	toFind = 1;
	
	try
	{	
		std::cout << BLUE << "Search : " << toFind << RESET << std::endl;
		easyfind(dynamic_arr, toFind);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}


	/*  ------------- ------------------- --------------    */
	std::cout << GREEN << " #########################  " << RESET << std::endl;
	std::cout << GREEN << "-------TEST : ARRAY EXP -------" << RESET << std::endl;

	int std_arr[] = {20, 0, 1, 3, 4};
	
	std::vector<int> v(std_arr, std_arr + sizeof(std_arr) / sizeof(int)); 
	
	toFind = -1;
	try
	{	
		std::cout << BLUE << "Search : " << toFind << RESET << std::endl;
		easyfind(v, toFind);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

		/*  ------------- ------------------- --------------    */
	std::cout << GREEN << " #########################  " << RESET << std::endl;
	std::cout << GREEN << "-------TEST : DEQUE EXP -------" << RESET << std::endl;

	std::deque<int> deq;
	for (int i = 1; i < 5; i++)
		deq.push_back(i);
	
	toFind = 4;
	try
	{	
		std::cout << BLUE << "Search : " << toFind << RESET << std::endl;
		easyfind(deq, toFind);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

    return 0;
}