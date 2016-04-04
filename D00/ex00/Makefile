# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbernabe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/04 16:08:52 by jbernabe          #+#    #+#              #
#    Updated: 2016/04/04 16:09:08 by jbernabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

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
