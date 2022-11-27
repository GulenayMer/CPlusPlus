# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 17:17:07 by mgulenay          #+#    #+#              #
#    Updated: 2022/11/27 15:58:55 by mgulenay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = base

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		Base.cpp \

OBJ	=	$(SRC:%.cpp=%.o)

all: $(NAME)

RM = rm -f

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ): %.o: %.cpp	
		$(CC) -c $(FLAGS) $< -o $@

clean:
		$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)
			
re: 		fclean all
