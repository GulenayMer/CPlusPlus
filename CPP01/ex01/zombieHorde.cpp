/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:00:51 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/07 11:23:24 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* 
	Zombie*    zombieHorde( int N, std::string name )
	- must allocate N Zombie objects in a single allocation
	- has to initialize the zombies, giving each one of them the name passed as parameter
	- the func. returns a pointer to the first zombie 
*/

/* 
	std::to_string() converts the numerical value to string 
*/

Zombie* zombieHorde(int N, STR name)
{
	Zombie *new_zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		new_zombies[i].setName(name + " " + std::to_string(i));
		new_zombies[i].announce();
	}
	return (new_zombies);
}
