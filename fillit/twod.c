/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twod.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:57:14 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/11 19:06:42 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

char		**twod(int i)
{
	char		**tab;
	int			j;

	j = 0;
	tab = (char**)ft_memalloc(sizeof(char *) * i);
	if (!tab)
	{
		printf("Malloc foireux\n");
		return (NULL);
	}
	while (tab[j])
	{
		tab[j] = (char*)ft_memalloc(sizeof(char) * (i + 1));
		if (!tab[j])
		{
			printf("Malloc foireux\n");
			return (NULL);
		}
		fillblanktab[j], i);
		j++;
	}
	return(tab);
}
