/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:40:28 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/30 23:12:22 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(STR z_name): _zombie_name(z_name)
{
	std::cout << "Constructor with the argument " << this->_zombie_name << " is called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_zombie_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

/*	destroy when zommbies are not needed anymore-- 
	the destructor must print a message with the name of the zombie for debugging purposes
*/
Zombie::~Zombie()
{
	std::cout << this->_zombie_name << " is destructed" << std::endl;
}
