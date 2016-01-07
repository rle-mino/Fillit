# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/09 17:30:36 by rle-mino          #+#    #+#              #
#    Updated: 2016/01/07 18:33:08 by mdiarra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = 		main.c			\
			file_to_line.c	\
			gridchecker.c	\
			lenfile.c		\
			linkchecker.c	\
			poschecker.c	\
			precheck.c		\
			wrongchar.c		\
			nb_piece.c		\
			fillit.c		\
			blank_tab.c		\
			fill_struct.c	\
			fill_tetri.c

LIB =		libft.a

all : $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) $(LIB)

clean:
	rm -rf $(NAME)

re : clean all
