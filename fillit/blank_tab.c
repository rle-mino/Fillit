/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blank_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 13:33:51 by mdiarra           #+#    #+#             */
/*   Updated: 2015/12/12 16:42:48 by rle-mino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*blank_tab(int size)
{
	char	*str;
	int		k;

	k = 0;
	str = ft_strnew(size * (size + 1));
	while (k < (size * (size + 1)))
	{
		if (((k + 1) % (size + 1)) == 0)
			str[k] = '\n';
		else
			str[k] = '.';
		k++;
	}
	return (str);
}
