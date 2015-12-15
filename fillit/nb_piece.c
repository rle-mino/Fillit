/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_piece.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 13:25:03 by mdiarra           #+#    #+#             */
/*   Updated: 2015/12/11 18:23:39 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int			nb_piece(char *str)
{
	int		i;
	int		res;
	int		nb;

	nb = 0;
	i = 0;
	res = 0;
	while (str[i])
	{
		if (nb == 4)
		{
			res++;
			nb = 0;
		}
		if (str[i] == '#')
		{
			str[i] = 'A'+ res;
			nb++;
			i++;
		}
		else
			i++;
	}
	return (res);
}
