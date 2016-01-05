/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 09:44:41 by rle-mino          #+#    #+#             */
/*   Updated: 2016/01/05 17:43:32 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
/*
void		clean(t_list **cpy, char *tab, int b, int nb)
{
	int		i;
	int		x;

	x = nb - 1;
	while(b > 0)
	{
		i = ft_strlen(tab) - 1; 
		while (tab[i])
		{
			if(tab[i] == cpy[x]->c)
				tab[i] = '.';
			i--;
		}
		x--;
		b--;
	}
}

	while(ft_strchr(tab, cpy[i]->c) != NULL)
		i++;*/
t_list		**list_it(char *str, int nb)
{
	t_list	**pieces;

	pieces = blanklist(nb);
	s_fill(str, nb, pieces, 0);
	return (pieces);
}

char		*fillit(t_list **pieces, int nb, char *str, int size)
{
	char	*tab;
	int		b;
	t_list	**cpy;
	int		y;

	y = 0;
	b = 1;
	cpy = list_it(str, nb);
	tab = blank_tab(size, 0, 0, 0);
	printf ("enter\n");
	while (cpy[y])
	{
		ponderer(cpy[y], size);
		y++;
	}
	if (fill_tetri(cpy, tab, 0, 0) == 0)
		return (fillit(pieces, nb, str, size + 1));
	else
		printf("%s \n", tab);
		return (tab);
}
	/*while (tab == NULL && b <= (size + 1) * size)
	{
		tab = fill_tetri(cpy, size, y, b);
		b++;
	}*/
	//if ((tab = fill_tetri(cpy, size, 0, b)) == NULL)
	/*y = fill_tetri(cpy, tab, 0, 0); // 7
	if (y  < nb)
	{
		clean(cpy, tab, b, nb);
	}
*/
		//fillit(pieces, nb, str, size + 1);
		//	fill_tetri(tab, pieces, size, 0);

	//	if ((drop(str, tab, size)) == 0)
	//		free_twod(tab);
	//	size++;
	//}
