/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:33:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/27 15:02:52 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
/* 
	It takes a pointer & converts it to the unsigned integer type uintptr_t
	
	(# unintptr_t is an unsigned integer that is capable of storing a data pointer,
		used primarily for bitwise operations on pointers --
		I guess exactly the size of the pointer? )
*/
uintptr_t serialize(Data *ptr)
{
	uintptr_t intptr;
	
	std::cout << GREEN << "Converting to uintptr_t " << RESET << std::endl;
	
	intptr = reinterpret_cast<uintptr_t>(ptr);

	return(intptr);
}

/* 
	It takes an unsigned integer parameter and converts it to a pointer to Data.
*/
Data* deserialize(uintptr_t raw)
{
	Data *dataptr;
	
	std::cout << GREEN << "Converting to Data* "<< RESET << std::endl;

	dataptr = reinterpret_cast<Data *>(raw);
	
	return(dataptr);
}

/*
	Use serialize() on the address of the Data object and pass its return value to
	deserialize(). Then, ensure the return value of deserialize() compares equal to the
	original pointer.
*/

int main(void)
{
	Data *exp = new Data;
	
	exp->name = "Jane";
	exp->age = 12;
	exp->grade = 10;
	exp->average = 3.2;
	
	std::cout << BLUE <<"data address before the serialization: " << exp << RESET << std::endl;
	std::cout << MAGENTA << "Name : " << exp->name << RESET << std::endl;
	std::cout << MAGENTA << "Age : " << exp->age << RESET << std::endl;
	std::cout << MAGENTA << "Grade : " << exp->grade << RESET << std::endl;
	std::cout << MAGENTA << "Average : " << exp->average << RESET << std::endl;

	uintptr_t raw = serialize(exp);

	std::cout << BLUE << "Data After Serialization " << raw << RESET << std::endl;

	Data* newExp = deserialize(raw);
		
	std::cout << BLUE <<"data address after deserialization : " << newExp << RESET << std::endl;
	std::cout << MAGENTA << "Name : " << newExp->name << RESET << std::endl;
	std::cout << MAGENTA << "Age : " << newExp->age << RESET << std::endl;
	std::cout << MAGENTA << "Grade : " << newExp->grade << RESET << std::endl;
	std::cout << MAGENTA << "Average : " << newExp->average << RESET << std::endl;
		
	delete exp;
	
	return 0;
};
