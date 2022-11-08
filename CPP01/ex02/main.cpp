/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:53:33 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/30 23:45:28 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "iostream"

#define STR std::string 
/*
	- string variable init to "HI THIS BRAIN"
	- stringPTR, pointer to the str
	- string REF, reference to the str
	
	has to print:
	- memory address of the string var,
	- memory add. held by strPTR
	- memory add. held by stringREF
	
	- the value of the str var.
	- the value pointed to by stringPTR
	- the value pointed to by stringREF
*/

int main(void)
{
	
	/* STRING */
	STR the_str = "HI THIS IS BRAIN";
	
	std::cout << "the memory address of the string:" << std::endl;
	std::cout << &the_str << std::endl;
	
	std::cout << "the value of the string:" << std::endl;
	std::cout << the_str << std::endl;

	/* POINTER */
	STR *stringPTR = &the_str;
	
	std::cout << "the memory address held by the pointer:" << std::endl;
	std::cout << &stringPTR << std::endl;
	
	std::cout << "the value pointed to by the pointer:" << std::endl;
	std::cout << stringPTR << std::endl;

	/* REFERENCE
		when a variable declared as a reference, it become an alternative name 
		for an existing variable.
	*/
	STR &stringREF = the_str;
	
	std::cout << "the memory address held by the reference:" << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << "the value pointed to by the reference:" << std::endl;
	std::cout << stringREF << std::endl;

}
