/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:29:00 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/31 16:18:31 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

#define STR std::string

class HumanA
{
	private:
	
		STR _name_A;
		Weapon &_weaponA_ref;

	public:

		HumanA(STR name, Weapon &weaponA);
	
		void attack(void);

		~HumanA();
};

#endif
