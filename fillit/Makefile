# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/09 17:30:36 by rle-mino          #+#    #+#              #
#    Updated: 2015/12/10 17:34:47 by mdiarra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = 		main.c			\
			file_to_line.c	\
			gridchecker.c	\
			lenfile.c		\
			linkchecker.c	\
			openfile.c		\
			poschecker.c	\
			precheck.c		\
			wrongchar.c		\
			nb_piece.c

LIB =		libft.a

all : $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) $(LIB)

clean:
	rm -rf $(NAME)

re : clean all
