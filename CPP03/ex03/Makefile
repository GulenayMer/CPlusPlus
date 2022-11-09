# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 16:18:10 by mgulenay          #+#    #+#              #
#    Updated: 2022/11/09 19:33:14 by mgulenay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondtrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		ClapTrap.cpp \
		FragTrap.cpp \
		ScavTrap.cpp \
		DiamondTrap.cpp \

OBJ	=	$(SRC:%.cpp=%.o)

all: $(NAME)

RM = rm -f

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)
			
re: 		fclean all
