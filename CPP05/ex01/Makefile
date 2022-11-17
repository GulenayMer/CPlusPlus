# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgulenay <mgulenay@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 18:18:36 by mgulenay          #+#    #+#              #
#    Updated: 2022/11/15 19:15:55 by mgulenay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = 	main.cpp \
		Bureaucrat.cpp \
		Form.cpp \

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
