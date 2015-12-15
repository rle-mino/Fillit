/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 09:44:41 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/15 19:27:51 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void		fillit(char *str, int nb, t_list *lst)
{
	char	*tab;
	int		b;
	int		size;
	t_list	**pieces;

	b = 0;
	size = 4;
	tab = 0;
	pieces = s_fill(str, nb, pieces, 0);
	tab = blank_tab(size, 0 , 0, 0);
	while (b < size * size)
		while((tab = fill_tetri(pieces, size, nb, b)) == NULL)
			b++;
		//	fill_tetri(tab, pieces, size, 0);
	printf("%s", tab);

	//	if ((drop(str, tab, size)) == 0)
	//		free_twod(tab);
	//	size++;
	//}
}
