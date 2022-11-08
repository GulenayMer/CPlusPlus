/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:20:15 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/06 22:45:17 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ): _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << GREEN << "Default ConstructoR called " << RESET << std::endl;
}

/*
	_hit_points represents the health of the ClapTrap
*/
ClapTrap::ClapTrap(STR name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << RED << _name << GREEN << " ConstructoR called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source_obj)
{
	std::cout << YELLOW << "Copy Constructor called" << RESET << std::endl;
	/* this->_name = source_obj._name;
	this->_hit_points = source_obj._hit_points;
	this->_energy_points = source_obj._energy_points;
	this->_attack_damage = source_obj._attack_damage; */
	*this = source_obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &source_obj)
{
	std::cout << BLUE << "Assignment OperatoR called" << RESET << std::endl;

	if (this != &source_obj)
	{
		this->_name = source_obj.getName();
		this->_hit_points = source_obj.getHitPoint();
		this->_energy_points = source_obj.getEnergyPoint();
		this->_attack_damage = source_obj.getAttackDamage();
	}
	return (*this);
}

void ClapTrap::setName(STR name)
{
	this->_name = name;
}

STR ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getHitPoint() const
{
	return (this->_hit_points);
}

int ClapTrap::getEnergyPoint() const
{
	return (this->_energy_points);
}

int ClapTrap::getAttackDamage() const
{
	return (this->_attack_damage);
}

/*
	+ When ClapTrap attacks, it causes its target to lose "_attack_damage" hit points.
	+ When ClapTrap repairs itself, it gets "amount" "_hit_points" back.
	+ Attacking & repairing cost 1 "_energy_points" each
	+ ClapTrap cannot do anything if it has no "_hit_points" or "_energy_points" left 
*/
void ClapTrap::attack(const STR &target)
{
	if (this->_energy_points < 1)
	{
		std::cout << RED << "ClapTrap has no energy points to attack" << RESET << std::endl;
		return ;
	}
	if (this->_hit_points < 1)
	{
		std::cout << RED << "ClapTrap has no hit points to attack" << RESET << std::endl;
		return ;
	}
	else
		std::cout << YELLOW << "ClapTrap " << RED << this->_name << YELLOW << " attacks " << RED << target << YELLOW << ", causing " << RED << this->_attack_damage << YELLOW << " damage!" << RESET << std::endl;
	this->_energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points < 1)
	{
		std::cout << RED << "ClapTrap has no hit points to take the damage" << RESET << std::endl;
		return ;
	}
	this->_hit_points -= amount;
	std::cout << YELLOW << "ClapTrap " << RED << this->_name << YELLOW << " took " << RED << amount << YELLOW << " of damage" << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points < 1)
	{
		std::cout << RED << "ClapTrap has no energy points to be repaired" << RESET << std::endl;
		return ;
	}
	if (this->_hit_points < 1)
	{
		std::cout << RED << "ClapTrap has no hit points to be repaired" << RESET << std::endl;
		return ;
	}
	this->_hit_points += amount;
	this->_energy_points -= 1;
	
	std::cout << YELLOW << "ClapTrap " << RED << this->_name << YELLOW << " got " << RED << amount << YELLOW << " of hit points" << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << this->getName() << GREEN << " DestructoR called" << RESET << std::endl;
}
