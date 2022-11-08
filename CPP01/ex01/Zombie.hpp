/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:18:25 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/30 23:26:15 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define STR std::string

class Zombie
{
	private:
		STR _zombie_name;
		int _zombie_nb;
		
	public:
		Zombie();
		~Zombie();

		void announce(void);
		void setName(STR name);
};

Zombie* zombieHorde( int N, std::string name );

#endif