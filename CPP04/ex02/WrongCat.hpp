/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:40:04 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/12 12:51:06 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:

		STR _type_w;

	public:
		WrongCat(/* args */);
		WrongCat(const WrongCat &source_obj);
		WrongCat &operator=(const WrongCat &source_obj);

	 
		STR getType_w(void) const;
		void setType_w(STR type_w);
		
		void makeSound_w(void) const;
		
		~WrongCat();
};


#endif