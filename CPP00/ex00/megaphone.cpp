/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:19:09 by mgulenay          #+#    #+#             */
/*   Updated: 2022/10/17 20:38:48 by mgulenay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/* 	std::cout (character output) << -- writes to standard output
	std::endl -- end line, cursor will go to the next line
 */

void	ft_toupper(char *s)
{
	int	j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] = s[j] - 32;
			std::cout << s[j];
		}
		else
			std::cout << s[j];
		j++;
	}
}

int main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	i = 1;
	while (argv[i])
	{
		ft_toupper(argv[i]);
		putchar(' ');
		i++;
	}
	std::cout << std::endl;
	return (0);
}
