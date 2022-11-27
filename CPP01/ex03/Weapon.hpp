/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:18:25 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/31 16:26:51 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

#define STR std::string

class Weapon
{
	private:
	
		STR _type;
	
	public:

		Weapon(STR type);
	
		const STR &getType(void) const; 
		void setType(STR weapon_type);

		~Weapon();
};

#endif
