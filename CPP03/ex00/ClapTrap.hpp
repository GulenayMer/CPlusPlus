/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:18:50 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/06 21:00:07 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

#define STR std::string

class ClapTrap
{
	private:

		STR	 _name;
		int  _hit_points;
		int  _energy_points;
		int  _attack_damage;
	
	public:
	
		/* Constructors */
		ClapTrap();
		ClapTrap(STR name);

		/* Copy Constructor */
		ClapTrap(const ClapTrap &source_obj);
	
		/* Assignment Operator*/
		ClapTrap &operator=(const ClapTrap &source_obj);
		
		/* Accessors -- Set & Get */
		void setName(STR name);
		STR  getName() const;
		int  getHitPoint() const;
		int  getEnergyPoint() const;
		int  getAttackDamage() const;
		
		void attack(const STR &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		/* Destructor */
		~ClapTrap();
};

#endif