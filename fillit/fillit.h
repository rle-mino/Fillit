/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:58:53 by mdiarra           #+#    #+#             */
/*   Updated: 2015/12/15 16:48:27 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct		s_list
{
	int				s_pos;
	char			c;
	int				index;
	int				newline;
	struct s_list	*next;
}					t_list;

int					openfile(const char *path);
size_t				lenfile(int fd);
int					wrongchar(char c);
int					precheck(char *str);
char				*file_to_line(size_t size, int file);
int					gridchecker(char *str, int i, int x, int y);
int					linkchecker(char *str, int i, int nb);
int					poschecker(char *str, size_t i, int x, int y);
void				fillit(char *str, int nb, t_list *list);
int					minsize(char *str);
char				**twod(int i);
void				free_twod(char **tab);
int					f_check(char *str, char **tab, int size, int nb);
char				**drop(char *str, char **tab, int nb);
int					nb_piece(char *str);
void				fillblank(char *tab, int size);
char				*blank_tab(int size, int i, int x, int y);
t_list				**s_fill(char *str, int nb, t_list **blank, int i);
t_list				**blanklist(int nb);
char				*fill_tetri(t_list **t, int size, int nb, int x);

#endif
