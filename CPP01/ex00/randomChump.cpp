/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:40:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/30 23:11:16 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	creates a zombie, name it, and the zombie announces itself
*/

void randomChump(STR name)
{
	Zombie zombie_stack(name);
	
	zombie_stack.announce();

	return ;
}
