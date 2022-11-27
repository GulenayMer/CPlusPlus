/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:24:13 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/25 15:45:17 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl is constructed" << std::endl;	
}


void Harl::debug(void)
{
	std::cout << "\"DEBUG\" LEVEL: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "\"INFO\" LEVEL: I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "\"WARNING\" LEVEL: I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "\"ERROR\" LEVEL: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(STR level)
{
	STR level_msgs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	level_ptr ptr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int	idx = 0;
	while (idx < 4)
	{
		if (level == level_msgs[idx])
		{
			std::cout << level_msgs[idx] << std::endl;
			(this->*ptr[idx])();
		}
		idx += 1;
	}
}


Harl::~Harl(void)
{
	std::cout << "Harl is destructed" << std::endl;	
}
