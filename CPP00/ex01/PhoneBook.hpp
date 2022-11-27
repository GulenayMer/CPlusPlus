/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:59:54 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/19 22:02:16 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#define ENTER "What do you want to do? Write ADD, SEARCH or EXIT" 
#define PB_FULL "The phonebook is full!"
#define PB_EMPTY "Phonebook is empty."
#define IDX_MSG "Enter an index between 0 to 8:"
#define IDX_MSG2 "Check the index!"
#define EXIT_MSG "You are exiting and phonebook will be deleted!"
#define INVALID "Invalid input, try again!"

#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

class PhoneBook
{
	private:
	/* attributes */
		Contact contact[8];
		int last_idx;
		int n_contacts;
	
	public:

	/* constructor and destructor */
		PhoneBook();
		~PhoneBook();

	/* methods */
		void add_contact(void);
		void search_contact(void);
};

#endif
