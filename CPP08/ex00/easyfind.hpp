
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <deque>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */


/* Exception Class */
class NoMatchesException : public std::exception
{
	public :
	const char *what() const throw()
	{
		return ("No occurrence is found");
	};
};


/*
	a func. accepts a type T., takes 2 parameters -- type T and an integer.

	Assuming T is a container of integers -- it has to find the first occurence of the second parameter
	in the first parameter.
	- if no occurence is found, either throw an exception or return an error value
*/
template <typename T>

typename T::iterator easyfind(T &contType, int toFind)
{
	typename T::iterator iter;
	iter = find(contType.begin(), contType.end(), toFind);
	if (iter == contType.end())
		throw NoMatchesException();
	else if (iter != contType.end())
		std::cout << MAGENTA << "We found a occurrence of " << toFind << " at " << std::distance(contType.begin(), iter) << RESET << std::endl;
	return (iter);
}


	/* if (iter != contType.end())
		std::cout << MAGENTA << "We found a occurrence of " << toFind << " at " << std::distance(contType.begin(), iter) << RESET << std::endl;
	else
		std::cout << RED << "No occurrence is found" << RESET << '\n'; */

#endif