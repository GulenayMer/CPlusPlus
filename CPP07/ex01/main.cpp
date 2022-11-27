/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:22:11 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/27 20:51:05 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int arr[] = {1, 2, 6};
	STR str[] = {"Hello", "Whats", "Uppp?"};
	float farr[] = {1.5, 5.2, 7.9, 2.1, 4.44, 10.3};
	char carr[] = {'a', 'F', '*'};
	
	iter(arr, 3, print<int>);
	std::cout << "---------------" << std::endl;
	iter(str, 3, print);
	std::cout << "---------------" << std::endl;
	iter(carr, 3, print<char>);
	std::cout << "---------------" << std::endl;
	iter(farr, 6, print<float>);
	
	return (0);
}