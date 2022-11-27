/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:20:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 16:09:52 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "----" << std::endl;
	
	std::cout << YELLOW << "An Object from the Base Class: " << RESET << std::endl;
	ClapTrap merve("Merve");
	std::cout << "----" << std::endl; 
	std::cout << GREEN << "Name: " << merve.getName() << RESET << std::endl; 
	std::cout << GREEN << "Damage: " << merve.getAttackDamage() << RESET << std::endl; 
	std::cout << GREEN << "Energy Points: " << merve.getEnergyPoints() << RESET << std::endl;
	std::cout << GREEN << "Hit Points: " << merve.getHitPoints() << RESET << std::endl; 
	std::cout << "----" << std::endl;
	
	std::cout << "----" << std::endl;
	
	std::cout << YELLOW << "An Object from the Base Class: " << RESET << std::endl;
	ClapTrap hola("Hola");
	std::cout << "----" << std::endl; 
	std::cout << GREEN << "Name: " << hola.getName() << RESET << std::endl; 
	std::cout << GREEN << "Damage: " << hola.getAttackDamage() << RESET << std::endl; 
	std::cout << GREEN << "Energy Points: " << hola.getEnergyPoints() << RESET << std::endl;
	std::cout << GREEN << "Hit Points: " << hola.getHitPoints() << RESET << std::endl; 
	std::cout << "----" << std::endl;

	

	std::cout << "=========" << std::endl;
	
	std::cout << RED << "Fight between Base Class Objects" << RESET << std::endl;
	std::cout << "----" << std::endl;
	hola.attack(merve.getName());
	merve.takeDamage(8);
	std::cout << BLUE << merve.getName() << " has health " << merve.getHitPoints() << RESET << std::endl;
	
	std::cout << "----" << std::endl;
	
	merve.attack(hola.getName()); 
	std::cout << "----" << std::endl;
	hola.takeDamage(10);
	std::cout << BLUE << hola.getName() << " has health " << hola.getHitPoints() << RESET << std::endl;
	
	std::cout << "----" << std::endl;

	std::cout << BLUE << merve.getName() << " has energy " << merve.getEnergyPoints() << RESET << std::endl;
	std::cout << BLUE << hola.getName() << " has energy " << hola.getEnergyPoints() << RESET << std::endl;
	
	std::cout << "----" << std::endl;
	
	std::cout << "getting repaired : " << std::endl;
	merve.beRepaired(1);
	merve.beRepaired(3);
	std::cout << BLUE << merve.getName() << " now health is " << merve.getHitPoints() << RESET << std::endl;
	
	std::cout << "----" << std::endl;
	
	std::cout << "getting repaired : " << std::endl;
	hola.beRepaired(1);
	std::cout << BLUE << hola.getName() << " now health is " << hola.getHitPoints() << RESET << std::endl;
	
	std::cout << "----" << std::endl;
	
	return (0);
}
