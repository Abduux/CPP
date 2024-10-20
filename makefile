# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/20 11:23:45 by ahraich           #+#    #+#              #
#    Updated: 2024/10/20 11:54:29 by ahraich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC  = main.cpp Contact.cpp Phonebook.cpp Utiles.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Phonebook
CPP = c++
REMOVE = rm -rf


all : ${NAME}

${NAME}: ${OBJ} Contact.hpp Phonebook.hpp Utiles.hpp
	${CPP} ${OBJ} ${FLAGS} -o ${NAME}

clean:
	${REMOVE} ${OBJ}

fclean: clean
	${REMOVE} ${NAME}

re: fclean all


