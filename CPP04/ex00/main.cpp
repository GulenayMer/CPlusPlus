/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:15 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 22:39:03 by mgulenay         ###   ########.fr       */
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
	//Animal a;
	//Animal b("dog");
	//b.makeSound("aaa");

	/* Cat c;
	c.makeSound();
	Dog d;
	d.makeSound(); */
	
	//const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << "this is " << j->getType() << " here" << std::endl;
	std::cout << "this is " << i->getType() << " here" << std::endl;

	i->makeSound();
	j->makeSound();
	//meta->makeSound();

	//delete meta;
	delete i;
	delete j;
	return (0);	
}
