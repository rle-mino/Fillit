/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gridchecker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:08:59 by mdiarra           #+#    #+#             */
/*   Updated: 2015/12/09 15:36:34 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		gridchecker(char *str, int i, int x, int y)
{
	printf("%lu\n",ft_strlen(str));
	if (wrongchar(str[ft_strlen(str) - 2]) == 0)
		return (0);
	while (str[i])
	{
		x = i;
		while (x < (i + 4))
		{
			if (wrongchar(str[x]) == 0)
				return(0);
			x ++;
		}
		if (str[x] != '\n')
			return (0);
		i += 5;
		y++;
		if (y == 4)
		{
			if (str[i] != '\n' && str[i])
				return (0);
			y = 0;
			i++;
		}
	}
	return (1);
}
int		linkchecker(char *str, int i, int nb)
{
	if (nb < 4)
	{
		if (str[i + 1] != '#' && str[i + 5] != '#')
		{
			while (str[i - 1] == '#')
			{
				if (str[i + 4] == '#')
					return (1);
				i--;
			}
			return (0);
		}
	}
//	else if (nb > 4)
//		return (0);
	return (1);
}

int		poschecker(char	*str, size_t i, int x, int y)
{
	int	nb;

	nb = 0;
	while (i < ft_strlen(str) + 1)
	{
		if (y == 4)
		{
			if(nb != 4)
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
		if(str[i] == '\n')
			y++;
		i++;
	}
	printf("y = %i\n", y);
	printf("nb = %i\n", nb);
	return(1);
}
int		precheck(char *str)
{
	int	i;
	int	x;
	int	y;
	int	ret;

	ret = gridchecker(str, 0, 0, 0);
	printf("%i\n", ret);
	if (ret == 0)
		return (0);
	ret = poschecker(str, 0, 0, 0);
	printf("%i\n", ret);
	if (ret == 0)
		return (0);
	return (1);
}
