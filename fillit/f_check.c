/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_check.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 11:52:09 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/12 12:15:32 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			f_check(char *result, int k)
{
	int		i;
	int		j;

	j = ft_strlen(result) - 1;
	i = k;
	while (result[j])
	{
		if (result[j] >= 'A' || result[j] <= ('A' + k))
			i--;
		j--;
	}
	if (i == (- 1))
		return (1);
	return (0);
}
