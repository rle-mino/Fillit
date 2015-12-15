/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillblank.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiarra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 13:18:04 by mdiarra           #+#    #+#             */
/*   Updated: 2015/12/11 13:26:15 by mdiarra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"fillit.h"
#include	"libft.h"

void		fillblank(char *tab, int size)
{
	int		i;

	i = 0;
	while(i < size)
	{
		tab[i] = '.';
		i++;
	}
	tab[size] = '\n';
	printf("%s", tab);
}
