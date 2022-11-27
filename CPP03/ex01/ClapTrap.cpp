/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:20:15 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 14:44:27 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	//std::cout << GREEN << "A default ClapTrap constructor called " << RESET << std::endl;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(STR name): _name(name)
{
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << RED << this->_name << GREEN << " ClapTrap constructor called" << RESET << std::endl;
	
/* 	std::cout << BLUE << "Attack Damage: " << this->_attack_damage << " "
	<< " Hit Points: " << this->_hit_points << " "
	<< " Energy Points: " << this->_energy_points << " " << std::endl; */
}

ClapTrap::ClapTrap(const ClapTrap &source_obj)
{
	std::cout << YELLOW << "ClapTrap copy constructor called" << RESET << std::endl;
	
	/* this->_name = source_obj._name;
	this->_hit_points = source_obj._hit_points;
	this->_energy_points = source_obj._energy_points;
	this->_attack_damage = source_obj._attack_damage; */
	*this = source_obj; 
}

ClapTrap &ClapTrap::operator=(const ClapTrap &source_obj)
{
	std::cout << BLUE << "Assignment Operator called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_name = source_obj.getName();
		this->_hit_points = source_obj.getHitPoints();
		this->_energy_points = source_obj.getEnergyPoints();
		this->_attack_damage = source_obj.getAttackDamage();
	}
	return (*this);
}

void ClapTrap::setName(STR name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(int amount)
{
	this->_hit_points= amount;
}

void ClapTrap::setEnergyPoints(int amount)
{
	this->_energy_points= amount;
}

void ClapTrap::setAttackDamage(int amount)
{
	this->_attack_damage= amount;
}

STR ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->_hit_points);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energy_points);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

void ClapTrap::attack(const STR &target)
{
	if (this->_energy_points < 1)
	{
		std::cout << YELLOW << this->_name << RED
		<< " has less than 1 energy pointsy so cannot attack:/" 
		<< RESET << std::endl;
		return ;
	}
	else if (this->_hit_points < 1)
	{
		std::cout << YELLOW << this->_name << RED
		<< " has less than 1 hit points, so cannot attack:/" 
		<< RESET << std::endl;
		return ;
	}
	else
	{
		std::cout << this->_name << YELLOW 
		<< " attacks " << RED << target << YELLOW 
		<< ", causing " << RED << this->_attack_damage 
		<< YELLOW << " damage!" << RESET << std::endl;

		this->_energy_points -= 1;
	}	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points < 1)
	{
		std::cout << RED << this->_name << YELLOW 
		" has less than 1 hit points, cannot take the damage:/" 
		<< RESET << std::endl;
		return ;
	}
	else
	{
		std::cout << RED << this->_name << YELLOW << " took " << RED 
		<< amount << YELLOW << " of damage" << RESET << std::endl;

		this->_hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points < 1)
	{
		std::cout << RED << this->_name << YELLOW 
		<< RED << " has less than 1 energy points, cannot be repaired:/"
		<< RESET << std::endl;
		return ;
	}
	else if (this->_hit_points < 1)
	{
		std::cout << RED << this->_name << YELLOW 
		<< RED << " has less than 1 hit points, cannot be repaired:/" 
		<< RESET << std::endl;
		return ;
	}
	else
	{
		std::cout << RED << this->_name << YELLOW 
		<< " got " << RED << amount << YELLOW 
		<< " of hit points" << RESET << std::endl;
		
		this->_hit_points += amount;
		this->_energy_points -= 1;
	}
}


ClapTrap::~ClapTrap()
{
	std::cout << GREEN << "ClapTrap " << RED << this->_name << GREEN 
	<< " destructor called" << RESET << std::endl;
}
