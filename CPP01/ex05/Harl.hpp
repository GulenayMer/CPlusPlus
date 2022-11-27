/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:24:25 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/25 15:40:55 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

#define STR std::string

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error (void);
	
	public:
		Harl(/* args */);
		~Harl();

		void complain(STR level);
		typedef void (Harl::*level_ptr)(void);
};


#endif
