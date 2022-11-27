/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:07:51 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 19:48:03 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* 
	DiamondTrap : a ClapTrap that is half FragTrap & half ScavTrap
	
	Attributes & member functions will be picked from either one of its parent classes:
		+ Name, which is passed as parameter to a constructor
		+ ClapTrap::name (parameter of the constructor + "_clap_name" suffix) 
		+ Hit points (FragTrap)
		+ Energy points (ScavTrap)
		+ Attack damage (FragTrap)
		+ attack() (Scavtrap)
*/

DiamondTrap::DiamondTrap(/* args */)
{
	//std::cout << GREEN << "Default DiamondTrap constructor called" << RESET << std::endl;
}


DiamondTrap::DiamondTrap(STR name): ClapTrap(name + " _clap_name"), ScavTrap(name + " _clap_name"), FragTrap(name + " _clap_name")
{
	std::cout << GREEN << this->_name << " DiamondTrap constructor called" << RESET << std::endl;
	
	this->_name = name;
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(const DiamondTrap &source_obj)
{
	std::cout << GREEN << " DiamondTrap copy constructor called" << RESET << std::endl;

	*this = source_obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &source_obj)
{
	std::cout << GREEN << " DiamondTrap copy constructor called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->setName(source_obj.ClapTrap::getName());
		this->setHitPoints(source_obj.FragTrap::getHitPoints());
		this->setEnergyPoints(source_obj.ScavTrap::getEnergyPoints());
		this->setAttackDamage(source_obj.FragTrap::getAttackDamage());
	}
	return(*this);
}

/* This member function will display both its name and its ClapTrap name */
void DiamondTrap::whoAmI(void)
{
	std::cout << GREEN << " My Diamond name is " << RED << this->_name << RESET << std::endl;
	std::cout << GREEN << " My ClapTrap name is " << RED << this->ClapTrap::getName() << RESET << std::endl;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << RED << this->getName() << GREEN << " DiamondTrap destructor called" << RESET << std::endl;
}