/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:38:49 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/06 22:47:41 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define STR std::string

class ScavTrap: public ClapTrap
{
	private:
		/* data */
		
	public:
	
		/* Constructors */
		ScavTrap();
		ScavTrap(STR _name);

		/* Copy Constructor */
		ScavTrap(const ScavTrap &source_obj);
		
		/* Assignment Operator */
		ScavTrap &operator=(const ScavTrap &source_obj);

		/* */
		void guardGate();
		void attack(const STR &target);

		/* Destructor */
		~ScavTrap();
};

#endif