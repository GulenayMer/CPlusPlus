/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:05:10 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/12 14:02:05 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>


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


class Brain
{
	protected:
	
		STR _ideas[100];

	public:
		
		/* Constructors */
		Brain(/* args */);

		/* copy constructor */
		Brain(Brain const &source_obj);

		/* assignment operator */
		Brain &operator=(const Brain &source_obj);

		/* setter - getter */
		void setIdea(STR idea, int i);
		virtual STR getIdea(int i) const;
		
		/* Destructor */
		~Brain();
};


#endif