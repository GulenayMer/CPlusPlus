/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:10:21 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/07 23:10:25 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hit_points(10), _energy_points(10), _attack_damage(10)
{
	//std::cout << GREEN << "Default constructoR called " << RESET << std::endl;
}

ClapTrap::ClapTrap(STR name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << RED << _name << GREEN << " ConstructoR called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source_obj)
{
	std::cout << YELLOW << "Copy ConstructoR called" << RESET << std::endl;
	
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
	std::cout << RED << this->getName() << GREEN << "  Destructor is called" << RESET << std::endl;
}
