/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:20:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 19:52:30 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "----" << std::endl;

	std::cout << YELLOW << "An Object from the Base Class: " << RESET << std::endl;
	DiamondTrap merve("Böööö");

	std::cout << "----" << std::endl; 
	
	std::cout << GREEN << "Name: " << merve.getName() << RESET << std::endl; 
	std::cout << GREEN << "Damage: " << merve.getAttackDamage() << RESET << std::endl; 
	std::cout << GREEN << "Energy Points: " << merve.getEnergyPoints() << RESET << std::endl;
	std::cout << GREEN << "Hit Points: " << merve.getHitPoints() << RESET << std::endl; 
	std::cout << "----" << std::endl;
		
/* 	std::cout << YELLOW << "Another Object from the Derivated Class :" << RESET << std::endl;
	DiamondTrap hola("Scared");
	std::cout << "----" << std::endl;
	std::cout << GREEN << "Name: " << hola.getName() << RESET << std::endl; 
	std::cout << GREEN << "Damage: " << hola.getAttackDamage() << RESET << std::endl; 
	std::cout << GREEN << "Energy Points: " << hola.getEnergyPoints() << RESET << std::endl;
	std::cout << GREEN << "Hit Points: " << hola.getHitPoints() << RESET << std::endl; */ 
	
	std::cout << "=========" << std::endl;
	

	merve.attack("aaa");
	std::cout << "----" << std::endl; 
	
	std::cout << GREEN << "Energy left for " << merve.getName() << " " << merve.getEnergyPoints() << RESET << std::endl; 
	std::cout << GREEN << "HipPoints left for " << merve.getName()  << " " << merve.getHitPoints() << RESET << std::endl; 
	std::cout << GREEN << "Attack Damage left for " << merve.getName() << " " << merve.getAttackDamage() << RESET << std::endl; 

	std::cout << "----" << std::endl;
	merve.whoAmI();
	
	return (0);
}
