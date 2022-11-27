/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:59:30 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/08 11:06:32 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/* std::getline (string) : 
	is a standard library function that is used to read a string or a line from an input stream
*/

int main(void)
{
	PhoneBook phonebook;
	STR choice;
	
	std::cout << "PHONEBOOK" << std::endl;

	while (std::cout << ENTER << std::endl && std::getline(std::cin, choice))
	{
	
		if (choice == ADD)
			phonebook.add_contact();
	 	else if (choice == SEARCH)
			phonebook.search_contact();
		else if (choice == EXIT)
		{
			std::cout << EXIT_MSG << std::endl;
			break ;
		}
		else
			std::cout << INVALID << std::endl;
	}
	if (std::cin.eof())
		{
			std::cout << std::endl;
			return (1);
		}
	return (0);
}

// || choice.empty() == 1