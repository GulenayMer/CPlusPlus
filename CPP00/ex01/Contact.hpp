/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:00:03 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/19 21:49:51 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define	STR std::string

class Contact
{
	private:
	/* data -- attributes: */
		STR first_name;
		STR last_name;
		STR nickname;
		STR phone_number;
		STR darkest_secret;
		int	index;

	public:
		/* constructor -- destructor */
		Contact();
		~Contact();

		/* methods */
		void set_firstname(STR f_name);
		STR get_firstname(void);

		void set_lastname(STR l_name);
		STR get_lastname(void);
	
		void set_nickname(STR n_name);
		STR get_nickname(void);

		void set_contact(STR p_number);
		STR get_phonenumber(void);
		
		void set_secret(STR d_secret);
		STR get_darksecret(void);

		void set_index(int idx);
};

#endif
