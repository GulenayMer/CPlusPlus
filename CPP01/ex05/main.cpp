/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:29:45 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/25 15:49:40 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*
	the goal is to use pointers to member functions
	Harl needs to complain without using a lot of conditions
	does not think twice
	
	Automate Harl
	- Debug Level -- messages contain contextual infos, used for 
		problem diagnosis
	- Info Level -- messages contain extensive info, 
		helpful for tracing program execution in a production env.
	- Warning Level -- messages indicate a potential issue in the system
	- Error Level -- messages indicate an unrecovarble error has occured
*/

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc == 2)
		harl.complain(argv[1]);
		
	return 0;

}
