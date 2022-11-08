/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:20:24 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/06 22:42:14 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	/* ClapTrap a;
	std::cout << "----" << std::endl; */
	
	ClapTrap m("merve");
	std::cout << "----" << std::endl;
	
	ClapTrap l("life");
	std::cout << "----" << std::endl;
	
	/* ClapTrap d(l);
	std::cout << "----" << std::endl; */
	/* 
	a.attack("merve");
	std::cout << "----" << std::endl; 
	a.attack("life");
	std::cout << "----" << std::endl;
	*/
	m.attack("life"); 
	std::cout << "----" << std::endl;
	l.takeDamage(1);
	std::cout << "----" << std::endl;
	l.beRepaired(1);
	std::cout << "----" << std::endl;
	l.attack("merve");
	std::cout << "----" << std::endl;
	m.takeDamage(10);
	std::cout << "----" << std::endl;
	m.beRepaired(1);
	std::cout << "----" << std::endl;
	
	/* d.attack("merve");
	std::cout << "----" << std::endl; */
	return (0);
}
