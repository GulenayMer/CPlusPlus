/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:49:50 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/28 19:16:18 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	std::cout << YELLOW << " ------- Test 1 --------- " << RESET << std::endl;
	std::cout << YELLOW << " ######################### " << RESET << std::endl;
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	//std::cout << mstack.top() << std::endl;
	mstack.pop();
	//std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(15);
	mstack.push(737);
//[...]
	mstack.push(100);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << YELLOW << " ------- Test 2 --------- " << RESET << std::endl;
	std::cout << YELLOW << " ######################### " << RESET << std::endl;
	MutantStack<int> s(mstack);
	MutantStack<int>::iterator it1 = s.begin();
	MutantStack<int>::iterator ite1 = s.end();
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}

    return 0;
}