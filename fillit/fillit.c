/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 09:44:41 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/12 16:59:26 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		fillit(char *str, int k)
{
	char	*result;
	int		i;

	i = 2;
	result = blank_tab(i);
	while (f_check(result, k) == 0)
		if (drop(result, str) == 0)
		{
			free(result);
			i++;
			result = blank_tab(i);
		}
	ft_putstr(result);
}
