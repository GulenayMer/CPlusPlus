/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:22:11 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/27 21:56:50 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//#define MAX_VAL 30

int main(int, char**)
{
   /*  Array<int> numbers(MAX_VAL);
	
    int *mirror = new int[MAX_VAL];
	
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;// */

	Array<int> numbers(10);
	std::cout << " Size: " << numbers.size() << std::endl;
    
	for (int i = 0; i < 10; i++)
	{
        numbers[i] = i;
	}

	std::cout << " --------------- " << std::endl;
	for (int i = 0; i < 10; i++)
	{
        std::cout << numbers[i] << std::endl;
	}

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    try
    {
        numbers[-1];
    }
    catch(const std::exception& e)
    {
		std::cout << " --------------- " << std::endl;
        std::cerr << e.what() << '\n';
    }
	std::cout << "--------------" << std::endl;
    return 0;
}