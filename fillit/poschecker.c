/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poschecker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:26:53 by rle-mino          #+#    #+#             */
/*   Updated: 2016/01/06 18:36:50 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		poschecker(char *str, size_t i, int y)
{
	int	nb;

	nb = 0;
	while (i < ft_strlen(str) + 1)
	{
		if (y == 4)
		{
			if (nb != 4)
			{
				return (0);
			}
			i++;
			y = 0;
			nb = 0;
		}
		if (str[i] == '#')
		{
			nb++;
			if (linkchecker(str, i, nb) == 0)
			{
				return (0);
			}
		}
		if (str[i] == '\n')
			y++;
		i++;
	}
	return (1);
}
