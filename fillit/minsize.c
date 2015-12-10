/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 09:59:33 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/10 10:31:15 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			minsize(char *str)
{
	int		i;
	int		j;
	int		k;

	j = 0;
	k = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '#')
			j++;
		i++;
	}
	while (k * k < j)
		k++;
	return (k);
}
