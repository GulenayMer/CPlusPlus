/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:32:33 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/07 23:20:20 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(/* args */)
{
	//std::cout << GREEN << "Default FragTrap constructor is called" << RESET << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(STR _name)
{
	std::cout << GREEN << "FragTrap constructor is called " << RESET << std::endl;
	
	this->setName(_name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &source_obj)
{
	std::cout << YELLOW << "FragTrap copy constructor is called " << RESET << std::endl;

	/* this->setName(source_obj.getName());
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30); */
	*this = source_obj;
}

FragTrap &FragTrap::operator=(const FragTrap &source_obj)
{
	std::cout << YELLOW << "FragTrap operator overload is called " << RESET << std::endl;

	if (this != &source_obj)
	{
		this->setName(source_obj.getName());
		this->setHitPoints(source_obj.getHitPoint());
		this->setEnergyPoints(source_obj.getEnergyPoint());
		this->setAttackDamage(source_obj.getAttackDamage());
	}
	return (*this);
}

/*
	displays a positive high fives request on the stdout
*/
void FragTrap::highFiveGuys( void )
{
	if (this->getHitPoint() < 0 || this->getEnergyPoint() < 0)
		std::cout << RED << this->getName() << BLUE << " cannot high five at the moment! " << RESET << std::endl;
	else 
		std::cout << RED << this->getName() << BLUE << " high five! " << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << YELLOW << "FragTrap DestructoR is called" << RESET << std::endl;
}
