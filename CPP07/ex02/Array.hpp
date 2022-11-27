/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:52:15 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/27 21:48:21 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

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
	develop a class template of type T & that implements the floowing behaviour & func.s
	+ MUST use the operator new[] to allocate memory
*/

template <class T>
class Array
{
	private:
	
		T *arr;
		unsigned int _size;

	public:
		
		Array();
		Array(unsigned int n);
		Array(const Array<T> &src_obj);
		Array &operator=(const Array<T> &src_obj);
		
		~Array();

		unsigned int size();
		T &operator[](unsigned int i);
		
		/* Exceptions */
		class OutofBoundsException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Out of bounds";
				}
		};
};

/* + construction with no parameter: creates an empty array
*/
template <typename T>
Array<T>::Array(): arr(NULL), _size(0) 
{
}

/* + construction with an unsigned int n as a parameter: Creates an arr of n elements initialized by default.
		Try to compile int *a = new int(); then display *a.
*/
template <typename T>
Array<T>::Array(unsigned int n):  arr(NULL), _size(n)
{
	this->arr = new T[this->_size]();	
}

/* Construction by copy and assignment operator.
		In both cases, modifying either the original array or
		its copy after copying musn’t affect the other array. */

template <typename T>
Array<T>::Array(const Array<T> &src_obj): arr(NULL), _size(src_obj._size)
{
	if (src_obj._size > 0)
	{
		this->arr = new T[src_obj._size]();
		for (unsigned int i = 0; i < src_obj._size; i++)
			this->arr[i] = src_obj.arr[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &src_obj)
{
	this->_size = src_obj._size;
	this->arr = src_obj.arr;
	
	if (src_obj._size > 0)
	{
		this->arr = new T[src_obj._size]();
		for (unsigned int i = 0; i < src_obj._size; i++)
			this->arr[i] = src_obj.arr[i];
	}
	return (*this);
}

/*	+ A member func. size() that returns the number of elements in the array. This
		member func. takes no parameter and musn’t modify the current instance. */
template <typename T>
unsigned int Array<T>::size(void)
{
	return this->_size;
}

/*  + Elements can be accessed through the subscript operator: [ ]
	+ When accessing an element with the [ ] operator, if its index is out of bounds, an
		std::exception is thrown. */
template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size || i < 0)
		throw Array::OutofBoundsException();
	return this->arr[i];
}


template <typename T>
Array<T>::~Array()
{
	if (this->_size > 0)
		delete[] this->arr;
}

#endif