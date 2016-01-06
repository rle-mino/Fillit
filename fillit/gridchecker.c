/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridchecker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:08:59 by mdiarra           #+#    #+#             */
/*   Updated: 2016/01/06 18:42:21 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		gridchecker(char *str, int i, int x, int y)
{
	if (wrongchar(str[ft_strlen(str) - 2]) == 0)
	{
		return (0);
	}
	while (str[i])
	{
		x = i;
		while (x < (i + 4))
		{
			if (wrongchar(str[x]) == 0)
				return (0);
			x++;
		}
		if (str[x] != '\n')
		{
			return (0);
		}
		i += 5;
		y++;
		if (y == 4)
		{
			if (str[i] != '\n' && str[i])
			{
				return (0);
			}
			y = 0;
			i++;
		}
	}
	return (1);
}
