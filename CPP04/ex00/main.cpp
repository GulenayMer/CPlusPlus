/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:15 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/08 20:52:10 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

	/*
		+ Allocates memory 
			by calling: operator new (sizeof(MyClass))
		+ then constructs 
			an object at the newly allocated space
		+ constructed as DERIVED (CAT / DOG), 
			but pointer stored as BASE (ANIMAL)
	*/

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound("CAT");
	j->makeSound("DOG");
	meta->makeSound("FAKE");

	return (0);	
}
