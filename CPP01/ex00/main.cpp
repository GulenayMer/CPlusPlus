/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:42:00 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/30 23:02:33 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	new -- allocates memory
	delete -- frees the allocated memory
*/

int main(void)
{
	/* heap allocation for zombie; newZombie() */
	Zombie *zombie_heap;
	
	zombie_heap = newZombie("Foo");
	/* call announce() */
	zombie_heap->announce();
	
	/* stack allocation */
	randomChump("Mooo");
	
	/* free the allocated zombie_heap memory */
	delete zombie_heap;
	return (0);	
}
