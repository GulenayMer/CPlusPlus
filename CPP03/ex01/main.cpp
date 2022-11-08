/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:20:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/07 22:40:27 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{

	ScavTrap m("merve");
	std::cout << "----" << std::endl;
	
	ScavTrap l("life");
	std::cout << "----" << std::endl;
	
/* 	ScavTrap d(l);
	std::cout << "----" << std::endl;

	d.attack("merve");
	std::cout << "----" << std::endl; 
	d.attack("life");
	std::cout << "----" << std::endl; */

	m.attack("life"); 
	std::cout << "----" << std::endl;
	l.takeDamage(110);
	std::cout << "----" << std::endl;
	l.beRepaired(1);
	std::cout << "----" << std::endl;
	l.attack("merve");
	std::cout << "----" << std::endl;
	m.takeDamage(10);
	std::cout << "----" << std::endl;
	m.beRepaired(1);
	std::cout << "----" << std::endl;
	
	m.guardGate();
	std::cout << "----" << std::endl;
	l.guardGate();

	return (0);
}
