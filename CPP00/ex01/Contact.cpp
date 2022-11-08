/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:59:18 by mgulenay          #+#    #+#             */
/*   Updated: 2022/11/08 11:02:06 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* constructor is used to initiliaze the object / allocates the memory */
Contact::Contact()  
{
	//std::cout << "Class Contact is constructed" << std::endl;
	return ;
};

/* destructor is used to destroy the object / deallocates the memory */
Contact::~Contact(void)
{
	//std::cout << "Class Contact is destructed" << std::endl;
	return ;
};

/* sets the variables according to values passed */
void Contact::set_firstname(STR f_name)
{
	this->first_name = f_name;
};

void Contact::set_lastname(STR l_name)
{
	this->last_name = l_name;
};

void Contact::set_nickname(STR n_name)
{
	this->nickname = n_name;
};

void Contact::set_contact(STR p_number)
{
	this->phone_number = p_number;
};

void Contact::set_secret(STR d_secret)
{
	this->darkest_secret = d_secret;
};

void Contact::set_index(int idx)
{
	this->index = idx;
};

/* gets the info, whenever the user searchs for a particular contact */
STR Contact::get_firstname(void)
{
	return (this->first_name);
};

STR Contact::get_lastname(void)
{
	return (this->last_name);
};

STR Contact::get_nickname(void)
{
	return (this->nickname);
};

STR Contact::get_phonenumber(void)
{
	return (this->phone_number);
};

STR Contact::get_darksecret(void)
{
	return (this->darkest_secret);
};
