/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 09:44:41 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/21 15:52:19 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

t_list		**list_it(char *str, int nb)
{
	t_list	**pieces;

	pieces = blanklist(nb);
	s_fill(str, nb, pieces, 0);
	return (pieces);
}

void		fillit(t_list **pieces, int nb, char *str, int size)
{
	char	*tab;
	int		b;
	t_list	**cpy;
	int		y;

	y = 0;
	b = 0;
	cpy = list_it(str, nb);
	tab = NULL;
		printf ("enter\n");
	while (b < nb)
	{
		ponderer(cpy[b], size);
		b++;
	}
	b = 0;
	while (tab == NULL && cpy[y])
	{
		tab = fill_tetri(cpy, size, y, b);
		if (b < (size + 1) * size)
			b++;
		else
		{
			b = 0;
			y++;
		}
	}
	if (tab == NULL)
		fillit(pieces, nb, str, size + 1);
}
		//	fill_tetri(tab, pieces, size, 0);

	//	if ((drop(str, tab, size)) == 0)
	//		free_twod(tab);
	//	size++;
	//}
