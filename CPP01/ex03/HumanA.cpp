/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:29:22 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/31 16:24:35 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*  weapon_type(_type) : initilizing my weapon_type attribute to _type
	also name_A attribute could be initiliazed like --  name_A(name)
*/
HumanA::HumanA(STR name, Weapon &_weaponA): _name_A(name), _weaponA_ref(_weaponA)
{
	std::cout << "HumanA " << this->_name_A << " is constructed" << std::endl;	
}

void HumanA::attack(void)
{
	std::cout << this->_name_A << " attacks with their " << this->_weaponA_ref.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << this->_name_A << " is destructed" << std::endl;
}
