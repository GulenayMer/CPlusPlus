/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:05:56 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/25 14:02:33 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

/*
	-- takes 3 parameters: a filename & two strings, s1 & s2
	-- will open the file and copy its contents into a NEW file, 
		replacing every occurance of s1 with s2 -- in case s1 is found
*/

/* 	is:open() .. returns whether the stream is currently 
		associated to a file
*/

void	replace_str(std::string input_file, std::string s1, std::string s2)
{
	std::ifstream	input_fstream;
	std::ofstream	output_fstream;
	std::string		buff;
	std::string		line;

	input_fstream.open(input_file, std::ifstream::in);
	if (!input_fstream.is_open())
	{
		std::cout << "Errorrr while opening the input file " << std::endl;
		return ;
	}
	output_fstream.open(input_file + ".replace", std::ofstream::out);
	if (!output_fstream.is_open())
	{
		std::cout << "Errorrr while opening the output file " << std::endl;
		return ;
	}
	if (s1.length() == 0 || s2.length() == 0 || input_file.length() == 0)
	{
		std::cout << "Check the arguments' length " << std::endl;
		return ;
	}
	while (std::getline(input_fstream, line))
	{
		buff += line;
		if (!input_fstream.eof())
			buff += "\n";

		size_t pos = 0;
		while ((pos = buff.find(s1, 0)) != buff.npos)
		{
			buff = buff.erase(pos, s1.length());
			buff.insert(pos, s2);
		}
	}
	output_fstream << buff;

	/* when all done, close the files */
	input_fstream.close();
	output_fstream.close();
}

int main(int argc, char **argv)
{
	std::string		input_file = argv[1];
	std::string 	string1 = argv[2];
	std::string 	string2 = argv[3];

	if (argc != 4)
	{
		std::cout << "Errorrrr! Enter a filename and two strings" << std::endl;
		return (1);
	}
	replace_str(input_file, string1, string2);
	return (0);
}
