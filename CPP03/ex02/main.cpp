/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:20:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/07 23:23:14 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap f("first");
	std::cout << "----" << std::endl;
	FragTrap s("second");
	std::cout << "----" << std::endl;

	f.attack("second");
	std::cout << "----" << std::endl;
  	s.takeDamage(0);
	std::cout << "----" << std::endl;
  	s.beRepaired(0);
	std::cout << "----" << std::endl;
  	s.attack("first");
	std::cout << "----" << std::endl;
	f.takeDamage(10);
	std::cout << "----" << std::endl;
	f.beRepaired(3);
	std::cout << "----" << std::endl;
	f.highFiveGuys();
	std::cout << "----" << std::endl;
	s.highFiveGuys();
	
	return (0);
}
