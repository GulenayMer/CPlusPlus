# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 21:15:16 by mgulenay          #+#    #+#              #
#    Updated: 2022/10/22 11:41:07 by mgulenay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = human

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \
		main.cpp \

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
