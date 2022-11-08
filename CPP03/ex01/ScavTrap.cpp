/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:38:39 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/07 22:39:38 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* 
	+ ScavTrap inherits the constructoes and destructor from ClapTrap.
	+ But its constructors, destructor & attack() print different messages.
	+ ScavTrap uses the attributes of ClapTrap
*/
ScavTrap::ScavTrap()
{
	//std::cout << GREEN << "Default ScavTrap ConstructoR called" << RESET << std::endl;
 
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(STR _name)
{
	std::cout << GREEN << "ScavTrap ConstructoR called " << RESET << std::endl;
	
	this->setName(_name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &source_obj)
{
	std::cout << YELLOW << "ScavTrap CopY ConstructoR called " << RESET << std::endl;

	this->setName(source_obj.getName());
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &source_obj)
{
	std::cout << YELLOW << "ScavTrap OperatoR overload called " << RESET << std::endl;

	if (this != &source_obj)
	{
		this->setName(source_obj.getName());
		this->setHitPoints(source_obj.getHitPoint());
		this->setEnergyPoints(source_obj.getEnergyPoint());
		this->setAttackDamage(source_obj.getAttackDamage());
	}
	return (*this);
}


void ScavTrap::attack(const STR &target)
{
	if (this->getEnergyPoint() < 1)
	{
		std::cout << RED << "ScavTrap has no energy points to attack" << RESET << std::endl;
		return ;
	}
	if (this->getHitPoint() < 1)
	{
		std::cout << RED << "ScavTrap has no hit points to attack" << RESET << std::endl;
		return ;
	}
	this->setEnergyPoints(this->getEnergyPoint() - 1);
	std::cout << BLUE << "ScavTrap " << RED << this->getName() << BLUE << " attacked " 
	<< RED << target << BLUE << ", causing "
	<< RED << this->getAttackDamage() << BLUE << " attack damage" << RESET << std::endl;

}

void ScavTrap::guardGate( void )
{
	if (this->getHitPoint() < 1 || this->getEnergyPoint() < 1)
		std::cout << RED << "ScavTrap " << BLUE << this->getName() << RED
		<< " has no hit point to be Gate Keeper!" << RESET << std::endl;
	else
		std::cout << BLUE << "ScavTrap " << RED << this->getName() 
		<< BLUE << " has entered the Gate Keeper mode" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << "ScavTrap DestructoR called" << RESET << std::endl;
}
