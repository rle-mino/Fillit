/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 18:10:43 by mdiarra           #+#    #+#             */
/*   Updated: 2016/01/07 18:14:20 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft.h"

# define ERROR {ft_putstr("error\n");return (0);}

typedef struct		s_list
{
	int				s_pos;
	char			c;
	int				index;
	int				newline;
	struct s_list	*next;
}					t_list;

size_t				lenfile(int fd);
int					wrongchar(char c);
int					precheck(char *str);
char				*file_to_line(size_t size, int file);
int					gridchecker(char *str, int i, int x, int y);
int					linkchecker(char *str, int i, int nb);
int					poschecker(char *str, size_t i, int nb, int y);
char				*fillit(t_list **pieces, int nb, char *str, int size);
int					nb_piece(char *str);
char				*blank_tab(int size, int i, int x, int y);
void				s_fill(char *str, int nb, t_list **blank, int i);
t_list				**blanklist(int nb);
int					fill_tetri(t_list **t, char *s, int nb, int x);
t_list				**list_it(char *str, int nb);
void				ponderer(t_list *t, int size);

#endif
