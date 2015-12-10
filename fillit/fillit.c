/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-mino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 09:44:41 by rle-mino          #+#    #+#             */
/*   Updated: 2015/12/10 12:22:08 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void		fillit(char *str)
{
	char		**tab;
	int			i;
	int			j;

	j = 0;
	i = minsize(str);
	while (f_check(str, tab) == 0)
	{
		tab = twod(i);
		if ((drop(str, tab)) == 0)
			free_twod(tab, i);
		i++;
	}
}
