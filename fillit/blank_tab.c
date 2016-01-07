/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blank_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 13:33:51 by mdiarra           #+#    #+#             */
/*   Updated: 2016/01/07 18:05:01 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*blank_tab(int size, int i, int x, int y)
{
	char	*nutab;

	nutab = ft_strnew(size * size);
	while (y < size)
	{
		while (x < size)
		{
			nutab[i] = '.';
			i++;
			x++;
		}
		if (x == size)
		{
			nutab[i] = '\n';
			y++;
			i++;
			x = 0;
		}
	}
	return (nutab);
}
