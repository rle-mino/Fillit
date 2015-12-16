/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 09:44:41 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/16 14:46:05 by mdiarra          ###   ########.fr       */
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

	b = 0;
	cpy = list_it(str, nb);
	//tab = blank_tab(size, 0 , 0, 0);
		printf ("enter\n");
	while (b < nb)
	{
		ponderer(cpy[b], size);
		b++;
	}
	b = 0;
	while ((tab = fill_tetri(cpy, size, nb, b)) == NULL && b < size)
		b++;
	if (b >= size)
		fillit(pieces, nb, str, size + 1);
}
		//	fill_tetri(tab, pieces, size, 0);

	//	if ((drop(str, tab, size)) == 0)
	//		free_twod(tab);
	//	size++;
	//}
