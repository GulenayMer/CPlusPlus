/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:38:39 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 16:03:54 by mgulenay         ###   ########.fr       */
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
	std::cout << GREEN << "A default ScavTrap constructor called" << RESET << std::endl;
 	this->setName("");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(STR name)
{
	std::cout << GREEN << "ScavTrap " << RED
	<< name << GREEN << " constructor called " 
	<< RESET << std::endl;
	
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &source_obj)
{
	std::cout << YELLOW << "ScavTrap Copy ConstructoR called " << RESET << std::endl;
	
	// this->getName() -- source_obj.getName()
	/* this->setName(source_obj.getName());
	this->setHitPoints(source_obj.getHitPoints());
	this->setEnergyPoints(source_obj.getEnergyPoints());
	this->setAttackDamage(source_obj.getAttackDamage()); */
	*this = source_obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &source_obj)
{
	std::cout << YELLOW << "ScavTrap OperatoR overload called " << RESET << std::endl;

	if (this != &source_obj)
	{
		this->setName(source_obj.getName());
		this->setHitPoints(source_obj.getHitPoints());
		this->setEnergyPoints(source_obj.getEnergyPoints());
		this->setAttackDamage(source_obj.getAttackDamage());
	}
	return (*this);
}


void ScavTrap::attack(const STR &target)
{
	if (this->getEnergyPoints() < 1)
	{
		std::cout << RED << "ScavTrap " << YELLOW
		<< this->getName() << RED
		<< " has less than 1 energy pointsy so cannot attack:/" 
		<< RESET << std::endl;
		return ;
	}
	if (this->getHitPoints() < 1)
	{
		std::cout << RED << "ScavTrap " << YELLOW
		<< this->getName() << RED
		<< " has less than 1 hit points, so cannot attack:/" 
		<< RESET << std::endl;
		return ;
	}
	else
	{
		std::cout << BLUE << "ScavTrap " << RED 
		<< this->getName() << BLUE << " attacked " 
		<< RED << target << BLUE << ", causing "
		<< RED << this->getAttackDamage() << BLUE 
		<< " attack damage" << RESET << std::endl;
		
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
}

void ScavTrap::guardGate( void )
{
	if (this->getHitPoints() < 1 || this->getEnergyPoints() < 1)
	{
		std::cout << RED << "ScavTrap " << BLUE << this->getName() << RED
		<< " has no hit point to be Gate Keeper!" << RESET << std::endl;
	}
	else
	{
		std::cout << BLUE << "ScavTrap " << RED << this->getName() 
		<< BLUE << " has entered the Gate Keeper mode" << RESET << std::endl;
		
		this->setEnergyPoints(getEnergyPoints() - 1);
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << "ScavTrap " << RED <<
	this->getName() << YELLOW << " destructor called" 
	<< RESET << std::endl;
}
