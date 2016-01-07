/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 09:44:41 by rle-mino          #+#    #+#             */
/*   Updated: 2016/01/07 17:10:46 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
	t_list	**cpy;
	int		y;

	y = 0;
	cpy = list_it(str, nb);
	tab = blank_tab(size, 0, 0, 0);
	while (cpy[y])
	{
		ponderer(cpy[y], size);
		y++;
	}
	if (fill_tetri(cpy, tab, 0, 0) == 0)
		return (fillit(pieces, nb, str, size + 1));
	else
		return (tab);
}
