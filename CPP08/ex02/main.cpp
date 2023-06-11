/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:49:50 by mgulenay          #+#    #+#             */
/*   Updated: 2022/12/03 18:09:48 by mgulenay         ###   ########.fr       */
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
	std::cout << BLUE << "Top value " << mstack.top() << RESET << std::endl;
	//mstack.pop();
	mstack.push(3);
	mstack.push(15);
	mstack.push(737);
	mstack.push(100);
	std::cout << BLUE << "Current Size " <<  mstack.size() << RESET << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << MAGENTA << *it << RESET << std::endl;
		++it;
	}

	std::cout << YELLOW << " ------- Test 2 Copy Obj --------- " << RESET << std::endl;
	std::cout << YELLOW << " ######################### " << RESET << std::endl;
	MutantStack<int> s(mstack);
	MutantStack<int>::iterator it1 = s.begin();
	MutantStack<int>::iterator ite1 = s.end();
	while (it1 != ite1)
	{
		std::cout << MAGENTA << *it1 << RESET << std::endl;
		++it1;
	}

	std::cout << YELLOW << " ------- Test 3 Compare List --------- " << RESET << std::endl;
	std::cout << YELLOW << " ######################### " << RESET << std::endl;
	
{
		
	std::list<int> mstack;

	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << BLUE << "Top value " << mstack.back() << RESET << std::endl;
	//mstack.pop();
	mstack.push_back(3);
	mstack.push_back(15);
	mstack.push_back(737);
	mstack.push_back(100);
	std::cout << BLUE << "Size " <<  mstack.size() << RESET << std::endl;
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << MAGENTA << *it << RESET << std::endl;
		++it;
	}
}
    return 0;
}