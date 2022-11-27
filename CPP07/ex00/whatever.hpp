/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:22:31 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/27 20:32:37 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */


#define STR std::string

/*
	Swaps the values of two given arguments. Does not return anything.
*/
template <typename T>
void	swap(T &first, T &second)
{
	T temp;
	temp = first;
	first = second;
	second = temp;
}

/*
	Compares the two values passed in its arguments and returns the smallest
	one. If the two of them are equal, then it returns the second one
*/
template <typename T>
const T &min(const T &x, const T &y)
{
	if (x < y)
		return (x);
	return (y);
}

/*
	Compares the two values passed in its arguments and returns the greatest one.
	If the two of them are equal, then it returns the second one.
*/
template <typename T>
const T &max(const T &x, const T &y)
{
	if (x > y)
		return (x);
	return (y);

}


#endif