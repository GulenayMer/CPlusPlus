/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:15 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/13 17:59:52 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"



/*
	an array test
*/
/* int main (void)
{
	std::cout << GREEN << " Constructing Array of Objects : " << RESET << std::endl;
	std::cout << " -------------------------------- " << std::endl;
	Animal *ideas[8];
	for (unsigned int i = 0; i < 3; i++)
	{
		ideas[i] = new Cat();
		ideas[i + 3] = new Dog();
	}

	std::cout << " ================================ " << std::endl;

	for (unsigned int i = 0; i < 3; i++)
	{
		delete ideas[i];
		delete ideas[i + 3];
	}
} */

/*
	deep copy test
*/

/* int main (void)
{

	Dog basic;
	std::cout << " -------------------------------- " << std::endl;
	
	Dog tmp = basic;
	std::cout << " -------------------------------- " << std::endl;

	basic.setIdea("source obj's idea -- basic ", 5);
	std::cout << " -------------------------------- " << std::endl;

	std::cout << RED << "idea from the source object is: " << basic.getIdea(5) << RESET << std::endl;
	std::cout << " -------------------------------- " << std::endl;

	tmp.setIdea("tmp object's idea -- tmp ", 5);
	std::cout << RED << "idea from the copied object is: " << tmp.getIdea(5) << RESET << std::endl;
	std::cout << " -------------------------------- " << std::endl;

	std::cout << " ================================ " << std::endl; 

 	Cat exp_obj;
	std::cout << " -------------------------------- " << std::endl;
	
	Cat tmp_obj = exp_obj;
	std::cout << " -------------------------------- " << std::endl;

	exp_obj.setIdea("source obj's idea -- exp_obj ", 3);
	std::cout << " -------------------------------- " << std::endl;

	std::cout << RED << "idea from the source object is: " << exp_obj.getIdea(3) << RESET << std::endl;
	std::cout << " -------------------------------- " << std::endl;

	tmp_obj.setIdea("tmp object's idea -- tmp_obj", 3);
	std::cout << RED << "idea from the copied object is: " << tmp_obj.getIdea(3) << RESET << std::endl;
	std::cout << " -------------------------------- " << std::endl;
} */

/*
 	test from previous excercise
*/
/* int main(void)
{
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
	i->makeSound();
	
	std::cout << " ================================ " << std::endl;

	std::cout << YELLOW << " An object from the Dog Class : " << RESET << std::endl;
	std::cout << " -------------------------------- " << std::endl;
	const Animal *j = new Dog();
	std::cout << GREEN << "here is " << RED << j->getType() << RESET << std::endl;
	j->makeSound();

	std::cout << " ================================ " << std::endl;

	delete meta;
	delete i;
	delete j;

	return (0);	
} */