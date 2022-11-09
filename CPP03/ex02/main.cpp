/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:20:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 15:46:54 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	std::cout << "----" << std::endl;
	
	std::cout << YELLOW << "An Object from the Base Class: " << RESET << std::endl;
	ClapTrap merhaba("Merhaba");
	std::cout << "----" << std::endl; 
	std::cout << GREEN << "Name: " << merhaba.getName() << RESET << std::endl; 
	std::cout << GREEN << "Damage: " << merhaba.getAttackDamage() << RESET << std::endl; 
	std::cout << GREEN << "Energy Points: " << merhaba.getEnergyPoints() << RESET << std::endl;
	std::cout << GREEN << "Hit Points: " << merhaba.getHitPoints() << RESET << std::endl; 
	std::cout << "----" << std::endl;
	

	std::cout << YELLOW << "An object from the Derivated Class : " << RESET << std::endl;
	FragTrap hola("Hola");
	std::cout << "----" << std::endl; 
	std::cout << GREEN << "Name: " << hola.getName() << RESET << std::endl; 
	std::cout << GREEN << "Damage: " << hola.getAttackDamage() << RESET << std::endl; 
	std::cout << GREEN << "Energy Points: " << hola.getEnergyPoints() << RESET << std::endl;
	std::cout << GREEN << "Hit Points: " << hola.getHitPoints() << RESET << std::endl; 
	
	std::cout << "----" << std::endl;
	
	std::cout << YELLOW << "Another Object from the Derivated Class :" << RESET << std::endl;
	FragTrap merve("merve");
	std::cout << "----" << std::endl; 
	std::cout << GREEN << "Name: " << merve.getName() << RESET << std::endl; 
	std::cout << GREEN << "Damage: " << merve.getAttackDamage() << RESET << std::endl; 
	std::cout << GREEN << "Energy Points: " << merve.getEnergyPoints() << RESET << std::endl;
	std::cout << GREEN << "Hit Points: " << merve.getHitPoints() << RESET << std::endl; 
	
	std::cout << "=========" << std::endl;
	
	std::cout << RED << "Fight between Derivated Class Objects" << RESET << std::endl;
	std::cout << "----" << std::endl;
	hola.attack(merve.getName());
	merve.takeDamage(10);
	std::cout << BLUE << merve.getName() << " has health " << merve.getHitPoints() << RESET << std::endl;
	
	std::cout << "----" << std::endl;
	
	merve.attack(hola.getName()); 
	std::cout << "----" << std::endl;
	hola.takeDamage(7);
	std::cout << BLUE << hola.getName() << " has health " << hola.getHitPoints() << RESET << std::endl;
	
	std::cout << "----" << std::endl;

	std::cout << BLUE << merve.getName() << " has energy " << merve.getEnergyPoints() << RESET << std::endl;
	std::cout << BLUE << hola.getName() << " has energy " << hola.getEnergyPoints() << RESET << std::endl;
	
	std::cout << "----" << std::endl;
		
	std::cout << "getting repaired : " << std::endl;
	merve.beRepaired(1);
	merve.beRepaired(10);
	std::cout << BLUE << merve.getName() << " now health is " << merve.getHitPoints() << RESET << std::endl;
	
	std::cout << "----" << std::endl;
	
	std::cout << "getting repaired : " << std::endl;
	hola.beRepaired(3);
	std::cout << BLUE << hola.getName() << " now health is " << hola.getHitPoints() << RESET << std::endl;
	
	std::cout << "----" << std::endl;
	merve.highFiveGuys();
	hola.highFiveGuys();
	
	return (0);
}
