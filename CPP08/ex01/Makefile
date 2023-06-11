# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgulenay <mgulenay@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 15:22:31 by mgulenay          #+#    #+#              #
#    Updated: 2022/11/28 15:22:46 by mgulenay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		Span.cpp \

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
