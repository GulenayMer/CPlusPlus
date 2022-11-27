/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:40:19 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/20 20:54:53 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	Zombie* newZombie( std::string name );
	creates a zombie, name it, and return it so u can use it outside of the function scope
*/

Zombie* newZombie(STR name)
{
	/* dynamically declares the Zombie object */
	Zombie *new_z = new Zombie(name);
	return (new_z);
}
