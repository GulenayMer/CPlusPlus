/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:07:55 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 19:38:26 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP
#define DIAMOND_TRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap: public ScavTrap, public FragTrap
{
	private:

		STR _name;

	public:
		
		DiamondTrap(/* args */);
		DiamondTrap(STR name);
		DiamondTrap(const DiamondTrap &source_obj);
		
		DiamondTrap &operator=(const DiamondTrap &source_obj);
		
		/* */
		void whoAmI(void);
		
		~DiamondTrap();
};


#endif