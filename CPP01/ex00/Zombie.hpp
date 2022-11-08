/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:40:31 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/07 11:24:39 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

#define	STR std::string

class Zombie
{
	private:
	
		STR _zombie_name;

	public:

		Zombie();
		Zombie(STR z_name);

		void announce(void);

		~Zombie();
};


/* creates a zombie -- will be used outside of the function scope */
Zombie* newZombie( STR name );

/* creates a zombie -- zombie announces itself*/
void randomChump( STR name );

#endif
