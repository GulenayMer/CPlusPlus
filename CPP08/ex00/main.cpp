/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:14:10 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/28 15:16:20 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	int toFind;
	
	std::cout << GREEN << " #########################  " << RESET << std::endl;
	std::cout << GREEN << "------- TEST : VECTOR -------" << RESET << std::endl;

	std::vector<int> dynamic_arr;
	
	dynamic_arr.push_back(2);
	dynamic_arr.push_back(12);
	dynamic_arr.push_back(21);
	dynamic_arr.push_back(3);
	dynamic_arr.push_back(1);
	dynamic_arr.push_back(10);

	toFind = 12;
	std::cout << BLUE << "Search : " << toFind << RESET << std::endl;

	easyfind(dynamic_arr, toFind);
	
	
	std::cout << GREEN << " #########################  " << RESET << std::endl;
	std::cout << GREEN << "-------TEST : ARRAY -------" << RESET << std::endl;

	int std_arr[] = {20, 1, 2, 3, 4};
	
	std::vector<int> v(std_arr, std_arr + sizeof(std_arr) / sizeof(int)); 
	
	toFind = 0;
	std::cout << BLUE << "Search : " << toFind << RESET << std::endl;
	
	easyfind(v, toFind);
		
    return 0;
}