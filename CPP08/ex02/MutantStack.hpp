/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:50:33 by mgulenay          #+#    #+#             */
/*   Updated: 2022/12/03 18:06:00 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <algorithm>


#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */


template <typename T>

class MutantStack: public std::stack<T>
{
	private:
	/* data */

	public:
	
	MutantStack();
	MutantStack(const MutantStack& src);
	MutantStack& operator=(const MutantStack& src);
	~MutantStack();

	/* creating an iterator */
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	
	// The std::stack's container object corresponds to the (protected) data member c
		iterator begin(void) 
		{ 
			return this->c.begin(); 
		}
		
		iterator end(void)
		{ 
			return this->c.end(); 
		}

		const_iterator begin(void) const 
		{ 
			return this->c.begin(); 
		}
		
		const_iterator end(void) const 
		{ 
			return this->c.end(); 
		}
};

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &src_obj): std::stack<T>(src_obj)
{
	*this = src_obj;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T> &src_obj)
{
	if (this != &src_obj)
		this->c = src_obj.c;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{

}

#endif