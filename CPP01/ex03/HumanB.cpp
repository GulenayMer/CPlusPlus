/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:26:28 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/10 10:31:22 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//HumanB::HumanB(STR name): name_B(name)
HumanB::HumanB(STR name): _name_B(name)
{
	std::cout << "HumanB " << this->_name_B << " is constructed" << std::endl;
}


void HumanB::setWeapon(Weapon &weaponB)
{
	this->_weaponB_ptr = &weaponB;
}


void HumanB::attack()
{
	std::cout << this->_name_B << " attacks with their " << this->_weaponB_ptr->getType() << std::endl;
}


HumanB::~HumanB()
{
	std::cout << "HumanB " << this->_name_B << " is destructed" << std::endl;
}
