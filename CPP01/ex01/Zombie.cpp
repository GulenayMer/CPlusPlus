/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:00:23 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/30 23:26:33 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor is called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_zombie_name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(STR name)
{
	this->_zombie_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_zombie_name << " is destructed" << std::endl;
}
