/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:16:17 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/27 17:04:01 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char *argv[])
{

	STR arg; 
	
	if (argc != 2)
	{
		std::cerr << RED << "Error: check the number of arguments" << RESET << std::endl;
		std::cerr <<  "USAGE : ./convert <argument> " << std::endl;
		return (1);
	}
	
	arg = argv[1];
	cast_literals(arg);
	return (0);	
}
