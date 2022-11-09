/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:32:43 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/09 15:35:46 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
	
		/* data */
	public:

		/* Cosntructors */
		FragTrap(/* args */);
		FragTrap(STR _name);
		FragTrap(const FragTrap &source_obj);
	
		/* Assignemnt Operator*/
		FragTrap &operator=(const FragTrap &source_obj);

		/* */
		void highFiveGuys(void);
		
		/* Desructor */
		~FragTrap();
};

#endif