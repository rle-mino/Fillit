/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twod.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:57:14 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/10 11:42:52 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

char		**twod(int i)
{
	char		**tab;
	int			j;

	j = 0;
	*tab = ft_memalloc(sizeof(char *) * i);
	if (!tab)
		return (NULL);
	while (tab[j])
	{
		tab[j] = ft_memalloc(sizeof(char *) * i);
		if (tab[j])
			return (NULL);
		j++;
	}
	return(tab);
}
