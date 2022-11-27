/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:26:46 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/31 16:15:07 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

#define STR std::string 

class HumanB
{
	private:
		STR		_name_B;
		Weapon *_weaponB_ptr;
	
	public:
		HumanB(STR name_B);
		~HumanB();

		void attack(void);
		void setWeapon(Weapon &weaponB);
};

#endif
