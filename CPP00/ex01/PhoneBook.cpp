/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:59:04 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/17 21:14:16 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/* 
 + It has an array of contacts
 + max. 8 contacts
 + if 9.th is added, replace the oldest one by the new one
 + dynamic alloc. is not allowed

*/

PhoneBook::PhoneBook(void)
{
	std::cout << "Class PhoneBook is constructed" << std::endl;
	this->n_contacts = 0;
	this->last_idx = 0;
};

PhoneBook::~PhoneBook(void)
{
	std::cout << "Class PhoneBook is destructed" << std::endl;
};

/* the input should not be empty */
int	if_field_empty(STR field)
{
	int i;

	i = 0;
	while (field[i] != '\0' && (field[i] == ' ' || field[i] == '\t'))
		i++;
	if (field[i] == '\0' || field[0] == '\0')
		return (1);
	else
		return (0);
}

/* adds contact to the phonebook */
void PhoneBook::add_contact(void)
{
	STR f_n;
	STR l_n;
	STR _nick;
	STR p_nbr;
	STR d_s;

	if (this->n_contacts == 8)
	{
		std::cout << PB_FULL << std::endl;
	}

	std::cout << "FIRST NAME: " << std::endl;
	while (if_field_empty(f_n))
	{
		std::getline(std::cin, f_n);
		this->contact[this->last_idx].set_firstname(f_n);
	}

	std::cout <<  "LAST NAME: "  << std::endl;
	while (if_field_empty(l_n))
	{
		std::getline(std::cin, l_n);
		this->contact[this->last_idx].set_lastname(l_n);
	}

	std::cout << "NICKNAME: " << std::endl;
	while (if_field_empty(_nick))
	{
		std::getline(std::cin, _nick);
		this->contact[this->last_idx].set_nickname(_nick);
	}

	std::cout << "PHONE NUMBER: " << std::endl;
	while (if_field_empty(p_nbr))
	{
		std::getline(std::cin, p_nbr);
		this->contact[this->last_idx].set_contact(p_nbr);
	}

	std::cout <<  "THE DARKEST SECRET: " << std::endl;
	while (if_field_empty(d_s))
	{
		std::getline(std::cin, d_s);
		this->contact[this->last_idx].set_secret(d_s);
	}

	this->last_idx = (this->last_idx + 1) % 8;
	if (this->n_contacts < 8)
		this->n_contacts += 1;
}

/* 	+ display a list of 4 columns: index, first name, last name and nickname 
	+ each column must be 10 chars wide
	+ a pipe char. separates them
	+ text must be right-aligned
	+ if the text is longer than the column, it must be truncated and 
		the last displayable char. must be replaced by a dot.
*/
/* setw() -- Sets the field width to be used on output operations.
*/

void PhoneBook::search_contact(void)
{
	int i;
	int j;
	STR idx;
	
	std::cout << "| Index | First Name | Last Name | Nickname| " << std::endl;

	if (this->last_idx == 0)
	{
		std::cout << PB_EMPTY << std::endl;
		return ;
	}
	
	i = 0;
	while (i < this->n_contacts)
	{
		std::cout << "|" << std::setw(10) << i;
		if (PhoneBook::contact[i].get_firstname().length() > 10)
			std::cout << "|" << std::setw(10) << PhoneBook::contact[i].get_firstname().substr(0, 9) + ".";
		else
			std::cout << "|" << std::setw(10) << PhoneBook::contact[i].get_firstname();
		if (PhoneBook::contact[i].get_lastname().length() > 10)
			std::cout << "|" << std::setw(10) << PhoneBook::contact[i].get_lastname().substr(0, 9) + ".";
		else
			std::cout << "|" << std::setw(10) << PhoneBook::contact[i].get_lastname();
		if (PhoneBook::contact[i].get_nickname().length() > 10)
			std::cout << "|" << std::setw(10) << PhoneBook::contact[i].get_nickname().substr(0, 9) + ".";
		else
			std::cout << "|" << std::setw(10) << PhoneBook::contact[i].get_nickname();
		std::cout << "|" << std::endl;
		i++;
	}

	if (this->n_contacts > 0)
	{
		std::cout << IDX_MSG << std::endl;
		
		std::getline(std::cin, idx);
		j = atoi(idx.c_str());

		if (j >= 0 && j <= 7)
		{
			std::cout << "First name is : " << PhoneBook::contact[j].get_firstname() << std::endl;
			std::cout << "Second name is : " << PhoneBook::contact[j].get_lastname() << std::endl;
			std::cout << "Nickname is : " << PhoneBook::contact[j].get_nickname() << std::endl;
			std::cout << "Phonenumber is : " << PhoneBook::contact[j].get_phonenumber() << std::endl;
			std::cout << "The darkest secret is : " << PhoneBook::contact[j].get_darksecret() << std::endl;
		}
		else
			std::cout << IDX_MSG2 << std::endl;
	}
}
