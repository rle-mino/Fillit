/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poschecker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:26:53 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/09 17:48:45 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		poschecker(char *str, size_t i, int x, int y)
{
	int	nb;

	nb = 0;
	while (i < ft_strlen(str) + 1)
	{
		if (y == 4)
		{
			if (nb != 4)
				return (0);
			i++;
			y = 0;
			nb = 0;
		}
		if (str[i] == '#')
		{
			nb++;
			if (linkchecker(str, i, nb) == 0)
			{
				printf("Faux en %lu !\n", i);
				return (0);
			}
		}
		if (str[i] == '\n')
			y++;
		i++;
	}
	printf("y = %i\n", y);
	printf("nb = %i\n", nb);
	return (1);
}
