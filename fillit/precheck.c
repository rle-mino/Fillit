/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:29:29 by rle-mino          #+#    #+#             */
/*   Updated: 2016/01/07 17:05:06 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		linecount(char *str)
{
	int	i;
	int	j;
	int k;

	j = 0;
	i = 0;
	k = ft_strlen(str);
	if (wrongchar(str[k - 2]) == 0)
		return (0);
	while (str[i])
	{
		if(str[i] == '\n')
			j++;
		i++;
	}
	if ((k / 20 * 4) + (k % 20) != j)
		return (0);
	return (1);
}

int		precheck(char *str)
{
	int	ret;
	if (linecount(str) == 0)
		return (0);
	ret = gridchecker(str, 0, 0, 0);
	if (ret == 0)
		return (0);
	ret = poschecker(str, 0, 0, 0);
	if (ret == 0)
		return (0);
	return (1);
}
