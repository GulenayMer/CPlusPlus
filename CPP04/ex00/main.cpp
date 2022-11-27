/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:15 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/13 16:45:20 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
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

	std::cout << " ================================ " << std::endl;

	std::cout << YELLOW << " An object from the Animal Class : " << RESET << std::endl;
	std::cout << " -------------------------------- " << std::endl;
	const Animal *meta = new Animal();
	std::cout << GREEN << "here is " << RED << meta->getType() << RESET << std::endl;
	meta->makeSound();

	std::cout << " ================================ " << std::endl;

	std::cout << YELLOW << " An object from the Cat Class : " << RESET << std::endl;
	std::cout << " -------------------------------- " << std::endl;
	const Animal *i = new Cat();
	std::cout << GREEN << "here is " << RED << i->getType() << RESET << std::endl;
	//std::cout << GREEN << "Cat makes the sound of " << RESET << std::endl;
	i->makeSound();
	
	std::cout << " ================================ " << std::endl;

	std::cout << YELLOW << " An object from the Dog Class : " << RESET << std::endl;
	std::cout << " -------------------------------- " << std::endl;
	const Animal *j = new Dog();
	std::cout << GREEN << "here is " << RED << j->getType() << RESET << std::endl;
	//std::cout << GREEN << "Dog makes the sound of " << j->makeSound() << RESET << std::endl;
	j->makeSound();

	std::cout << " ================================ " << std::endl;
	
	std::cout << YELLOW << " An object from the WrongAnimal Class : " << RESET << std::endl;
	std::cout << " -------------------------------- " << std::endl;
	const WrongAnimal *m = new WrongAnimal();
	std::cout << GREEN << "here is " << BLUE << m->getType_w() << RESET << std::endl;
	//std::cout << GREEN << "WrongCat makes the sound of " << k->makeSound() << RESET << std::endl;
	m->makeSound_w();
	
	std::cout << " ================================ " << std::endl;
	
	std::cout << YELLOW << " An object from the WrongCat Class : " << RESET << std::endl;
	std::cout << " -------------------------------- " << std::endl;
	const WrongAnimal *k = new WrongCat();
	std::cout << GREEN << "here is " << BLUE << k->getType_w() << RESET << std::endl;
	k->makeSound_w();
	
	std::cout << " ================================ " << std::endl;

	delete meta;
	delete i;
	delete j;
	delete k;
	delete m;
	
	return (0);	
}
