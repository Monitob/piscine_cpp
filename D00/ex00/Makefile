# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 14:39:04 by jbernabe          #+#    #+#              #
#    Updated: 2015/01/05 14:39:16 by jbernabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++

NAME = megaphone

CFLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(SRC) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

.cpp.o:
	$(CC)  -o $@ $^ $(CFLAGS)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(OBJ)
	@rm -f $(NAME)

re: fclean all
