# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/09 17:30:36 by rle-mino          #+#    #+#              #
#    Updated: 2016/01/06 19:46:15 by mdiarra          ###   ########.fr        #
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
			fillblank.c		\
			fillit.c		\
			blank_tab.c		\
			fill_struct.c	\
			fill_tetri.c

LIB =		libft.a

all : $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) $(LIB)

test: re
	rm -rf sample.fillit
	./tetri-gen -v -f 5
	./fillit sample.fillit

clean:
	rm -rf $(NAME)

re : clean all
