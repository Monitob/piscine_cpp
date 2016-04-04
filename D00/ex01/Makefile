# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 14:39:04 by jbernabe          #+#    #+#              #
#    Updated: 2016/04/04 16:48:09 by jbernabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

NAME = phonebook

CFLAGS = -Wall -Wextra -Werror

SRC =  main.cpp Contact.class.cpp

DEPS = Contact.class.hpp

OBJ = $(SRC:.cpp=.o)

all: $(SRC) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)  -I ./

.o: $(SRC) $(DEPS)
	$(CC) -c $@


clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(OBJ)
	@rm -f $(NAME)

re: fclean all
