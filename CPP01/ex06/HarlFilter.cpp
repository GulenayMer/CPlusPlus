/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:02:20 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/25 16:14:06 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

HarlFilter::HarlFilter(void)
{
	std::cout << "HarlFilter is constructed" << std::endl;	
}

void HarlFilter::debug(void)
{
	std::cout << "\"DEBUG\" LEVEL: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void HarlFilter::info(void)
{
	std::cout << "\"INFO\" LEVEL: I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void HarlFilter::warning(void)
{
	std::cout << "\"WARNING\" LEVEL: I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}

void HarlFilter::error(void)
{
	std::cout << "\"ERROR\" LEVEL: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void HarlFilter::complain(STR level)
{
	STR level_msgs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	level_ptr ptr[4] = {&HarlFilter::debug, &HarlFilter::info, &HarlFilter::warning, &HarlFilter::error};

	int	idx = 0;
	while (idx < 5)
	{
		if (level == level_msgs[idx])
		{
			switch (idx)
			{
				case 0:
				{
					std::cout << level_msgs[0] << std::endl;
					(this->*ptr[0])();
				}	
				case 1:
				{
					std::cout << level_msgs[1] << std::endl;
					(this->*ptr[1])();
				}	
				case 2:
				{
					std::cout << level_msgs[2] << std::endl;
					(this->*ptr[2])();
				}	
				case 3:
				{
					std::cout << level_msgs[3] << std::endl;
					(this->*ptr[3])();
					break ;
				}	
				default:
				{
					std::cout << "errorrr " << std::endl;
					break;
				}	
			}
		}
		idx += 1;
	}
}


HarlFilter::~HarlFilter(void)
{
	std::cout << "HarlFilter is destructed" << std::endl;	
}
