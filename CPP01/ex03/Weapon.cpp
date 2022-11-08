/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:18:17 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/31 16:26:55 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(STR type): _type(type)
{
	std::cout << "Weapon is constructed" << std::endl;	
}

/* setType() sets type using the new one passed as parameter */
void Weapon::setType(STR weapon_type)
{
	this->_type = weapon_type;
}

	/* getType() returns a const reference to type
		means it returns a ref. to the string instance which is created inside it. -- returns an 
		implicit pointer to its return value, which resides a temporary memory segment
		-- and lives as long as our object instance is alive!!
	*/

const STR &Weapon::getType(void) const
{
	const STR &type_ref = this->_type;
	return (type_ref);
}

Weapon::~Weapon()
{
	std::cout << "Weapon is destructed" << std::endl;	
}
