/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:03:10 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/25 16:03:40 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
#define HARLFILTER_HPP

#include <iostream>
#include <string>

#define STR std::string

class HarlFilter
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error (void);
	
	public:
		HarlFilter(/* args */);
		~HarlFilter();

		void complain(STR level);
		typedef void (HarlFilter::*level_ptr)(void);
};


#endif
